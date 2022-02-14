
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_rf_reg {int dummy; } ;
struct TYPE_2__ {size_t g_step_idx; int g_f_corr; } ;
struct ath5k_hw {scalar_t__ ah_radio; scalar_t__ ah_radio_5ghz_revision; TYPE_1__ ah_gain; int * ah_rf_banks; int ah_rf_regs_count; } ;
struct ath5k_gain_opt_step {int* gos_param; } ;
struct ath5k_gain_opt {struct ath5k_gain_opt_step* go_step; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath5k_rf_reg*) ;
 int FUNC_1 (struct ath5k_hw*,struct ath5k_rf_reg const*,int ,int ,int) ;
 struct ath5k_rf_reg* VAR_4 ;
 struct ath5k_gain_opt VAR_5 ;

__attribute__((used)) static u32
FUNC_2(struct ath5k_hw *VAR_6)
{
 u32 VAR_7, VAR_8;
 const struct ath5k_gain_opt *VAR_9;
 const struct ath5k_gain_opt_step *VAR_10;
 const struct ath5k_rf_reg *VAR_11;


 if ((VAR_6->ah_radio != VAR_0) ||
 (VAR_6->ah_radio_5ghz_revision <= VAR_3))
  return 0;

 VAR_9 = &VAR_5;
 VAR_11 = VAR_4;
 VAR_6->ah_rf_regs_count = FUNC_0(VAR_4);

 VAR_10 = &VAR_9->go_step[VAR_6->ah_gain.g_step_idx];

 if (VAR_6->ah_rf_banks == ((void*)0))
  return 0;

 VAR_6->ah_gain.g_f_corr = 0;


 if (FUNC_1(VAR_6, VAR_11, 0, VAR_2, 0) != 1)
  return 0;


 VAR_8 = FUNC_1(VAR_6, VAR_11, 0, VAR_1, 0);


 VAR_7 = VAR_10->gos_param[0];

 switch (VAR_7) {
 case 3:
  VAR_6->ah_gain.g_f_corr = VAR_8 * 2;
  break;
 case 2:
  VAR_6->ah_gain.g_f_corr = (VAR_8 - 5) * 2;
  break;
 case 1:
  VAR_6->ah_gain.g_f_corr = VAR_8;
  break;
 default:
  VAR_6->ah_gain.g_f_corr = 0;
  break;
 }

 return VAR_6->ah_gain.g_f_corr;
}
