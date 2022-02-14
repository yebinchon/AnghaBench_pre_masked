
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_fw_dbg_params {int out_ctrl; int in_sample; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,int ,int) ;
 int FUNC_1 (struct iwl_trans*,int ,int) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_trans *VAR_5,
     struct iwl_fw_dbg_params *VAR_6)
{
 if (!VAR_6)
  return -VAR_2;

 if (VAR_5->trans_cfg->device_family == VAR_3) {
  FUNC_0(VAR_5, VAR_4, 0x100);
  FUNC_0(VAR_5, VAR_4, 0x1);
  FUNC_1(VAR_5, VAR_4, 0x1);
 } else {
  FUNC_2(VAR_5, VAR_0, VAR_6->in_sample);
  FUNC_2(VAR_5, VAR_1, VAR_6->out_ctrl);
 }

 return 0;
}
