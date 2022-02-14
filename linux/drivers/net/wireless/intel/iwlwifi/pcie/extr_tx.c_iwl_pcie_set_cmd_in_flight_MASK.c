
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_trans_pcie {int cmd_hold_nic_awake; int reg_lock; } ;
struct iwl_trans {TYPE_3__* trans_cfg; int status; } ;
struct iwl_host_cmd {int dummy; } ;
struct TYPE_6__ {TYPE_2__* csr; TYPE_1__* base_params; } ;
struct TYPE_5__ {int flag_mac_access_req; int flag_mac_clock_ready; int flag_val_mac_access_en; } ;
struct TYPE_4__ {scalar_t__ apmg_wake_up_wa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_4 ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct iwl_trans *VAR_5,
          const struct iwl_host_cmd *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 FUNC_6(&VAR_7->reg_lock);


 if (FUNC_7(VAR_4, &VAR_5->status))
  return -VAR_3;







 if (VAR_5->trans_cfg->base_params->apmg_wake_up_wa &&
     !VAR_7->cmd_hold_nic_awake) {
  FUNC_4(VAR_5, VAR_0,
      FUNC_0(VAR_5->trans_cfg->csr->flag_mac_access_req));

  VAR_8 = FUNC_5(VAR_5, VAR_0,
       FUNC_0(VAR_5->trans_cfg->csr->flag_val_mac_access_en),
       (FUNC_0(VAR_5->trans_cfg->csr->flag_mac_clock_ready) |
        VAR_1),
       15000);
  if (VAR_8 < 0) {
   FUNC_3(VAR_5, VAR_0,
     FUNC_0(VAR_5->trans_cfg->csr->flag_mac_access_req));
   FUNC_1(VAR_5, "Failed to wake NIC for hcmd\n");
   return -VAR_2;
  }
  VAR_7->cmd_hold_nic_awake = 1;
 }

 return 0;
}
