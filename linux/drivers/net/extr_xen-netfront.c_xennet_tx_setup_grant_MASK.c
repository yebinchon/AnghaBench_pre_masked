
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xennet_gnttab_make_txreq {unsigned int size; struct xen_netif_tx_request* tx; struct sk_buff* skb; struct netfront_queue* queue; struct page* page; } ;
struct xen_netif_tx_request {unsigned int id; unsigned int offset; unsigned int size; scalar_t__ flags; void* gref; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_8__ {int req_prod_pvt; } ;
struct netfront_queue {void** grant_tx_ref; struct page** grant_tx_page; TYPE_3__* tx_skbs; TYPE_2__* info; int gref_tx_head; TYPE_4__ tx; int tx_skb_freelist; } ;
typedef void* grant_ref_t ;
struct TYPE_7__ {struct sk_buff* skb; } ;
struct TYPE_6__ {TYPE_1__* xbdev; } ;
struct TYPE_5__ {int otherend_id; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 struct xen_netif_tx_request* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int *,TYPE_3__*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (void*,int ,unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, void *VAR_4)
{
 struct xennet_gnttab_make_txreq *VAR_5 = VAR_4;
 unsigned int VAR_6;
 struct xen_netif_tx_request *VAR_7;
 grant_ref_t VAR_8;

 struct page *VAR_9 = VAR_5->page;
 struct netfront_queue *VAR_10 = VAR_5->queue;
 struct sk_buff *VAR_11 = VAR_5->skb;

 VAR_6 = FUNC_3(&VAR_10->tx_skb_freelist, VAR_10->tx_skbs);
 VAR_7 = FUNC_1(&VAR_10->tx, VAR_10->tx.req_prod_pvt++);
 VAR_8 = FUNC_4(&VAR_10->gref_tx_head);
 FUNC_2(FUNC_0((unsigned long)(int)VAR_8));

 FUNC_5(VAR_8, VAR_10->info->xbdev->otherend_id,
     VAR_1, VAR_0);

 VAR_10->tx_skbs[VAR_6].skb = VAR_11;
 VAR_10->grant_tx_page[VAR_6] = VAR_9;
 VAR_10->grant_tx_ref[VAR_6] = VAR_8;

 VAR_7->id = VAR_6;
 VAR_7->gref = VAR_8;
 VAR_7->offset = VAR_2;
 VAR_7->size = VAR_3;
 VAR_7->flags = 0;

 VAR_5->tx = VAR_7;
 VAR_5->size += VAR_7->size;
}
