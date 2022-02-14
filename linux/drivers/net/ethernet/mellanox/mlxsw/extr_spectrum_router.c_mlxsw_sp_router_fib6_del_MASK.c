
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_fib_node {int dummy; } ;
struct TYPE_3__ {struct mlxsw_sp_fib_node* fib_node; } ;
struct mlxsw_sp_fib6_entry {unsigned int nrt6; TYPE_1__ common; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct fib6_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ aborted; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*) ;
 struct mlxsw_sp_fib6_entry* FUNC_2 (struct mlxsw_sp*,struct fib6_info*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*,struct fib6_info**,unsigned int) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*) ;
 scalar_t__ FUNC_5 (struct fib6_info*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static void FUNC_7(struct mlxsw_sp *VAR_0,
         struct fib6_info **VAR_1,
         unsigned int VAR_2)
{
 struct mlxsw_sp_fib6_entry *VAR_3;
 struct mlxsw_sp_fib_node *VAR_4;
 struct fib6_info *VAR_5 = VAR_1[0];

 if (VAR_0->router->aborted)
  return;

 if (FUNC_5(VAR_5))
  return;

 VAR_3 = FUNC_2(VAR_0, VAR_5);
 if (FUNC_0(!VAR_3))
  return;




 if (VAR_2 != VAR_3->nrt6) {
  FUNC_3(VAR_0, VAR_3, VAR_1,
      VAR_2);
  return;
 }

 VAR_4 = VAR_3->common.fib_node;

 FUNC_4(VAR_0, VAR_3);
 FUNC_1(VAR_0, VAR_3);
 FUNC_6(VAR_0, VAR_4);
}
