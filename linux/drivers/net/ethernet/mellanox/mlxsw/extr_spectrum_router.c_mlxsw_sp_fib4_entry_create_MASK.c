
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fib_node {int dummy; } ;
struct mlxsw_sp_fib_entry {struct mlxsw_sp_fib_node* fib_node; } ;
struct mlxsw_sp_fib4_entry {int tos; int type; int tb_id; int prio; struct mlxsw_sp_fib_entry common; } ;
struct mlxsw_sp {int dummy; } ;
struct fib_entry_notifier_info {int tos; int type; int tb_id; TYPE_1__* fi; } ;
struct TYPE_2__ {int fib_priority; } ;


 int VAR_0 ;
 struct mlxsw_sp_fib4_entry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_fib4_entry*) ;
 struct mlxsw_sp_fib4_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct fib_entry_notifier_info const*,struct mlxsw_sp_fib_entry*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,TYPE_1__*) ;

__attribute__((used)) static struct mlxsw_sp_fib4_entry *
FUNC_5(struct mlxsw_sp *VAR_2,
      struct mlxsw_sp_fib_node *VAR_3,
      const struct fib_entry_notifier_info *VAR_4)
{
 struct mlxsw_sp_fib4_entry *VAR_5;
 struct mlxsw_sp_fib_entry *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_6 = &VAR_5->common;

 VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_6);
 if (VAR_7)
  goto err_fib4_entry_type_set;

 VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_4->fi);
 if (VAR_7)
  goto err_nexthop4_group_get;

 VAR_5->prio = VAR_4->fi->fib_priority;
 VAR_5->tb_id = VAR_4->tb_id;
 VAR_5->type = VAR_4->type;
 VAR_5->tos = VAR_4->tos;

 VAR_6->fib_node = VAR_3;

 return VAR_5;

err_nexthop4_group_get:
err_fib4_entry_type_set:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_7);
}
