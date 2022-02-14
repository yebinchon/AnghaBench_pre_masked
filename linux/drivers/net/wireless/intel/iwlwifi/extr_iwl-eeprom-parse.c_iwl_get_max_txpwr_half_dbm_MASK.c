
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_nvm_data {int valid_tx_ant; } ;
struct iwl_eeprom_enhanced_txpwr {scalar_t__ chain_a_max; scalar_t__ chain_b_max; scalar_t__ chain_c_max; scalar_t__ mimo2_max; scalar_t__ mimo3_max; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static s8 FUNC_0(const struct iwl_nvm_data *VAR_7,
         struct iwl_eeprom_enhanced_txpwr *VAR_8)
{
 s8 VAR_9 = 0;


 if (VAR_7->valid_tx_ant & VAR_0 && VAR_8->chain_a_max > VAR_9)
  VAR_9 = VAR_8->chain_a_max;

 if (VAR_7->valid_tx_ant & VAR_4 && VAR_8->chain_b_max > VAR_9)
  VAR_9 = VAR_8->chain_b_max;

 if (VAR_7->valid_tx_ant & VAR_6 && VAR_8->chain_c_max > VAR_9)
  VAR_9 = VAR_8->chain_c_max;

 if ((VAR_7->valid_tx_ant == VAR_1 ||
      VAR_7->valid_tx_ant == VAR_5 ||
      VAR_7->valid_tx_ant == VAR_3) && VAR_8->mimo2_max > VAR_9)
  VAR_9 = VAR_8->mimo2_max;

 if (VAR_7->valid_tx_ant == VAR_2 && VAR_8->mimo3_max > VAR_9)
  VAR_9 = VAR_8->mimo3_max;

 return VAR_9;
}
