
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int * maps; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1, u8 *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_1, 0, 1);
 FUNC_1(VAR_1, 0, VAR_3->cfg->maps[VAR_0], VAR_2);
 FUNC_0(VAR_1, 0, 0);
}
