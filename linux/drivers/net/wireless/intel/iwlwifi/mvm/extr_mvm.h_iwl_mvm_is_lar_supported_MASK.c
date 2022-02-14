
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_mvm {TYPE_3__* cfg; TYPE_2__* fw; TYPE_1__* nvm_data; } ;
struct TYPE_8__ {scalar_t__ lar_disable; } ;
struct TYPE_7__ {scalar_t__ nvm_type; } ;
struct TYPE_6__ {int ucode_capa; } ;
struct TYPE_5__ {int lar_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_mvm *VAR_3)
{
 bool VAR_4 = VAR_3->nvm_data->lar_enabled;
 bool VAR_5 = FUNC_0(&VAR_3->fw->ucode_capa,
       VAR_1);

 if (VAR_2.lar_disable)
  return 0;





 if (VAR_3->cfg->nvm_type == VAR_0)
  return VAR_4 && VAR_5;
 else
  return VAR_5;
}
