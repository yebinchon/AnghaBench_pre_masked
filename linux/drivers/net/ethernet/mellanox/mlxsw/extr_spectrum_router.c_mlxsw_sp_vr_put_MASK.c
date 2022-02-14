
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_vr {int * mr_table; TYPE_2__* fib6; TYPE_1__* fib4; int rif_count; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {int node_list; } ;
struct TYPE_3__ {int node_list; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_2, struct mlxsw_sp_vr *VAR_3)
{
 if (!VAR_3->rif_count && FUNC_0(&VAR_3->fib4->node_list) &&
     FUNC_0(&VAR_3->fib6->node_list) &&
     FUNC_1(VAR_3->mr_table[VAR_0]) &&
     FUNC_1(VAR_3->mr_table[VAR_1]))
  FUNC_2(VAR_2, VAR_3);
}
