
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_block {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;


 int FUNC_0 (struct mlxsw_sp_acl_block*) ;
 int FUNC_1 (struct mlxsw_sp_acl_block*,void*) ;

__attribute__((used)) static int FUNC_2(enum tc_setup_type VAR_1,
          void *VAR_2, void *VAR_3)
{
 struct mlxsw_sp_acl_block *VAR_4 = VAR_3;

 switch (VAR_1) {
 case 128:
  return 0;
 case 129:
  if (FUNC_0(VAR_4))
   return -VAR_0;

  return FUNC_1(VAR_4, VAR_2);
 default:
  return -VAR_0;
 }
}
