
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_fib_node {int dummy; } ;
struct TYPE_3__ {struct mlxsw_sp_fib_node* fib_node; } ;
struct mlxsw_sp_fib4_entry {TYPE_1__ common; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {int list; } ;


 TYPE_2__ VAR_0 ;
 struct mlxsw_sp_fib4_entry* FUNC_0 (struct mlxsw_sp_fib4_entry*,int ) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_fib4_entry*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_fib4_entry*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_fib4_entry *VAR_2,
     bool VAR_3)
{
 struct mlxsw_sp_fib_node *VAR_4 = VAR_2->common.fib_node;
 struct mlxsw_sp_fib4_entry *VAR_5;

 if (!VAR_3)
  return;


 VAR_5 = FUNC_0(VAR_2, VAR_0.list);

 FUNC_2(VAR_1, VAR_5);
 FUNC_1(VAR_1, VAR_5);
 FUNC_3(VAR_1, VAR_4);
}
