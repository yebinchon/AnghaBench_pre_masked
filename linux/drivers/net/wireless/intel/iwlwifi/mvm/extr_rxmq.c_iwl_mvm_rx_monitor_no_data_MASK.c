
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_no_data {int * rx_vec; int * phy_info; int info; int rssi; int on_air_rise_time; int rate; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_rx_phy_data {void* info_type; int d0; } ;
struct iwl_mvm {int hw; int status; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int device_timestamp; int enc_flags; int rate_idx; int band; void* nss; int encoding; int freq; int bw; int zero_length_psdu_type; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;

 int VAR_40 ;


 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_2 (int,char*,int,int ) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,struct ieee80211_sta*,struct sk_buff*,struct napi_struct*) ;
 int FUNC_6 (struct sk_buff*,struct iwl_mvm_rx_phy_data*) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_rx_status*,int,int,int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct iwl_mvm*,struct sk_buff*,struct iwl_mvm_rx_phy_data*,int,int ,int) ;
 int FUNC_10 (struct sk_buff*) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 struct iwl_rx_packet* FUNC_15 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ) ;

void FUNC_18(struct iwl_mvm *VAR_43, struct napi_struct *VAR_44,
    struct iwl_rx_cmd_buffer *VAR_45, int VAR_46)
{
 struct ieee80211_rx_status *VAR_47;
 struct iwl_rx_packet *VAR_48 = FUNC_15(VAR_45);
 struct iwl_rx_no_data *VAR_49 = (void *)VAR_48->data;
 u32 VAR_50 = FUNC_12(VAR_49->rate);
 u32 VAR_51 = FUNC_12(VAR_49->on_air_rise_time);
 u32 VAR_52 = FUNC_12(VAR_49->rssi);
 u32 VAR_53 = FUNC_12(VAR_49->info) & VAR_40;
 u16 VAR_54 = VAR_5;
 struct ieee80211_sta *VAR_55 = ((void*)0);
 struct sk_buff *VAR_56;
 u8 VAR_57, VAR_58, VAR_59;
 struct iwl_mvm_rx_phy_data VAR_60 = {
  .d0 = VAR_49->phy_info[0],
  .info_type = VAR_7,
 };

 if (FUNC_17(FUNC_16(VAR_4, &VAR_43->status)))
  return;

 VAR_58 = (VAR_52 & VAR_34) >> VAR_35;
 VAR_59 = (VAR_52 & VAR_36) >> VAR_37;
 VAR_57 = (VAR_52 & VAR_38) >> VAR_39;

 VAR_60.info_type =
  FUNC_11(VAR_49->phy_info[1],
         VAR_6);




 VAR_56 = FUNC_3(128, VAR_0);
 if (!VAR_56) {
  FUNC_1(VAR_43, "alloc_skb failed\n");
  return;
 }

 VAR_47 = FUNC_0(VAR_56);


 VAR_47->flag |= VAR_33;

 switch (VAR_53) {
 case 128:
  VAR_47->zero_length_psdu_type =
   VAR_2;
  break;
 case 129:
 case 130:
  VAR_47->zero_length_psdu_type =
   VAR_1;
  break;
 default:
  VAR_47->zero_length_psdu_type =
   VAR_3;
  break;
 }


 switch (VAR_50 & VAR_17) {
 case 133:
  break;
 case 132:
  VAR_47->bw = VAR_13;
  break;
 case 131:
  VAR_47->bw = VAR_14;
  break;
 case 134:
  VAR_47->bw = VAR_12;
  break;
 }

 if (VAR_50 & VAR_18)
  FUNC_9(VAR_43, VAR_56, &VAR_60, VAR_50,
         VAR_54, VAR_46);

 FUNC_6(VAR_56, &VAR_60);

 VAR_47->device_timestamp = VAR_51;
 VAR_47->band = VAR_57 > 14 ? VAR_9 :
  VAR_8;
 VAR_47->freq = FUNC_4(VAR_57,
        VAR_47->band);
 FUNC_7(VAR_43, VAR_47, VAR_50, VAR_58,
        VAR_59);

 FUNC_13();

 if (!(VAR_50 & VAR_16) &&
     VAR_50 & VAR_21)
  VAR_47->enc_flags |= VAR_29;
 if (VAR_50 & VAR_10)
  VAR_47->enc_flags |= VAR_27;
 if (VAR_50 & VAR_20)
  VAR_47->enc_flags |= VAR_28;
 if (VAR_50 & VAR_19) {
  u8 VAR_61 = (VAR_50 & VAR_22) >>
    VAR_23;
  VAR_47->encoding = VAR_31;
  VAR_47->rate_idx = VAR_50 & VAR_11;
  VAR_47->enc_flags |= VAR_61 << VAR_30;
 } else if (VAR_50 & VAR_24) {
  u8 VAR_62 = (VAR_50 & VAR_22) >>
    VAR_23;
  VAR_47->rate_idx = VAR_50 & VAR_25;
  VAR_47->encoding = VAR_32;
  VAR_47->enc_flags |= VAR_62 << VAR_30;
  if (VAR_50 & VAR_15)
   VAR_47->enc_flags |= VAR_26;





  VAR_47->nss =
   FUNC_11(VAR_49->rx_vec[0],
          VAR_42) + 1;
 } else if (VAR_50 & VAR_18) {
  VAR_47->nss =
   FUNC_11(VAR_49->rx_vec[0],
          VAR_41) + 1;
 } else {
  int VAR_63 = FUNC_8(VAR_50,
              VAR_47->band);

  if (FUNC_2(VAR_63 < 0 || VAR_63 > 0xFF,
    "Invalid rate flags 0x%x, band %d,\n",
    VAR_50, VAR_47->band)) {
   FUNC_10(VAR_56);
   goto out;
  }
  VAR_47->rate_idx = VAR_63;
 }

 FUNC_5(VAR_43->hw, VAR_55, VAR_56, VAR_44);
out:
 FUNC_14();
}
