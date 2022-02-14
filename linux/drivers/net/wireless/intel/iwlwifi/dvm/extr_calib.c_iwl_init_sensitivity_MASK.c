
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_sensitivity_ranges {int nrg_th_cca; int barker_corr_th_min_mrc; int barker_corr_th_min; int nrg_th_ofdm; int nrg_th_cck; int auto_corr_min_cck_mrc; int auto_corr_min_ofdm_mrc_x1; int auto_corr_min_ofdm_x1; int auto_corr_min_ofdm_mrc; int auto_corr_min_ofdm; } ;
struct iwl_sensitivity_data {scalar_t__ last_fa_cnt_cck; scalar_t__ last_bad_plcp_cnt_cck; scalar_t__ last_fa_cnt_ofdm; scalar_t__ last_bad_plcp_cnt_ofdm; int nrg_th_cca; int barker_corr_th_min_mrc; int barker_corr_th_min; int nrg_th_ofdm; int nrg_th_cck; int auto_corr_cck_mrc; int auto_corr_cck; int auto_corr_ofdm_mrc_x1; int auto_corr_ofdm_x1; int auto_corr_ofdm_mrc; int auto_corr_ofdm; scalar_t__* nrg_silence_rssi; scalar_t__* nrg_value; scalar_t__ nrg_energy_idx; scalar_t__ nrg_silence_idx; scalar_t__ nrg_silence_ref; void* nrg_prev_state; void* nrg_curr_state; scalar_t__ num_in_cck_no_fa; } ;
struct TYPE_3__ {struct iwl_sensitivity_ranges* sens; } ;
struct iwl_priv {int calib_disabled; TYPE_2__* fw; struct iwl_sensitivity_data sensitivity_data; TYPE_1__ hw_params; } ;
struct TYPE_4__ {scalar_t__ enhance_sensitivity_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_sensitivity_data*,int ,int) ;

void FUNC_4(struct iwl_priv *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 struct iwl_sensitivity_data *VAR_7 = ((void*)0);
 const struct iwl_sensitivity_ranges *VAR_8 = VAR_4->hw_params.sens;

 if (VAR_4->calib_disabled & VAR_2)
  return;

 FUNC_0(VAR_4, "Start iwl_init_sensitivity\n");


 VAR_7 = &(VAR_4->sensitivity_data);

 if (VAR_8 == ((void*)0))
  return;

 FUNC_3(VAR_7, 0, sizeof(struct iwl_sensitivity_data));

 VAR_7->num_in_cck_no_fa = 0;
 VAR_7->nrg_curr_state = VAR_1;
 VAR_7->nrg_prev_state = VAR_1;
 VAR_7->nrg_silence_ref = 0;
 VAR_7->nrg_silence_idx = 0;
 VAR_7->nrg_energy_idx = 0;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++)
  VAR_7->nrg_value[VAR_6] = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_7->nrg_silence_rssi[VAR_6] = 0;

 VAR_7->auto_corr_ofdm = VAR_8->auto_corr_min_ofdm;
 VAR_7->auto_corr_ofdm_mrc = VAR_8->auto_corr_min_ofdm_mrc;
 VAR_7->auto_corr_ofdm_x1 = VAR_8->auto_corr_min_ofdm_x1;
 VAR_7->auto_corr_ofdm_mrc_x1 = VAR_8->auto_corr_min_ofdm_mrc_x1;
 VAR_7->auto_corr_cck = VAR_0;
 VAR_7->auto_corr_cck_mrc = VAR_8->auto_corr_min_cck_mrc;
 VAR_7->nrg_th_cck = VAR_8->nrg_th_cck;
 VAR_7->nrg_th_ofdm = VAR_8->nrg_th_ofdm;
 VAR_7->barker_corr_th_min = VAR_8->barker_corr_th_min;
 VAR_7->barker_corr_th_min_mrc = VAR_8->barker_corr_th_min_mrc;
 VAR_7->nrg_th_cca = VAR_8->nrg_th_cca;

 VAR_7->last_bad_plcp_cnt_ofdm = 0;
 VAR_7->last_fa_cnt_ofdm = 0;
 VAR_7->last_bad_plcp_cnt_cck = 0;
 VAR_7->last_fa_cnt_cck = 0;

 if (VAR_4->fw->enhance_sensitivity_table)
  VAR_5 |= FUNC_1(VAR_4);
 else
  VAR_5 |= FUNC_2(VAR_4);
 FUNC_0(VAR_4, "<<return 0x%X\n", VAR_5);
}
