
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num; int * idx; struct gnttab_copy* op; } ;
struct TYPE_13__ {int req_cons; } ;
struct xenvif_queue {TYPE_7__ rx_copy; TYPE_6__ rx; TYPE_4__* vif; } ;
struct xen_page_foreign {int gref; int domid; } ;
struct xen_netif_rx_request {int gref; } ;
struct page {int dummy; } ;
struct TYPE_10__ {int ref; } ;
struct TYPE_12__ {unsigned int offset; int domid; TYPE_3__ u; } ;
struct TYPE_8__ {int gmfn; int ref; } ;
struct TYPE_9__ {int offset; int domid; TYPE_1__ u; } ;
struct gnttab_copy {size_t len; TYPE_5__ dest; TYPE_2__ source; int flags; } ;
struct TYPE_11__ {int domid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 struct page* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 struct xen_page_foreign* FUNC_3 (struct page*) ;
 int FUNC_4 (struct xenvif_queue*) ;

__attribute__((used)) static void FUNC_5(struct xenvif_queue *VAR_4,
          struct xen_netif_rx_request *VAR_5,
          unsigned int VAR_6, void *VAR_7, size_t VAR_8)
{
 struct gnttab_copy *VAR_9;
 struct page *VAR_10;
 struct xen_page_foreign *VAR_11;

 if (VAR_4->rx_copy.num == VAR_0)
  FUNC_4(VAR_4);

 VAR_9 = &VAR_4->rx_copy.op[VAR_4->rx_copy.num];

 VAR_10 = FUNC_1(VAR_7);

 VAR_9->flags = VAR_2;

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11) {
  VAR_9->source.domid = VAR_11->domid;
  VAR_9->source.u.ref = VAR_11->gref;
  VAR_9->flags |= VAR_3;
 } else {
  VAR_9->source.u.gmfn = FUNC_0(VAR_7);
  VAR_9->source.domid = VAR_1;
 }

 VAR_9->source.offset = FUNC_2(VAR_7);
 VAR_9->dest.u.ref = VAR_5->gref;
 VAR_9->dest.domid = VAR_4->vif->domid;
 VAR_9->dest.offset = VAR_6;
 VAR_9->len = VAR_8;

 VAR_4->rx_copy.idx[VAR_4->rx_copy.num] = VAR_4->rx.req_cons;
 VAR_4->rx_copy.num++;
}
