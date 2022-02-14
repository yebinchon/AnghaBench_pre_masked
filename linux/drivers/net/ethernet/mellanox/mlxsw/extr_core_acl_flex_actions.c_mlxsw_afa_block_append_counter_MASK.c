
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_afa_counter {int counter_index; } ;
struct mlxsw_afa_block {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_afa_counter*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct mlxsw_afa_counter*) ;
 int FUNC_3 (struct mlxsw_afa_block*,int ) ;
 struct mlxsw_afa_counter* FUNC_4 (struct mlxsw_afa_block*) ;
 int FUNC_5 (struct mlxsw_afa_block*,struct mlxsw_afa_counter*) ;

int FUNC_6(struct mlxsw_afa_block *VAR_0,
       u32 *VAR_1,
       struct netlink_ext_ack *VAR_2)
{
 struct mlxsw_afa_counter *VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_2, "Cannot create count action");
  return FUNC_2(VAR_3);
 }
 VAR_4 = VAR_3->counter_index;

 VAR_5 = FUNC_3(VAR_0, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_2, "Cannot append count action");
  goto err_append_allocated_counter;
 }
 if (VAR_1)
  *VAR_1 = VAR_4;
 return 0;

err_append_allocated_counter:
 FUNC_5(VAR_0, VAR_3);
 return VAR_5;
}
