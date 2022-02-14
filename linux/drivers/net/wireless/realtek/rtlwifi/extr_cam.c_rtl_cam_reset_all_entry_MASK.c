
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int * maps; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_1)
{
 u32 VAR_2;
 struct rtl_priv *VAR_3 = FUNC_1(VAR_1);

 VAR_2 = FUNC_0(31) | FUNC_0(30);
 FUNC_2(VAR_3, VAR_3->cfg->maps[VAR_0], VAR_2);
}
