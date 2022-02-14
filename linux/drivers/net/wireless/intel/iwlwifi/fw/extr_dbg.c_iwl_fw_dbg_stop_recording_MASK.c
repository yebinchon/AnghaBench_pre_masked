
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_fw_dbg_params {void* out_ctrl; void* in_sample; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct iwl_trans*,int ) ;
 int FUNC_1 (struct iwl_trans*,int ,int) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_4,
          struct iwl_fw_dbg_params *VAR_5)
{
 if (VAR_4->trans_cfg->device_family == VAR_2) {
  FUNC_1(VAR_4, VAR_3, 0x100);
  return;
 }

 if (VAR_5) {
  VAR_5->in_sample = FUNC_0(VAR_4, VAR_0);
  VAR_5->out_ctrl = FUNC_0(VAR_4, VAR_1);
 }

 FUNC_2(VAR_4, VAR_0, 0);



 FUNC_3(700, 1000);
 FUNC_2(VAR_4, VAR_1, 0);
}
