
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct mlxsw_sp_acl_block {struct net* net; struct mlxsw_sp* mlxsw_sp; int binding_list; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_acl_block* FUNC_1 (int,int ) ;

struct mlxsw_sp_acl_block *FUNC_2(struct mlxsw_sp *VAR_1,
           struct net *VAR_2)
{
 struct mlxsw_sp_acl_block *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_0(&VAR_3->binding_list);
 VAR_3->mlxsw_sp = VAR_1;
 VAR_3->net = VAR_2;
 return VAR_3;
}
