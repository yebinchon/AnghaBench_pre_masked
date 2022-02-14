
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int * eg_acl_block; int * ing_acl_block; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct flow_block_offload {int block; } ;
struct flow_block_cb {int driver_list; } ;


 int FUNC_0 (struct flow_block_cb*) ;
 struct flow_block_cb* FUNC_1 (int ,int ,struct mlxsw_sp*) ;
 struct mlxsw_sp_acl_block* FUNC_2 (struct flow_block_cb*) ;
 int FUNC_3 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_port*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp_port *VAR_1,
          struct flow_block_offload *VAR_2, bool VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_1->mlxsw_sp;
 struct mlxsw_sp_acl_block *VAR_5;
 struct flow_block_cb *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2->block,
     VAR_0,
     VAR_4);
 if (!VAR_6)
  return;

 if (VAR_3)
  VAR_1->ing_acl_block = ((void*)0);
 else
  VAR_1->eg_acl_block = ((void*)0);

 VAR_5 = FUNC_2(VAR_6);
 VAR_7 = FUNC_5(VAR_4, VAR_5,
     VAR_1, VAR_3);
 if (!VAR_7 && !FUNC_0(VAR_6)) {
  FUNC_3(VAR_6, VAR_2);
  FUNC_4(&VAR_6->driver_list);
 }
}
