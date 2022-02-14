
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_acl {int tcam; } ;
struct mlxsw_sp {struct mlxsw_sp_acl* acl; } ;


 int FUNC_0 (struct mlxsw_sp*,int *) ;

u32 FUNC_1(struct mlxsw_sp *VAR_0)
{
 struct mlxsw_sp_acl *VAR_1 = VAR_0->acl;

 return FUNC_0(VAR_0,
          &VAR_1->tcam);
}
