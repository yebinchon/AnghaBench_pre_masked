
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int * vif; } ;


 int FUNC_0 (struct ar5523*,char*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1)
{
 struct ar5523 *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_2, "remove interface called\n");
 VAR_2->vif = ((void*)0);
}
