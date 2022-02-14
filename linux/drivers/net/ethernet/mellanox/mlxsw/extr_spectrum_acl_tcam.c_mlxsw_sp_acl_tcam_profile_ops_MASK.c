
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_profile_ops {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_acl_profile { ____Placeholder_mlxsw_sp_acl_profile } mlxsw_sp_acl_profile ;


 int FUNC_0 (struct mlxsw_sp_acl_profile_ops**) ;
 scalar_t__ FUNC_1 (int) ;
 struct mlxsw_sp_acl_profile_ops** VAR_0 ;

const struct mlxsw_sp_acl_profile_ops *
FUNC_2(struct mlxsw_sp *VAR_1,
         enum mlxsw_sp_acl_profile VAR_2)
{
 const struct mlxsw_sp_acl_profile_ops *VAR_3;

 if (FUNC_1(VAR_2 >= FUNC_0(VAR_0)))
  return ((void*)0);
 VAR_3 = VAR_0[VAR_2];
 if (FUNC_1(!VAR_3))
  return ((void*)0);
 return VAR_3;
}
