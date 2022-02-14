
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {unsigned int count; struct mlxsw_sp_nexthop* nexthops; int gateway; int * neigh_tbl; int fib_list; struct fib_info* priv; } ;
struct mlxsw_sp_nexthop {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct fib_nh {int dummy; } ;
struct fib_info {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_nexthop_group* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct fib_info*) ;
 struct fib_nh* FUNC_3 (struct fib_info*,int) ;
 unsigned int FUNC_4 (struct fib_info*) ;
 int FUNC_5 (struct fib_info*) ;
 int FUNC_6 (struct mlxsw_sp_nexthop_group*) ;
 struct mlxsw_sp_nexthop_group* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mlxsw_sp*,struct fib_info*) ;
 int FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;
 int FUNC_10 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*,struct mlxsw_sp_nexthop*,struct fib_nh*) ;
 int FUNC_11 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;
 int FUNC_12 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;
 int VAR_3 ;
 int FUNC_13 (struct mlxsw_sp_nexthop_group*,int ,unsigned int) ;

__attribute__((used)) static struct mlxsw_sp_nexthop_group *
FUNC_14(struct mlxsw_sp *VAR_4, struct fib_info *VAR_5)
{
 unsigned int VAR_6 = FUNC_4(VAR_5);
 struct mlxsw_sp_nexthop_group *VAR_7;
 struct mlxsw_sp_nexthop *VAR_8;
 struct fib_nh *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_7(FUNC_13(VAR_7, VAR_3, VAR_6), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 VAR_7->priv = VAR_5;
 FUNC_1(&VAR_7->fib_list);
 VAR_7->neigh_tbl = &VAR_2;

 VAR_7->gateway = FUNC_8(VAR_4, VAR_5);
 VAR_7->count = VAR_6;
 FUNC_2(VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_7->count; VAR_10++) {
  VAR_8 = &VAR_7->nexthops[VAR_10];
  VAR_9 = FUNC_3(VAR_5, VAR_10);
  VAR_11 = FUNC_10(VAR_4, VAR_7, VAR_8, VAR_9);
  if (VAR_11)
   goto err_nexthop4_init;
 }
 VAR_11 = FUNC_11(VAR_4, VAR_7);
 if (VAR_11)
  goto err_nexthop_group_insert;
 FUNC_12(VAR_4, VAR_7);
 return VAR_7;

err_nexthop_group_insert:
err_nexthop4_init:
 for (VAR_10--; VAR_10 >= 0; VAR_10--) {
  VAR_8 = &VAR_7->nexthops[VAR_10];
  FUNC_9(VAR_4, VAR_8);
 }
 FUNC_5(VAR_5);
 FUNC_6(VAR_7);
 return FUNC_0(VAR_11);
}
