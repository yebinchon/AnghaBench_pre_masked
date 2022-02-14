
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_error_recovery_qcfg_output {int reg_array_cnt; int * delay_after_reset; int * reset_reg_val; int * reset_reg; int reset_inprogress_reg_mask; int reset_inprogress_reg; int fw_reset_cnt_reg; int fw_heartbeat_reg; int fw_health_status_reg; int max_bailout_time_after_reset; int master_func_wait_period_after_reset; int normal_func_wait_period; int master_func_wait_period; int driver_polling_freq; int flags; } ;
struct hwrm_error_recovery_qcfg_input {int member_0; } ;
struct bnxt_fw_health {int flags; int fw_reset_seq_cnt; int * fw_reset_seq_delay_msec; void** fw_reset_seq_vals; void** fw_reset_seq_regs; void* fw_reset_inprog_reg_mask; void** regs; void* post_reset_max_wait_dsecs; void* post_reset_wait_dsecs; void* normal_func_wait_dsecs; void* master_func_wait_dsecs; void* polling_dsecs; } ;
struct bnxt {int fw_cap; int hwrm_cmd_lock; struct bnxt_fw_health* fw_health; struct hwrm_error_recovery_qcfg_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bnxt*,struct hwrm_error_recovery_qcfg_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_error_recovery_qcfg_input*,int ,int,int) ;
 int FUNC_2 (struct bnxt*) ;
 struct bnxt_fw_health* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct bnxt *VAR_12)
{
 struct hwrm_error_recovery_qcfg_output *VAR_13 = VAR_12->hwrm_cmd_resp_addr;
 struct bnxt_fw_health *VAR_14 = VAR_12->fw_health;
 struct hwrm_error_recovery_qcfg_input VAR_15 = {0};
 int VAR_16, VAR_17;

 if (!(VAR_12->fw_cap & VAR_0))
  return 0;

 FUNC_1(VAR_12, &VAR_15, VAR_11, -1, -1);
 FUNC_5(&VAR_12->hwrm_cmd_lock);
 VAR_16 = FUNC_0(VAR_12, &VAR_15, sizeof(VAR_15), VAR_10);
 if (VAR_16)
  goto err_recovery_out;
 if (!VAR_14) {
  VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_9);
  VAR_12->fw_health = VAR_14;
  if (!VAR_14) {
   VAR_16 = -VAR_7;
   goto err_recovery_out;
  }
 }
 VAR_14->flags = FUNC_4(VAR_13->flags);
 if ((VAR_14->flags & VAR_8) &&
     !(VAR_12->fw_cap & VAR_1)) {
  VAR_16 = -VAR_6;
  goto err_recovery_out;
 }
 VAR_14->polling_dsecs = FUNC_4(VAR_13->driver_polling_freq);
 VAR_14->master_func_wait_dsecs =
  FUNC_4(VAR_13->master_func_wait_period);
 VAR_14->normal_func_wait_dsecs =
  FUNC_4(VAR_13->normal_func_wait_period);
 VAR_14->post_reset_wait_dsecs =
  FUNC_4(VAR_13->master_func_wait_period_after_reset);
 VAR_14->post_reset_max_wait_dsecs =
  FUNC_4(VAR_13->max_bailout_time_after_reset);
 VAR_14->regs[VAR_2] =
  FUNC_4(VAR_13->fw_health_status_reg);
 VAR_14->regs[VAR_3] =
  FUNC_4(VAR_13->fw_heartbeat_reg);
 VAR_14->regs[VAR_4] =
  FUNC_4(VAR_13->fw_reset_cnt_reg);
 VAR_14->regs[VAR_5] =
  FUNC_4(VAR_13->reset_inprogress_reg);
 VAR_14->fw_reset_inprog_reg_mask =
  FUNC_4(VAR_13->reset_inprogress_reg_mask);
 VAR_14->fw_reset_seq_cnt = VAR_13->reg_array_cnt;
 if (VAR_14->fw_reset_seq_cnt >= 16) {
  VAR_16 = -VAR_6;
  goto err_recovery_out;
 }
 for (VAR_17 = 0; VAR_17 < VAR_14->fw_reset_seq_cnt; VAR_17++) {
  VAR_14->fw_reset_seq_regs[VAR_17] =
   FUNC_4(VAR_13->reset_reg[VAR_17]);
  VAR_14->fw_reset_seq_vals[VAR_17] =
   FUNC_4(VAR_13->reset_reg_val[VAR_17]);
  VAR_14->fw_reset_seq_delay_msec[VAR_17] =
   VAR_13->delay_after_reset[VAR_17];
 }
err_recovery_out:
 FUNC_6(&VAR_12->hwrm_cmd_lock);
 if (!VAR_16)
  VAR_16 = FUNC_2(VAR_12);
 if (VAR_16)
  VAR_12->fw_cap &= ~VAR_0;
 return VAR_16;
}
