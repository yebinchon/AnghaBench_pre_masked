
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {long entry_min_undec_sm_pwdb; long undec_sm_pwdb; } ;
struct dig_t {scalar_t__ curmultista_cstate; scalar_t__ cursta_cstate; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_1(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_3);
 struct dig_t *VAR_5 = &VAR_4->dm_digtable;
 long VAR_6 = 0;

 if ((VAR_5->curmultista_cstate == VAR_0) &&
     (VAR_5->cursta_cstate == VAR_2)) {
  if (VAR_4->dm.entry_min_undec_sm_pwdb != 0)
   VAR_6 =
       (VAR_4->dm.entry_min_undec_sm_pwdb >
        VAR_4->dm.undec_sm_pwdb) ?
       VAR_4->dm.undec_sm_pwdb :
       VAR_4->dm.entry_min_undec_sm_pwdb;
  else
   VAR_6 = VAR_4->dm.undec_sm_pwdb;
 } else if (VAR_5->cursta_cstate == VAR_2 ||
     VAR_5->cursta_cstate == VAR_1) {
  VAR_6 = VAR_4->dm.undec_sm_pwdb;
 } else if (VAR_5->curmultista_cstate == VAR_0) {
  VAR_6 = VAR_4->dm.entry_min_undec_sm_pwdb;
 }

 if (VAR_6 > 100)
  VAR_6 = 100;
 return (u8)VAR_6;
}
