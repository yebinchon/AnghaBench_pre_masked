
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct iwl_host_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct iwl_host_cmd *VAR_1)
{
 struct iwl_mvm *VAR_2 = (struct iwl_mvm *)VAR_0;
 int VAR_3;

 FUNC_1(&VAR_2->mutex);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->mutex);

 return VAR_3;
}
