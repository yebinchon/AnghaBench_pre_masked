
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {struct ieee80211_vif* vif; } ;


 int VAR_0 ;

 int FUNC_0 (struct ar5523*,char*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_1,
    struct ieee80211_vif *VAR_2)
{
 struct ar5523 *VAR_3 = VAR_1->priv;

 FUNC_0(VAR_3, "add interface called\n");

 if (VAR_3->vif) {
  FUNC_0(VAR_3, "invalid add_interface\n");
  return -VAR_0;
 }

 switch (VAR_2->type) {
 case 128:
  VAR_3->vif = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
