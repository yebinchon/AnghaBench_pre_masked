
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_wowlan_status {int dummy; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int ,int *) ;
 struct iwl_wowlan_status* FUNC_2 (struct iwl_mvm*) ;

__attribute__((used)) static struct iwl_wowlan_status *
FUNC_3(struct iwl_mvm *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_0, 0, 0, ((void*)0));
 if (VAR_2)
  FUNC_0(VAR_1, "failed to query offload statistics (%d)\n", VAR_2);

 return FUNC_2(VAR_1);
}
