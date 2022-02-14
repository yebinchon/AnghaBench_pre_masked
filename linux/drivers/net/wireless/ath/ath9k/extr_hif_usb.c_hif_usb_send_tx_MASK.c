
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; int tx_skb_cnt; scalar_t__ tx_buf_cnt; int tx_lock; int tx_skb_queue; } ;
struct hif_device_usb {TYPE_1__ tx; } ;
struct ath9k_htc_tx_ctl {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct hif_device_usb*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct hif_device_usb*,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hif_device_usb *VAR_9, struct sk_buff *VAR_10)
{
 struct ath9k_htc_tx_ctl *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;

 FUNC_4(&VAR_9->tx.tx_lock, VAR_12);

 if (VAR_9->tx.flags & VAR_6) {
  FUNC_5(&VAR_9->tx.tx_lock, VAR_12);
  return -VAR_4;
 }


 if (VAR_9->tx.tx_skb_cnt > VAR_7) {
  FUNC_5(&VAR_9->tx.tx_lock, VAR_12);
  return -VAR_5;
 }

 FUNC_5(&VAR_9->tx.tx_lock, VAR_12);

 VAR_11 = FUNC_0(VAR_10);


 if ((VAR_11->type == VAR_2) ||
     (VAR_11->type == VAR_1)) {
  VAR_13 = FUNC_3(VAR_9, VAR_10);
 }

 FUNC_4(&VAR_9->tx.tx_lock, VAR_12);

 if ((VAR_11->type == VAR_3) ||
     (VAR_11->type == VAR_0)) {
  FUNC_2(&VAR_9->tx.tx_skb_queue, VAR_10);
  VAR_9->tx.tx_skb_cnt++;
 }


 if ((VAR_9->tx.tx_buf_cnt == VAR_8) &&
     (VAR_9->tx.tx_skb_cnt < 2)) {
  FUNC_1(VAR_9);
 }

 FUNC_5(&VAR_9->tx.tx_lock, VAR_12);

 return VAR_13;
}
