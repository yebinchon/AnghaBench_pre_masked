
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lbtf_private {struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int type; scalar_t__ addr; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbtf_private*,int *) ;
 int FUNC_3 (struct lbtf_private*,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4,
   struct ieee80211_vif *VAR_5)
{
 struct lbtf_private *VAR_6 = VAR_4->priv;
 FUNC_0(VAR_2);
 if (VAR_6->vif != ((void*)0))
  return -VAR_0;

 VAR_6->vif = VAR_5;
 switch (VAR_5->type) {
 case 129:
 case 130:
  FUNC_3(VAR_6, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_6, VAR_3);
  break;
 default:
  VAR_6->vif = ((void*)0);
  return -VAR_0;
 }
 FUNC_2(VAR_6, (u8 *) VAR_5->addr);
 FUNC_1(VAR_2);
 return 0;
}
