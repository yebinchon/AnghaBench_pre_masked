
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_ampdu_params {int action; int ssn; int tid; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_1 (char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_sta*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_sta*,int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_sta*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_7 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4,
          struct ieee80211_ampdu_params *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_3);
 struct ieee80211_sta *VAR_7 = VAR_5->sta;
 enum ieee80211_ampdu_mlme_action VAR_8 = VAR_5->action;
 u16 VAR_9 = VAR_5->tid;
 u16 *VAR_10 = &VAR_5->ssn;

 switch (VAR_8) {
 case 131:
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "IEEE80211_AMPDU_TX_START: TID:%d\n", VAR_9);
  return FUNC_6(VAR_3, VAR_4, VAR_7, VAR_9, VAR_10);
 case 130:
 case 129:
 case 128:
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "IEEE80211_AMPDU_TX_STOP: TID:%d\n", VAR_9);
  return FUNC_7(VAR_3, VAR_4, VAR_7, VAR_9);
 case 132:
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "IEEE80211_AMPDU_TX_OPERATIONAL:TID:%d\n", VAR_9);
  FUNC_5(VAR_3, VAR_7, VAR_9);
  break;
 case 134:
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "IEEE80211_AMPDU_RX_START:TID:%d\n", VAR_9);
  return FUNC_3(VAR_3, VAR_7, VAR_9);
 case 133:
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "IEEE80211_AMPDU_RX_STOP:TID:%d\n", VAR_9);
  return FUNC_4(VAR_3, VAR_7, VAR_9);
 default:
  FUNC_1("IEEE80211_AMPDU_ERR!!!!:\n");
  return -VAR_2;
 }
 return 0;
}
