
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ ip_summed; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct htt_data_tx_desc {int flags0; int peerid; scalar_t__ frags_paddr; void* id; void* len; void* flags1; } ;
struct htt_cmd_hdr {int msg_type; } ;
struct ath10k_skb_cb {int flags; } ;
struct ath10k_htt {int eid; struct ath10k* ar; } ;
struct TYPE_2__ {scalar_t__ hl_msdu_ids; } ;
struct ath10k {int htc; TYPE_1__ bus_param; int dev_flags; } ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;


 int VAR_0 ;
 int VAR_1 ;




 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int const,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 int FUNC_6 (int *,int ,struct sk_buff*) ;
 int FUNC_7 (struct ath10k_htt*,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct ath10k*,struct sk_buff*) ;
 int FUNC_10 (struct ath10k*,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_20 (struct sk_buff*,scalar_t__) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct ath10k_htt *VAR_17, enum ath10k_hw_txrx_mode VAR_18,
       struct sk_buff *VAR_19)
{
 struct ath10k *VAR_20 = VAR_17->ar;
 int VAR_21, VAR_22;
 struct htt_cmd_hdr *VAR_23;
 struct ieee80211_hdr *VAR_24 = (struct ieee80211_hdr *)VAR_19->data;
 struct htt_data_tx_desc *VAR_25;
 struct ath10k_skb_cb *VAR_26 = FUNC_0(VAR_19);
 struct sk_buff *VAR_27;
 bool VAR_28 = (VAR_18 == 131);
 u8 VAR_29 = FUNC_9(VAR_20, VAR_19);
 u8 VAR_30 = FUNC_8(VAR_19, VAR_28);
 u8 VAR_31 = 0;
 u16 VAR_32 = 0;
 u16 VAR_33 = 0;

 if ((FUNC_12(VAR_24->frame_control) ||
      FUNC_13(VAR_24->frame_control) ||
      FUNC_14(VAR_24->frame_control)) &&
      FUNC_11(VAR_24->frame_control)) {
  FUNC_19(VAR_19, VAR_16);
 }

 VAR_22 = VAR_19->len;

 switch (VAR_18) {
 case 128:
 case 129:
  VAR_31 |= VAR_5;

 case 131:
  VAR_31 |= FUNC_1(VAR_18, VAR_7);
  break;
 case 130:
  VAR_31 |= FUNC_1(130,
        VAR_7);
  VAR_31 |= VAR_5;
  break;
 }

 if (VAR_26->flags & VAR_2)
  VAR_31 |= VAR_6;

 VAR_32 |= FUNC_1((u16)VAR_29, VAR_12);
 VAR_32 |= FUNC_1((u16)VAR_30, VAR_10);
 if (VAR_19->ip_summed == VAR_3 &&
     !FUNC_21(VAR_1, &VAR_20->dev_flags)) {
  VAR_32 |= VAR_8;
  VAR_32 |= VAR_9;
 }




 if (FUNC_17(VAR_19) < VAR_15) {
  VAR_27 = VAR_19;

  FUNC_4(VAR_17->ar, VAR_0,
      "Not enough headroom in skb. Current headroom: %u, needed: %u. Reallocating...\n",
      FUNC_17(VAR_19), VAR_15);
  VAR_19 = FUNC_20(VAR_19, VAR_15);
  FUNC_15(VAR_27);
  if (!VAR_19) {
   FUNC_10(VAR_17->ar, "htt hl tx: Unable to realloc skb!\n");
   VAR_21 = -VAR_4;
   goto out;
  }
 }

 if (VAR_20->bus_param.hl_msdu_ids) {
  VAR_32 |= VAR_11;
  VAR_21 = FUNC_7(VAR_17, VAR_19);
  if (VAR_21 < 0) {
   FUNC_5(VAR_20, "msdu_id allocation failed %d\n", VAR_21);
   goto out;
  }
  VAR_33 = VAR_21;
 }






 FUNC_16(VAR_19);

 FUNC_18(VAR_19, sizeof(*VAR_23));
 FUNC_18(VAR_19, sizeof(*VAR_25));
 VAR_23 = (struct htt_cmd_hdr *)VAR_19->data;
 VAR_25 = (struct htt_data_tx_desc *)(VAR_19->data + sizeof(*VAR_23));

 VAR_23->msg_type = VAR_13;
 VAR_25->flags0 = VAR_31;
 VAR_25->flags1 = FUNC_2(VAR_32);
 VAR_25->len = FUNC_2(VAR_22);
 VAR_25->id = FUNC_2(VAR_33);
 VAR_25->frags_paddr = 0;



 VAR_25->peerid = FUNC_3(VAR_14);

 VAR_21 = FUNC_6(&VAR_17->ar->htc, VAR_17->eid, VAR_19);

out:
 return VAR_21;
}
