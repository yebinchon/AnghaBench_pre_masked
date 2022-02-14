
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_hcmd_names {int cmd_id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct iwl_hcmd_names *VAR_2 = VAR_1;
 u8 VAR_3 = *(u8 *)VAR_0;
 u8 VAR_4 = VAR_2->cmd_id;

 return (VAR_3 - VAR_4);
}
