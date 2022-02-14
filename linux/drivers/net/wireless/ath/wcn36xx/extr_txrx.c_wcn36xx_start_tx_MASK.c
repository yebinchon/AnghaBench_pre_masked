
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcn36xx_vif {int dummy; } ;
struct wcn36xx_tx_bd {int tx_comp; int tx_bd_sign; int dpu_rf; } ;
struct wcn36xx_sta {int dummy; } ;
struct wcn36xx {int hw; int dxe_lock; struct sk_buff* tx_ack_skb; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; int addr1; } ;
typedef int bd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct wcn36xx_tx_bd*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,char*,scalar_t__,int ) ;
 int FUNC_14 (struct wcn36xx*,struct wcn36xx_vif*,struct wcn36xx_tx_bd*,struct sk_buff*,int) ;
 int FUNC_15 (struct wcn36xx_tx_bd*,struct wcn36xx*,struct wcn36xx_vif**,struct wcn36xx_sta*,struct sk_buff*,int) ;
 int FUNC_16 (struct wcn36xx_tx_bd*,struct wcn36xx*,struct wcn36xx_vif**,struct sk_buff*,int) ;
 int FUNC_17 (char*) ;

int FUNC_18(struct wcn36xx *VAR_6,
       struct wcn36xx_sta *VAR_7,
       struct sk_buff *VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)VAR_8->data;
 struct wcn36xx_vif *VAR_10 = ((void*)0);
 struct ieee80211_tx_info *VAR_11 = FUNC_1(VAR_8);
 unsigned long VAR_12;
 bool VAR_13 = FUNC_4(VAR_9->frame_control);
 bool VAR_14 = FUNC_7(VAR_9->addr1) ||
  FUNC_8(VAR_9->addr1);
 struct wcn36xx_tx_bd VAR_15;
 int VAR_16;

 FUNC_9(&VAR_15, 0, sizeof(VAR_15));

 FUNC_12(VAR_4,
      "tx skb %p len %d fc %04x sn %d %s %s\n",
      VAR_8, VAR_8->len, FUNC_2(VAR_9->frame_control),
      FUNC_0(FUNC_2(VAR_9->seq_ctrl)),
      VAR_13 ? "low" : "high", VAR_14 ? "bcast" : "ucast");

 FUNC_13(VAR_5, "", VAR_8->data, VAR_8->len);

 VAR_15.dpu_rf = VAR_2;

 VAR_15.tx_comp = !!(VAR_11->flags & VAR_1);
 if (VAR_15.tx_comp) {
  FUNC_12(VAR_3, "TX_ACK status requested\n");
  FUNC_10(&VAR_6->dxe_lock, VAR_12);
  if (VAR_6->tx_ack_skb) {
   FUNC_11(&VAR_6->dxe_lock, VAR_12);
   FUNC_17("tx_ack_skb already set\n");
   return -VAR_0;
  }

  VAR_6->tx_ack_skb = VAR_8;
  FUNC_11(&VAR_6->dxe_lock, VAR_12);






  FUNC_5(VAR_6->hw);
 }


 if (VAR_13)
  FUNC_15(&VAR_15, VAR_6, &VAR_10, VAR_7, VAR_8, VAR_14);
 else

  FUNC_16(&VAR_15, VAR_6, &VAR_10, VAR_8, VAR_14);

 FUNC_3((u32 *)&VAR_15, sizeof(VAR_15)/sizeof(u32));
 VAR_15.tx_bd_sign = 0xbdbdbdbd;

 VAR_16 = FUNC_14(VAR_6, VAR_10, &VAR_15, VAR_8, VAR_13);
 if (VAR_16 && VAR_15.tx_comp) {



  FUNC_10(&VAR_6->dxe_lock, VAR_12);
  VAR_6->tx_ack_skb = ((void*)0);
  FUNC_11(&VAR_6->dxe_lock, VAR_12);

  FUNC_6(VAR_6->hw);
 }

 return VAR_16;
}
