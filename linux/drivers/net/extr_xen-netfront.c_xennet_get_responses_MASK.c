
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xen_netif_rx_response {scalar_t__ status; int flags; scalar_t__ offset; int id; } ;
struct xen_netif_extra_info {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct netfront_rx_info {struct xen_netif_extra_info* extras; struct xen_netif_rx_response rx; } ;
struct TYPE_6__ {scalar_t__ rsp_cons; } ;
struct netfront_queue {TYPE_3__ rx; int gref_rx_head; TYPE_2__* info; } ;
struct device {int dummy; } ;
typedef scalar_t__ grant_ref_t ;
struct TYPE_5__ {TYPE_1__* netdev; } ;
struct TYPE_4__ {struct device dev; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct xen_netif_rx_response* FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (struct device*,char*,...) ;
 unsigned long FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct netfront_queue*,struct xen_netif_extra_info*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct netfront_queue*,scalar_t__) ;
 struct sk_buff* FUNC_10 (struct netfront_queue*,scalar_t__) ;
 int FUNC_11 (struct netfront_queue*,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct netfront_queue *VAR_9,
    struct netfront_rx_info *VAR_10, RING_IDX VAR_11,
    struct sk_buff_head *VAR_12)
{
 struct xen_netif_rx_response *VAR_13 = &VAR_10->rx;
 struct xen_netif_extra_info *VAR_14 = VAR_10->extras;
 struct device *VAR_15 = &VAR_9->info->netdev->dev;
 RING_IDX VAR_16 = VAR_9->rx.rsp_cons;
 struct sk_buff *VAR_17 = FUNC_10(VAR_9, VAR_16);
 grant_ref_t VAR_18 = FUNC_9(VAR_9, VAR_16);
 int VAR_19 = VAR_5 + (VAR_13->status <= VAR_4);
 int VAR_20 = 1;
 int VAR_21 = 0;
 unsigned long VAR_22;

 if (VAR_13->flags & VAR_6) {
  VAR_21 = FUNC_8(VAR_9, VAR_14, VAR_11);
  VAR_16 = VAR_9->rx.rsp_cons;
 }

 for (;;) {
  if (FUNC_7(VAR_13->status < 0 ||
        VAR_13->offset + VAR_13->status > VAR_8)) {
   if (FUNC_6())
    FUNC_3(VAR_15, "rx->offset: %u, size: %d\n",
      VAR_13->offset, VAR_13->status);
   FUNC_11(VAR_9, VAR_17, VAR_18);
   VAR_21 = -VAR_1;
   goto next;
  }






  if (VAR_18 == VAR_3) {
   if (FUNC_6())
    FUNC_3(VAR_15, "Bad rx response id %d.\n",
      VAR_13->id);
   VAR_21 = -VAR_1;
   goto next;
  }

  VAR_22 = FUNC_4(VAR_18, 0);
  FUNC_0(!VAR_22);

  FUNC_5(&VAR_9->gref_rx_head, VAR_18);

  FUNC_2(VAR_12, VAR_17);

next:
  if (!(VAR_13->flags & VAR_7))
   break;

  if (VAR_16 + VAR_20 == VAR_11) {
   if (FUNC_6())
    FUNC_3(VAR_15, "Need more slots\n");
   VAR_21 = -VAR_2;
   break;
  }

  VAR_13 = FUNC_1(&VAR_9->rx, VAR_16 + VAR_20);
  VAR_17 = FUNC_10(VAR_9, VAR_16 + VAR_20);
  VAR_18 = FUNC_9(VAR_9, VAR_16 + VAR_20);
  VAR_20++;
 }

 if (FUNC_7(VAR_20 > VAR_19)) {
  if (FUNC_6())
   FUNC_3(VAR_15, "Too many slots\n");
  VAR_21 = -VAR_0;
 }

 if (FUNC_7(VAR_21))
  VAR_9->rx.rsp_cons = VAR_16 + VAR_20;

 return VAR_21;
}
