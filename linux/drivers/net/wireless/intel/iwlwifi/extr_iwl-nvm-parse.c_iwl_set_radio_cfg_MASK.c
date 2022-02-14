
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_nvm_data {int valid_rx_ant; int valid_tx_ant; int radio_cfg_pnum; int radio_cfg_dash; int radio_cfg_step; int radio_cfg_type; } ;
struct iwl_cfg {scalar_t__ nvm_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(const struct iwl_cfg *VAR_1,
         struct iwl_nvm_data *VAR_2,
         u32 VAR_3)
{
 if (VAR_1->nvm_type != VAR_0) {
  VAR_2->radio_cfg_type = FUNC_9(VAR_3);
  VAR_2->radio_cfg_step = FUNC_8(VAR_3);
  VAR_2->radio_cfg_dash = FUNC_6(VAR_3);
  VAR_2->radio_cfg_pnum = FUNC_7(VAR_3);
  return;
 }


 VAR_2->radio_cfg_type = FUNC_5(VAR_3);
 VAR_2->radio_cfg_step = FUNC_3(VAR_3);
 VAR_2->radio_cfg_dash = FUNC_0(VAR_3);
 VAR_2->radio_cfg_pnum = FUNC_1(VAR_3);
 VAR_2->valid_tx_ant = FUNC_4(VAR_3);
 VAR_2->valid_rx_ant = FUNC_2(VAR_3);
}
