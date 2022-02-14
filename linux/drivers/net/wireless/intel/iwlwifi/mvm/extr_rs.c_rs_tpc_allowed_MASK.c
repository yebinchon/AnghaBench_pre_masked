
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rs_rate {int index; int type; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_3__ {int ps; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {scalar_t__ power_scheme; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;
 scalar_t__ FUNC_3 (struct rs_rate*) ;
 scalar_t__ FUNC_4 (struct rs_rate*) ;
 int FUNC_5 (struct iwl_mvm*,int) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static bool FUNC_6(struct iwl_mvm *VAR_7, struct ieee80211_vif *VAR_8,
      struct rs_rate *VAR_9, enum nl80211_band VAR_10)
{
 int VAR_11 = VAR_9->index;
 bool VAR_12 = (VAR_6.power_scheme == VAR_0);
 bool VAR_13 = (VAR_8->type == VAR_5 &&
    !VAR_8->bss_conf.ps);

 FUNC_0(VAR_7, "cam: %d sta_ps_disabled %d\n",
         VAR_12, VAR_13);




 if ((VAR_12 || VAR_13) &&
     !FUNC_5(VAR_7, VAR_10))
  return 0;

 FUNC_0(VAR_7, "check rate, table type: %d\n", VAR_9->type);
 if (FUNC_3(VAR_9))
  return VAR_11 == VAR_1;
 if (FUNC_2(VAR_9))
  return VAR_11 == VAR_2;
 if (FUNC_4(VAR_9))
  return VAR_11 == VAR_2 ||
         VAR_11 == VAR_3 ||
         VAR_11 == VAR_4;

 FUNC_1(1);
 return 0;
}
