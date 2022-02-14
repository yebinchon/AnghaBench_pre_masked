
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_vr {int tb_id; struct mlxsw_sp_mr_table** mr_table; struct mlxsw_sp_mr_table* fib6; struct mlxsw_sp_mr_table* fib4; int id; } ;
struct mlxsw_sp_mr_table {int dummy; } ;
typedef struct mlxsw_sp_mr_table mlxsw_sp_fib ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_vr* FUNC_0 (struct mlxsw_sp_mr_table*) ;
 struct mlxsw_sp_vr* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_mr_table*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (struct netlink_ext_ack*,char*) ;
 int FUNC_4 (struct mlxsw_sp_mr_table*) ;
 struct mlxsw_sp_mr_table* FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_vr*,size_t) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_mr_table*) ;
 struct mlxsw_sp_mr_table* FUNC_7 (struct mlxsw_sp*,int ,size_t) ;
 int FUNC_8 (struct mlxsw_sp_mr_table*) ;
 struct mlxsw_sp_vr* FUNC_9 (struct mlxsw_sp*) ;

__attribute__((used)) static struct mlxsw_sp_vr *FUNC_10(struct mlxsw_sp *VAR_3,
           u32 VAR_4,
           struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp_mr_table *VAR_6, *VAR_7;
 struct mlxsw_sp_fib *VAR_8;
 struct mlxsw_sp_fib *VAR_9;
 struct mlxsw_sp_vr *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_9(VAR_3);
 if (!VAR_10) {
  FUNC_3(VAR_5, "Exceeded number of supported virtual routers");
  return FUNC_1(-VAR_0);
 }
 VAR_8 = FUNC_5(VAR_3, VAR_10, VAR_1);
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);
 VAR_9 = FUNC_5(VAR_3, VAR_10, VAR_2);
 if (FUNC_2(VAR_9)) {
  VAR_11 = FUNC_4(VAR_9);
  goto err_fib6_create;
 }
 VAR_6 = FUNC_7(VAR_3, VAR_10->id,
          VAR_1);
 if (FUNC_2(VAR_6)) {
  VAR_11 = FUNC_4(VAR_6);
  goto err_mr4_table_create;
 }
 VAR_7 = FUNC_7(VAR_3, VAR_10->id,
          VAR_2);
 if (FUNC_2(VAR_7)) {
  VAR_11 = FUNC_4(VAR_7);
  goto err_mr6_table_create;
 }

 VAR_10->fib4 = VAR_8;
 VAR_10->fib6 = VAR_9;
 VAR_10->mr_table[VAR_1] = VAR_6;
 VAR_10->mr_table[VAR_2] = VAR_7;
 VAR_10->tb_id = VAR_4;
 return VAR_10;

err_mr6_table_create:
 FUNC_8(VAR_6);
err_mr4_table_create:
 FUNC_6(VAR_3, VAR_9);
err_fib6_create:
 FUNC_6(VAR_3, VAR_8);
 return FUNC_1(VAR_11);
}
