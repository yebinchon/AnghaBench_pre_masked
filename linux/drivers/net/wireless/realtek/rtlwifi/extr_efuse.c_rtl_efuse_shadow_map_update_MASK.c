
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {TYPE_1__* cfg; } ;
struct rtl_efuse {int ** efuse_map; scalar_t__ autoload_failflag; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int * maps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int,int ) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

void FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_3);
 struct rtl_efuse *VAR_5 = FUNC_3(FUNC_4(VAR_3));

 if (VAR_5->autoload_failflag)
  FUNC_2((&VAR_5->efuse_map[VAR_1][0]),
         0xFF, VAR_4->cfg->maps[VAR_0]);
 else
  FUNC_0(VAR_3, &VAR_5->efuse_map[VAR_1][0]);

 FUNC_1(&VAR_5->efuse_map[VAR_2][0],
   &VAR_5->efuse_map[VAR_1][0],
   VAR_4->cfg->maps[VAR_0]);

}
