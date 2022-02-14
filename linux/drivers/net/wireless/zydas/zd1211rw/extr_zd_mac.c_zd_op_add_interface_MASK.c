
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_mac {scalar_t__ type; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int FUNC_0 (struct zd_mac*) ;
 struct zd_mac* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_2,
    struct ieee80211_vif *VAR_3)
{
 struct zd_mac *VAR_4 = FUNC_1(VAR_2);


 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_3->type) {
 case 129:
 case 130:
 case 128:
 case 132:
 case 131:
  VAR_4->type = VAR_3->type;
  break;
 default:
  return -VAR_0;
 }

 VAR_4->vif = VAR_3;

 return FUNC_0(VAR_4);
}
