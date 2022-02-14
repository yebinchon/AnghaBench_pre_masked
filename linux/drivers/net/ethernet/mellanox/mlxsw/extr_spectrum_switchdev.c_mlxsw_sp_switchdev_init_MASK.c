
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_bridge {int * bridge_8021d_ops; int * bridge_8021q_ops; int bridges_list; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {struct mlxsw_sp_bridge* bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_bridge* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mlxsw_sp*) ;

int FUNC_3(struct mlxsw_sp *VAR_4)
{
 struct mlxsw_sp_bridge *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_4->bridge), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->bridge = VAR_5;
 VAR_5->mlxsw_sp = VAR_4;

 FUNC_0(&VAR_4->bridge->bridges_list);

 VAR_5->bridge_8021q_ops = &VAR_3;
 VAR_5->bridge_8021d_ops = &VAR_2;

 return FUNC_2(VAR_4);
}
