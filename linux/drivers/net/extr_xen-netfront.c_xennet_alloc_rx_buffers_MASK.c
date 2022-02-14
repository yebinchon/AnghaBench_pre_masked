
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xen_netif_rx_request {unsigned short id; void* gref; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_9__ {scalar_t__ req_prod_pvt; scalar_t__ rsp_cons; } ;
struct netfront_queue {int rx_irq; TYPE_4__ rx; int rx_refill_timer; TYPE_2__* info; void** grant_rx_ref; int gref_rx_head; struct sk_buff** rx_skbs; } ;
typedef void* grant_ref_t ;
struct TYPE_8__ {int * frags; } ;
struct TYPE_7__ {TYPE_1__* xbdev; int netdev; } ;
struct TYPE_6__ {int otherend_id; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct xen_netif_rx_request* FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (void*,int ,struct page*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct page* FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;
 struct sk_buff* FUNC_13 (struct netfront_queue*) ;
 unsigned short FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct netfront_queue *VAR_5)
{
 RING_IDX VAR_6 = VAR_5->rx.req_prod_pvt;
 int VAR_7;
 int VAR_8 = 0;

 if (FUNC_12(!FUNC_8(VAR_5->info->netdev)))
  return;

 for (VAR_6 = VAR_5->rx.req_prod_pvt;
      VAR_6 - VAR_5->rx.rsp_cons < VAR_2;
      VAR_6++) {
  struct sk_buff *VAR_9;
  unsigned short VAR_10;
  grant_ref_t VAR_11;
  struct page *VAR_12;
  struct xen_netif_rx_request *VAR_13;

  VAR_9 = FUNC_13(VAR_5);
  if (!VAR_9) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_10 = FUNC_14(VAR_6);

  FUNC_0(VAR_5->rx_skbs[VAR_10]);
  VAR_5->rx_skbs[VAR_10] = VAR_9;

  VAR_11 = FUNC_5(&VAR_5->gref_rx_head);
  FUNC_4(FUNC_1((unsigned long)(int)VAR_11));
  VAR_5->grant_rx_ref[VAR_10] = VAR_11;

  VAR_12 = FUNC_10(&FUNC_11(VAR_9)->frags[0]);

  VAR_13 = FUNC_2(&VAR_5->rx, VAR_6);
  FUNC_6(VAR_11,
        VAR_5->info->xbdev->otherend_id,
        VAR_12,
        0);
  VAR_13->id = VAR_10;
  VAR_13->gref = VAR_11;
 }

 VAR_5->rx.req_prod_pvt = VAR_6;






 if (VAR_6 - VAR_5->rx.rsp_cons < VAR_3 ||
     FUNC_12(VAR_8)) {
  FUNC_7(&VAR_5->rx_refill_timer, VAR_4 + (VAR_1/10));
  return;
 }

 FUNC_3(&VAR_5->rx, VAR_7);
 if (VAR_7)
  FUNC_9(VAR_5->rx_irq);
}
