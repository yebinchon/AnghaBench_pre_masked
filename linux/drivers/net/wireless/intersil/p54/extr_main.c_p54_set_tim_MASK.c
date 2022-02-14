
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int dummy; } ;
struct ieee80211_sta {int aid; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int FUNC_0 (struct p54_common*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_sta *VAR_1,
   bool VAR_2)
{
 struct p54_common *VAR_3 = VAR_0->priv;

 return FUNC_0(VAR_3, VAR_1->aid, VAR_2);
}
