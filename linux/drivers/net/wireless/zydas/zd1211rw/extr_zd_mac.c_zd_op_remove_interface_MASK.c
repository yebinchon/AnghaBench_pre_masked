
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_mac {int chip; int * vif; int type; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct zd_mac* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct zd_mac*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2)
{
 struct zd_mac *VAR_3 = FUNC_0(VAR_1);
 VAR_3->type = VAR_0;
 VAR_3->vif = ((void*)0);
 FUNC_2(&VAR_3->chip, 0, 0, VAR_0);
 FUNC_3(&VAR_3->chip, ((void*)0));

 FUNC_1(VAR_3);
}
