
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int dummy; } ;


 int FUNC_0 (struct ar5523*,char*) ;
 int FUNC_1 (struct ar5523*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
    u32 VAR_2, bool VAR_3)
{
 struct ar5523 *VAR_4 = VAR_0->priv;

 FUNC_0(VAR_4, "flush called\n");
 FUNC_1(VAR_4);
}
