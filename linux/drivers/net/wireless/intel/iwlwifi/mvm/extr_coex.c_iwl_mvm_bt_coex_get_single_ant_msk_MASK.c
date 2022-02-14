
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {TYPE_2__* cfg; TYPE_1__* fw; } ;
struct TYPE_4__ {int non_shared_ant; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;

u8 FUNC_2(struct iwl_mvm *VAR_1, u8 VAR_2)
{
 if (FUNC_1(&VAR_1->fw->ucode_capa, VAR_0) &&
     (VAR_1->cfg->non_shared_ant & VAR_2))
  return VAR_1->cfg->non_shared_ant;

 return FUNC_0(VAR_2);
}
