
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int priority; } ;
struct mwifiex_txinfo {int bss_type; int bss_num; } ;
struct mwifiex_private {int const* curr_addr; int bss_type; int bss_num; int cfg_bssid; TYPE_1__* adapter; } ;
struct ieee_types_vht_oper {int dummy; } ;
struct ieee_types_vht_cap {int dummy; } ;
struct ieee_types_header {int dummy; } ;
struct ieee_types_extcap {int dummy; } ;
struct ieee_types_bss_co_2040 {int dummy; } ;
struct ieee_types_aid {int dummy; } ;
struct ieee80211_wmm_param_ie {int dummy; } ;
struct ieee80211_tdls_lnkie {int dummy; } ;
struct ieee80211_tdls_data {int dummy; } ;
struct ieee80211_mgmt {int dummy; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_hw_11ac_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;





 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct mwifiex_txinfo*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (struct mwifiex_private*,int const*,int,int,scalar_t__,struct sk_buff*) ;
 int FUNC_9 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int const*,int const*,int ) ;
 int FUNC_11 (struct sk_buff*,int const*,size_t) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;

int FUNC_13(struct mwifiex_private *VAR_9, const u8 *VAR_10,
     u8 VAR_11, u8 VAR_12,
     u16 VAR_13, const u8 *VAR_14,
     size_t VAR_15)
{
 struct sk_buff *VAR_16;
 struct mwifiex_txinfo *VAR_17;
 int VAR_18;
 u16 VAR_19;

 VAR_19 = VAR_3 +
    FUNC_4(sizeof(struct ieee80211_mgmt),
        sizeof(struct ieee80211_tdls_data)) +
    VAR_2 +
    VAR_8 +
    3 +
    sizeof(struct ieee_types_extcap) +
    sizeof(struct ieee80211_ht_cap) +
    sizeof(struct ieee_types_bss_co_2040) +
    sizeof(struct ieee80211_ht_operation) +
    sizeof(struct ieee80211_tdls_lnkie) +
    (2 * (sizeof(struct ieee_types_header))) +
     VAR_7 +
     VAR_4 +
    sizeof(struct ieee80211_wmm_param_ie) +
    VAR_15;

 if (VAR_9->adapter->is_hw_11ac_capable)
  VAR_19 += sizeof(struct ieee_types_vht_cap) +
      sizeof(struct ieee_types_vht_oper) +
      sizeof(struct ieee_types_aid);

 VAR_16 = FUNC_2(VAR_19);
 if (!VAR_16) {
  FUNC_7(VAR_9->adapter, VAR_1,
       "allocate skb failed for management frame\n");
  return -VAR_0;
 }
 FUNC_12(VAR_16, VAR_3);

 switch (VAR_11) {
 case 130:
 case 131:
 case 128:
 case 132:
  VAR_18 = FUNC_8(VAR_9, VAR_10, VAR_11,
         VAR_12, VAR_13,
         VAR_16);
  if (VAR_18) {
   FUNC_3(VAR_16);
   return VAR_18;
  }
  if (VAR_15)
   FUNC_11(VAR_16, VAR_14, VAR_15);
  FUNC_10(VAR_16, VAR_9->curr_addr, VAR_10,
      VAR_9->cfg_bssid);
  break;
 case 129:
  VAR_18 = FUNC_8(VAR_9, VAR_10, VAR_11,
         VAR_12, VAR_13,
         VAR_16);
  if (VAR_18) {
   FUNC_3(VAR_16);
   return VAR_18;
  }
  if (VAR_15)
   FUNC_11(VAR_16, VAR_14, VAR_15);
  FUNC_10(VAR_16, VAR_10, VAR_9->curr_addr,
      VAR_9->cfg_bssid);
  break;
 }

 switch (VAR_11) {
 case 130:
 case 129:
  VAR_16->priority = VAR_5;
  break;
 default:
  VAR_16->priority = VAR_6;
  break;
 }

 VAR_17 = FUNC_0(VAR_16);
 FUNC_5(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->bss_num = VAR_9->bss_num;
 VAR_17->bss_type = VAR_9->bss_type;

 FUNC_1(VAR_16);
 FUNC_9(VAR_9, VAR_16);




 if (VAR_11 == 131 ||
     VAR_11 == 128)
  FUNC_6(10);

 return 0;
}
