
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_mvm {int dbgfs_prph_reg_addr; int trans; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,char*,int *,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct iwl_mvm *VAR_1, char *VAR_2,
    size_t VAR_3, loff_t *VAR_4)
{
 u8 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_2, "%i %i", &VAR_1->dbgfs_prph_reg_addr, &VAR_6);

 if (VAR_5 == 1)
  goto out;


 if (VAR_5 != 2)
  return -VAR_0;

 FUNC_0(VAR_1->trans, VAR_1->dbgfs_prph_reg_addr, VAR_6);

out:
 return VAR_3;
}
