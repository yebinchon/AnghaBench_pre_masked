
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* fw; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_mvm *VAR_2)
{




 return FUNC_0(&VAR_2->fw->ucode_capa,
      VAR_0) &&
        FUNC_0(&VAR_2->fw->ucode_capa,
      VAR_1);
}
