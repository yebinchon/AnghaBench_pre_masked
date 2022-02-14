
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_ampdu_params {int action; int tid; struct ieee80211_sta* sta; } ;


 int VAR_0 ;







 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_vif*,int ,int ) ;
 int FUNC_2 (struct ieee80211_vif*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_1,
    struct ieee80211_vif *VAR_2,
    struct ieee80211_ampdu_params *VAR_3)
{
 struct ieee80211_sta *VAR_4 = VAR_3->sta;
 u16 VAR_5 = VAR_3->tid;

 switch (VAR_3->action) {
 case 131:
  FUNC_1(VAR_2, VAR_4->addr, VAR_5);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_2, VAR_4->addr, VAR_5);
  break;
 case 132:
 case 134:
 case 133:
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 return 0;
}
