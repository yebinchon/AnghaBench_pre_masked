
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_fib_node {int dummy; } ;
struct TYPE_4__ {struct mlxsw_sp_fib_node* fib_node; } ;
struct mlxsw_sp_fib4_entry {TYPE_2__ common; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct fib_entry_notifier_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ aborted; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_fib4_entry*) ;
 struct mlxsw_sp_fib4_entry* FUNC_2 (struct mlxsw_sp*,struct fib_entry_notifier_info*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib4_entry*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
         struct fib_entry_notifier_info *VAR_1)
{
 struct mlxsw_sp_fib4_entry *VAR_2;
 struct mlxsw_sp_fib_node *VAR_3;

 if (VAR_0->router->aborted)
  return;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(!VAR_2))
  return;
 VAR_3 = VAR_2->common.fib_node;

 FUNC_3(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_2);
 FUNC_4(VAR_0, VAR_3);
}
