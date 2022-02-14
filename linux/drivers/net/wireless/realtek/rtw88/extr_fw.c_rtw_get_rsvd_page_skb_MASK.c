
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rtw_rsvd_packet_type { ____Placeholder_rtw_rsvd_packet_type } rtw_rsvd_packet_type ;







 struct sk_buff* FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*,int) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct sk_buff* FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct sk_buff* FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct ieee80211_hw *VAR_0,
          struct ieee80211_vif *VAR_1,
          enum rtw_rsvd_packet_type VAR_2)
{
 struct sk_buff *VAR_3;

 switch (VAR_2) {
 case 132:
  VAR_3 = FUNC_3(VAR_0, VAR_1);
  break;
 case 129:
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  break;
 case 130:
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  break;
 case 131:
  VAR_3 = FUNC_0(VAR_0, VAR_1, 0);
  break;
 case 128:
  VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
  break;
 default:
  return ((void*)0);
 }

 if (!VAR_3)
  return ((void*)0);

 return VAR_3;
}
