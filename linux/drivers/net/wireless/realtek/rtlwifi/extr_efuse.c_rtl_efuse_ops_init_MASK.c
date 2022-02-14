
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * efuse_ops; } ;
struct rtl_priv {TYPE_1__ efuse; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_0(VAR_1);

 VAR_2->efuse.efuse_ops = &VAR_0;
}
