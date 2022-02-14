
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int usb_complete_t ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct tx_desc {int dummy; } ;
struct tx_agg {int urb; int * head; scalar_t__ skb_num; scalar_t__ skb_len; } ;
struct sk_buff_head {int lock; } ;
struct sk_buff {int len; } ;
struct r8152 {scalar_t__ tx_qlen; int intf; int udev; TYPE_2__* netdev; struct sk_buff_head tx_queue; int flags; } ;
struct net_device_stats {int tx_dropped; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;
struct TYPE_6__ {scalar_t__ gso_segs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int VAR_3 ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct r8152*,struct sk_buff*,struct sk_buff_head*) ;
 scalar_t__ FUNC_9 (struct r8152*,struct tx_desc*,struct sk_buff*,int,scalar_t__) ;
 int FUNC_10 (struct tx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int *,unsigned int) ;
 int FUNC_12 (struct sk_buff_head*) ;
 scalar_t__ FUNC_13 (struct sk_buff_head*) ;
 int FUNC_14 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_15 (struct sk_buff_head*,struct sk_buff_head*) ;
 TYPE_1__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int ,int *,int,int ,struct tx_agg*) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_27(struct r8152 *VAR_5, struct tx_agg *VAR_6)
{
 struct sk_buff_head VAR_7, *VAR_8 = &VAR_5->tx_queue;
 int VAR_9, VAR_10;
 u8 *VAR_11;

 FUNC_2(&VAR_7);
 FUNC_18(&VAR_8->lock);
 FUNC_15(VAR_8, &VAR_7);
 FUNC_19(&VAR_8->lock);

 VAR_11 = VAR_6->head;
 VAR_6->skb_num = 0;
 VAR_6->skb_len = 0;
 VAR_9 = VAR_3;

 while (VAR_9 >= VAR_1 + sizeof(struct tx_desc)) {
  struct tx_desc *VAR_12;
  struct sk_buff *VAR_13;
  unsigned int VAR_14;
  u32 VAR_15;

  VAR_13 = FUNC_0(&VAR_7);
  if (!VAR_13)
   break;

  VAR_14 = VAR_13->len + sizeof(*VAR_12);

  if (VAR_14 > VAR_9) {
   FUNC_1(&VAR_7, VAR_13);
   break;
  }

  VAR_11 = FUNC_21(VAR_11);
  VAR_12 = (struct tx_desc *)VAR_11;

  VAR_15 = (u32)FUNC_17(VAR_13);

  if (FUNC_9(VAR_5, VAR_12, VAR_13, VAR_13->len, VAR_15)) {
   FUNC_8(VAR_5, VAR_13, &VAR_7);
   continue;
  }

  FUNC_10(VAR_12, VAR_13);

  VAR_11 += sizeof(*VAR_12);

  VAR_14 = VAR_13->len;
  if (FUNC_11(VAR_13, 0, VAR_11, VAR_14) < 0) {
   struct net_device_stats *VAR_16 = &VAR_5->netdev->stats;

   VAR_16->tx_dropped++;
   FUNC_3(VAR_13);
   VAR_11 -= sizeof(*VAR_12);
   continue;
  }

  VAR_11 += VAR_14;
  VAR_6->skb_len += VAR_14;
  VAR_6->skb_num += FUNC_16(VAR_13)->gso_segs ?: 1;

  FUNC_3(VAR_13);

  VAR_9 = VAR_3 - (int)(FUNC_21(VAR_11) - VAR_6->head);

  if (FUNC_20(VAR_0, &VAR_5->flags))
   break;
 }

 if (!FUNC_12(&VAR_7)) {
  FUNC_18(&VAR_8->lock);
  FUNC_14(&VAR_7, VAR_8);
  FUNC_19(&VAR_8->lock);
 }

 FUNC_5(VAR_5->netdev);

 if (FUNC_4(VAR_5->netdev) &&
     FUNC_13(&VAR_5->tx_queue) < VAR_5->tx_qlen)
  FUNC_7(VAR_5->netdev);

 FUNC_6(VAR_5->netdev);

 VAR_10 = FUNC_22(VAR_5->intf);
 if (VAR_10 < 0)
  goto out_tx_fill;

 FUNC_24(VAR_6->urb, VAR_5->udev, FUNC_25(VAR_5->udev, 2),
     VAR_6->head, (int)(VAR_11 - (u8 *)VAR_6->head),
     (usb_complete_t)VAR_4, VAR_6);

 VAR_10 = FUNC_26(VAR_6->urb, VAR_2);
 if (VAR_10 < 0)
  FUNC_23(VAR_5->intf);

out_tx_fill:
 return VAR_10;
}
