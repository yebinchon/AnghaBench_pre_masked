
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {struct mlxsw_sp_acl_block* eg_acl_block; struct mlxsw_sp_acl_block* ing_acl_block; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct flow_block_offload {int extack; int net; int block; } ;
struct flow_block_cb {int driver_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int ,struct mlxsw_sp*,struct mlxsw_sp_acl_block*,int ) ;
 int FUNC_4 (struct flow_block_cb*) ;
 int FUNC_5 (struct flow_block_cb*) ;
 int FUNC_6 (struct flow_block_cb*) ;
 struct flow_block_cb* FUNC_7 (int ,int ,struct mlxsw_sp*) ;
 struct mlxsw_sp_acl_block* FUNC_8 (struct flow_block_cb*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_port*,int,int ) ;
 struct mlxsw_sp_acl_block* FUNC_11 (struct mlxsw_sp*,int ) ;
 int FUNC_12 (struct mlxsw_sp_acl_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_13(struct mlxsw_sp_port *VAR_4,
               struct flow_block_offload *VAR_5, bool VAR_6)
{
 struct mlxsw_sp *VAR_7 = VAR_4->mlxsw_sp;
 struct mlxsw_sp_acl_block *VAR_8;
 struct flow_block_cb *VAR_9;
 bool VAR_10 = 0;
 int VAR_11;

 VAR_9 = FUNC_7(VAR_5->block,
     VAR_2,
     VAR_7);
 if (!VAR_9) {
  VAR_8 = FUNC_11(VAR_7, VAR_5->net);
  if (!VAR_8)
   return -VAR_0;
  VAR_9 = FUNC_3(VAR_2,
            VAR_7, VAR_8,
            VAR_3);
  if (FUNC_0(VAR_9)) {
   FUNC_12(VAR_8);
   VAR_11 = FUNC_1(VAR_9);
   goto err_cb_register;
  }
  VAR_10 = 1;
 } else {
  VAR_8 = FUNC_8(VAR_9);
 }
 FUNC_6(VAR_9);
 VAR_11 = FUNC_10(VAR_7, VAR_8,
          VAR_4, VAR_6, VAR_5->extack);
 if (VAR_11)
  goto err_block_bind;

 if (VAR_6)
  VAR_4->ing_acl_block = VAR_8;
 else
  VAR_4->eg_acl_block = VAR_8;

 if (VAR_10) {
  FUNC_2(VAR_9, VAR_5);
  FUNC_9(&VAR_9->driver_list, &VAR_1);
 }

 return 0;

err_block_bind:
 if (!FUNC_4(VAR_9))
  FUNC_5(VAR_9);
err_cb_register:
 return VAR_11;
}
