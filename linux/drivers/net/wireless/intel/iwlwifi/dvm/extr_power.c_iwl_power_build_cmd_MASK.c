
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ debug_sleep_level_override; } ;
struct iwl_priv {TYPE_4__ power_data; TYPE_3__* hw; TYPE_1__* lib; scalar_t__ wowlan; } ;
struct iwl_powertable_cmd {int dummy; } ;
struct TYPE_10__ {scalar_t__ power_level; } ;
struct TYPE_7__ {int flags; scalar_t__ ps_dtim_period; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;
struct TYPE_6__ {int no_idle_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_powertable_cmd*) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_powertable_cmd*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct iwl_priv*) ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void FUNC_4(struct iwl_priv *VAR_7,
    struct iwl_powertable_cmd *VAR_8)
{
 bool VAR_9 = VAR_7->hw->conf.flags & VAR_1;
 int VAR_10;

 if (VAR_5) {
  FUNC_0(VAR_7, VAR_8);
  return;
 }

 VAR_10 = VAR_7->hw->conf.ps_dtim_period ?: 1;

 if (VAR_7->wowlan)
  FUNC_1(VAR_7, VAR_8, VAR_3, VAR_10);
 else if (!VAR_7->lib->no_idle_support &&
   VAR_7->hw->conf.flags & VAR_0)
  FUNC_1(VAR_7, VAR_8, VAR_3, 20);
 else if (FUNC_3(VAR_7)) {

  FUNC_1(VAR_7, VAR_8,
      FUNC_2(VAR_7), VAR_10);
 } else if (!VAR_9)
  FUNC_0(VAR_7, VAR_8);
 else if (VAR_7->power_data.debug_sleep_level_override >= 0)
  FUNC_1(VAR_7, VAR_8,
         VAR_7->power_data.debug_sleep_level_override,
         VAR_10);
 else {


  if (VAR_6.power_level > VAR_2 &&
      VAR_6.power_level <= VAR_4)
   FUNC_1(VAR_7, VAR_8,
    VAR_6.power_level - 1, VAR_10);
  else
   FUNC_1(VAR_7, VAR_8,
    VAR_2, VAR_10);
 }
}
