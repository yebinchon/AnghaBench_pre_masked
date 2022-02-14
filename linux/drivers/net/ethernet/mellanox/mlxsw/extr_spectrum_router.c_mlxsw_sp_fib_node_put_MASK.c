
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_fib_node {int entry_list; TYPE_1__* fib; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_fib_node*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_fib_node *VAR_1)
{
 struct mlxsw_sp_vr *VAR_2 = VAR_1->fib->vr;

 if (!FUNC_0(&VAR_1->entry_list))
  return;
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_0, VAR_2);
}
