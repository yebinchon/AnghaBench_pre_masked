
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int status; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->status))
  return;

 FUNC_0(VAR_1, "Exit CT Kill\n");
 FUNC_1(VAR_1, 0);
}
