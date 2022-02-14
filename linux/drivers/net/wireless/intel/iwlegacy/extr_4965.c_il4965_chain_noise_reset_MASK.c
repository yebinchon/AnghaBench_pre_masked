
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_chain_noise_data {scalar_t__ state; scalar_t__ beacon_count; scalar_t__ chain_signal_c; scalar_t__ chain_signal_b; scalar_t__ chain_signal_a; scalar_t__ chain_noise_c; scalar_t__ chain_noise_b; scalar_t__ chain_noise_a; } ;
struct il_priv {struct il_chain_noise_data chain_noise_data; } ;
struct TYPE_2__ {int op_code; } ;
struct il_calib_diff_gain_cmd {scalar_t__ diff_gain_c; scalar_t__ diff_gain_b; scalar_t__ diff_gain_a; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 scalar_t__ FUNC_3 (struct il_priv*,int ,int,struct il_calib_diff_gain_cmd*) ;
 int FUNC_4 (struct il_calib_diff_gain_cmd*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct il_priv *VAR_4)
{
 struct il_chain_noise_data *VAR_5 = &(VAR_4->chain_noise_data);

 if (VAR_5->state == VAR_2 && FUNC_2(VAR_4)) {
  struct il_calib_diff_gain_cmd VAR_6;


  VAR_5->chain_noise_a = 0;
  VAR_5->chain_noise_b = 0;
  VAR_5->chain_noise_c = 0;
  VAR_5->chain_signal_a = 0;
  VAR_5->chain_signal_b = 0;
  VAR_5->chain_signal_c = 0;
  VAR_5->beacon_count = 0;

  FUNC_4(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.hdr.op_code = VAR_3;
  VAR_6.diff_gain_a = 0;
  VAR_6.diff_gain_b = 0;
  VAR_6.diff_gain_c = 0;
  if (FUNC_3(VAR_4, VAR_0, sizeof(VAR_6), &VAR_6))
   FUNC_1("Could not send C_PHY_CALIBRATION\n");
  VAR_5->state = VAR_1;
  FUNC_0("Run chain_noise_calibrate\n");
 }
}
