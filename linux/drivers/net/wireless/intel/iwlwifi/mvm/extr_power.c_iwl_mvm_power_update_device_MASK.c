
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {int ps_disabled; scalar_t__ ext_clock_valid; scalar_t__ disable_power_off; scalar_t__ disable_power_off_d3; TYPE_1__ fwrt; } ;
struct iwl_device_power_cmd {int flags; } ;
typedef int cmd ;
struct TYPE_4__ {scalar_t__ power_scheme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_device_power_cmd*) ;
 TYPE_2__ VAR_5 ;

int FUNC_3(struct iwl_mvm *VAR_6)
{
 struct iwl_device_power_cmd VAR_7 = {
  .flags = 0,
 };

 if (VAR_5.power_scheme == VAR_2)
  VAR_6->ps_disabled = 1;

 if (!VAR_6->ps_disabled)
  VAR_7.flags |= FUNC_1(VAR_1);







 if (VAR_6->ext_clock_valid)
  VAR_7.flags |= FUNC_1(VAR_0);

 FUNC_0(VAR_6,
   "Sending device power command with flags = 0x%X\n",
   VAR_7.flags);

 return FUNC_2(VAR_6, VAR_4, 0, sizeof(VAR_7),
        &VAR_7);
}
