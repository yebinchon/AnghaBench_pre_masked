
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {int mode; int enable_beacon; } ;




 int FUNC_0 (struct cw1200_common*,int) ;
 int FUNC_1 (struct cw1200_common*) ;

void FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
    u32 VAR_2, bool VAR_3)
{
 struct cw1200_common *VAR_4 = VAR_0->priv;

 switch (VAR_4->mode) {
 case 128:
  VAR_3 = 1;
  break;
 case 129:
  if (!VAR_4->enable_beacon)
   VAR_3 = 1;
  break;
 }

 if (!FUNC_0(VAR_4, VAR_3))
  FUNC_1(VAR_4);

 return;
}
