
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int trans; TYPE_1__* fw; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_4, bool VAR_5)
{
 if (FUNC_0(&VAR_4->fw->ucode_capa,
   VAR_3)) {
  FUNC_1(VAR_4, VAR_5);
  return;
 }

 FUNC_2(VAR_4->trans, VAR_0,
      VAR_5 ? VAR_2 : VAR_1);
}
