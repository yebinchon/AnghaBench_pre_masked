
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct iwl_ext_dts_measurement_cmd {int control_mode; int flags; } ;
struct iwl_dts_measurement_cmd {int control_mode; int flags; } ;
typedef int extcmd ;
typedef int cmd ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_ext_dts_measurement_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_5)
{
 struct iwl_dts_measurement_cmd VAR_6 = {
  .flags = FUNC_0(VAR_2),
 };
 struct iwl_ext_dts_measurement_cmd VAR_7 = {
  .control_mode = FUNC_0(VAR_1),
 };
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_0,
      VAR_4, 0);

 if (!FUNC_1(&VAR_5->fw->ucode_capa,
    VAR_3))
  return FUNC_3(VAR_5, VAR_8, 0, sizeof(VAR_6), &VAR_6);

 return FUNC_3(VAR_5, VAR_8, 0, sizeof(VAR_7), &VAR_7);
}
