
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_mvm {int dummy; } ;
struct iwl_host_cmd {int data; int len; int id; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_host_cmd*,int *) ;

int FUNC_1(struct iwl_mvm *VAR_0, u32 VAR_1, u16 VAR_2,
    const void *VAR_3, u32 *VAR_4)
{
 struct iwl_host_cmd VAR_5 = {
  .id = VAR_1,
  .len = VAR_2, 
  .data = VAR_3, 
 };

 return FUNC_0(VAR_0, &VAR_5, VAR_4);
}
