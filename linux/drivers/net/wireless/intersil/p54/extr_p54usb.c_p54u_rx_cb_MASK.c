
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int actual_length; void* transfer_buffer; struct sk_buff* context; } ;
struct sk_buff {scalar_t__ cb; } ;
struct p54u_rx_info {struct ieee80211_hw* dev; struct urb* urb; } ;
struct TYPE_2__ {int tx_hdr_len; scalar_t__ fw_interface; scalar_t__ rx_mtu; } ;
struct p54u_priv {scalar_t__ hw_type; int rx_queue; int submitted; TYPE_1__ common; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct urb*,int *) ;
 scalar_t__ FUNC_13 (struct urb*,int ) ;
 int FUNC_14 (struct urb*) ;

__attribute__((used)) static void FUNC_15(struct urb *VAR_3)
{
 struct sk_buff *VAR_4 = (struct sk_buff *) VAR_3->context;
 struct p54u_rx_info *VAR_5 = (struct p54u_rx_info *)VAR_4->cb;
 struct ieee80211_hw *VAR_6 = VAR_5->dev;
 struct p54u_priv *VAR_7 = VAR_6->priv;

 FUNC_10(VAR_4, &VAR_7->rx_queue);

 if (FUNC_11(VAR_3->status)) {
  FUNC_1(VAR_4);
  return;
 }

 FUNC_5(VAR_4, VAR_3->actual_length);

 if (VAR_7->hw_type == VAR_2)
  FUNC_3(VAR_4, VAR_7->common.tx_hdr_len);
 if (VAR_7->common.fw_interface == VAR_0) {
  FUNC_3(VAR_4, 4);
  FUNC_5(VAR_4, 4);
 }

 if (FUNC_2(VAR_6, VAR_4)) {
  VAR_4 = FUNC_0(VAR_7->common.rx_mtu + 32);
  if (FUNC_11(!VAR_4)) {

   return;
  }

  VAR_5 = (struct p54u_rx_info *) VAR_4->cb;
  VAR_5->urb = VAR_3;
  VAR_5->dev = VAR_6;
  VAR_3->transfer_buffer = FUNC_8(VAR_4);
  VAR_3->context = VAR_4;
 } else {
  if (VAR_7->hw_type == VAR_2)
   FUNC_4(VAR_4, VAR_7->common.tx_hdr_len);
  if (VAR_7->common.fw_interface == VAR_0) {
   FUNC_4(VAR_4, 4);
   FUNC_5(VAR_4, 4);
  }
  FUNC_7(VAR_4);
  FUNC_9(VAR_4, 0);
  VAR_3->transfer_buffer = FUNC_8(VAR_4);
 }
 FUNC_6(&VAR_7->rx_queue, VAR_4);
 FUNC_12(VAR_3, &VAR_7->submitted);
 if (FUNC_13(VAR_3, VAR_1)) {
  FUNC_10(VAR_4, &VAR_7->rx_queue);
  FUNC_14(VAR_3);
  FUNC_1(VAR_4);
 }
}
