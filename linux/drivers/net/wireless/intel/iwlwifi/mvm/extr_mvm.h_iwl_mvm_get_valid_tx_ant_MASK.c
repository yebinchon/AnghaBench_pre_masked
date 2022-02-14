
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {TYPE_2__* fw; TYPE_1__* nvm_data; } ;
struct TYPE_4__ {int valid_tx_ant; } ;
struct TYPE_3__ {int valid_tx_ant; } ;



__attribute__((used)) static inline u8 FUNC_0(struct iwl_mvm *VAR_0)
{
 return VAR_0->nvm_data && VAR_0->nvm_data->valid_tx_ant ?
        VAR_0->fw->valid_tx_ant & VAR_0->nvm_data->valid_tx_ant :
        VAR_0->fw->valid_tx_ant;
}
