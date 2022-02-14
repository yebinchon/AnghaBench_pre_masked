
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* fw; } ;
struct TYPE_4__ {int uapsd_disable; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static inline
bool FUNC_1(struct iwl_mvm *VAR_3)
{
 return FUNC_0(&VAR_3->fw->ucode_capa,
      VAR_1) &&
  !(VAR_2.uapsd_disable &
    VAR_0);
}
