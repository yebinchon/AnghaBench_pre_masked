
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_chain_noise_data {scalar_t__ state; scalar_t__ beacon_count; scalar_t__ chain_signal_c; scalar_t__ chain_signal_b; scalar_t__ chain_signal_a; scalar_t__ chain_noise_c; scalar_t__ chain_noise_b; scalar_t__ chain_noise_a; } ;
struct iwl_priv {int calib_disabled; int phy_calib_chain_noise_reset_cmd; struct iwl_chain_noise_data chain_noise_data; } ;
struct iwl_calib_chain_noise_reset_cmd {int hdr; } ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,struct iwl_calib_chain_noise_reset_cmd*) ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct iwl_calib_chain_noise_reset_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_4)
{
 struct iwl_chain_noise_data *VAR_5 = &VAR_4->chain_noise_data;
 int VAR_6;

 if (VAR_4->calib_disabled & VAR_2)
  return;

 if ((VAR_5->state == VAR_1) &&
     FUNC_3(VAR_4)) {
  struct iwl_calib_chain_noise_reset_cmd VAR_7;


  VAR_5->chain_noise_a = 0;
  VAR_5->chain_noise_b = 0;
  VAR_5->chain_noise_c = 0;
  VAR_5->chain_signal_a = 0;
  VAR_5->chain_signal_b = 0;
  VAR_5->chain_signal_c = 0;
  VAR_5->beacon_count = 0;

  FUNC_5(&VAR_7, 0, sizeof(VAR_7));
  FUNC_4(&VAR_7.hdr,
   VAR_4->phy_calib_chain_noise_reset_cmd);
  VAR_6 = FUNC_2(VAR_4,
     VAR_3,
     0, sizeof(VAR_7), &VAR_7);
  if (VAR_6)
   FUNC_1(VAR_4,
    "Could not send REPLY_PHY_CALIBRATION_CMD\n");
  VAR_5->state = VAR_0;
  FUNC_0(VAR_4, "Run chain_noise_calibrate\n");
 }
}
