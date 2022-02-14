
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dig_t {int cursta_cstate; int presta_cstate; int curmultista_cstate; } ;
struct rtl_priv {struct dig_t dm_digtable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ act_scanning; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_4(VAR_4);
 struct dig_t *VAR_6 = &VAR_5->dm_digtable;
 struct rtl_mac *VAR_7 = FUNC_3(FUNC_4(VAR_4));

 if (VAR_7->act_scanning)
  return;

 if (VAR_7->link_state >= VAR_3)
  VAR_6->cursta_cstate = VAR_1;
 else
  VAR_6->cursta_cstate = VAR_2;

 VAR_6->curmultista_cstate = VAR_0;

 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);

 VAR_6->presta_cstate = VAR_6->cursta_cstate;
}
