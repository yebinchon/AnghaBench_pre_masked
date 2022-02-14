
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {long entry_min_undec_sm_pwdb; long undec_sm_pwdb; } ;
struct TYPE_3__ {scalar_t__ bcn_rx_inperiod; } ;
struct dig_t {scalar_t__ curmultista_cstate; scalar_t__ cursta_cstate; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ link_info; struct dig_t dm_digtable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 struct dig_t *VAR_7 = &VAR_6->dm_digtable;
 struct rtl_mac *VAR_8 = FUNC_0(VAR_6);
 long VAR_9 = 0;

 if (VAR_8->link_state == VAR_3 &&
     VAR_8->opmode == VAR_4 &&
     VAR_6->link_info.bcn_rx_inperiod == 0)
  return 0;

 if ((VAR_7->curmultista_cstate == VAR_0) &&
     (VAR_7->cursta_cstate == VAR_2)) {
  if (VAR_6->dm.entry_min_undec_sm_pwdb != 0)
   VAR_9 =
       (VAR_6->dm.entry_min_undec_sm_pwdb >
        VAR_6->dm.undec_sm_pwdb) ?
       VAR_6->dm.undec_sm_pwdb :
       VAR_6->dm.entry_min_undec_sm_pwdb;
  else
   VAR_9 = VAR_6->dm.undec_sm_pwdb;
 } else if (VAR_7->cursta_cstate == VAR_2 ||
     VAR_7->cursta_cstate == VAR_1) {
  VAR_9 = VAR_6->dm.undec_sm_pwdb;
 } else if (VAR_7->curmultista_cstate ==
  VAR_0) {
  VAR_9 = VAR_6->dm.entry_min_undec_sm_pwdb;
 }

 return (u8) VAR_9;
}
