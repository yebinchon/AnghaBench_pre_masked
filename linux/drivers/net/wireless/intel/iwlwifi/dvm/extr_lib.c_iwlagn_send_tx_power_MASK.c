
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tx_power_cmd ;
struct iwlagn_tx_power_dbm_cmd {scalar_t__ global_lmt; int srv_chan_lmt; int flags; } ;
struct iwl_priv {int tx_power_user_lmt; TYPE_2__* fw; TYPE_1__* nvm_data; int status; } ;
typedef scalar_t__ s8 ;
struct TYPE_4__ {int ucode_ver; } ;
struct TYPE_3__ {scalar_t__ max_tx_pwr_half_dbm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,struct iwlagn_tx_power_dbm_cmd*) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct iwl_priv *VAR_6)
{
 struct iwlagn_tx_power_dbm_cmd VAR_7;
 u8 VAR_8;

 if (FUNC_1(FUNC_3(VAR_5, &VAR_6->status),
        "TX Power requested while scanning!\n"))
  return -VAR_0;


 VAR_7.global_lmt = (s8)(2 * VAR_6->tx_power_user_lmt);

 if (VAR_7.global_lmt > VAR_6->nvm_data->max_tx_pwr_half_dbm) {
  VAR_7.global_lmt =
   VAR_6->nvm_data->max_tx_pwr_half_dbm;
 }
 VAR_7.flags = VAR_2;
 VAR_7.srv_chan_lmt = VAR_1;

 if (FUNC_0(VAR_6->fw->ucode_ver) == 1)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3;

 return FUNC_2(VAR_6, VAR_8, 0,
   sizeof(VAR_7), &VAR_7);
}
