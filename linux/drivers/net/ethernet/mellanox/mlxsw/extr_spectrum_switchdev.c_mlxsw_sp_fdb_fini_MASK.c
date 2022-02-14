
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct mlxsw_sp {TYPE_2__* bridge; } ;
struct TYPE_3__ {int dw; } ;
struct TYPE_4__ {TYPE_1__ fdb_notify; } ;


 int FUNC_0 (int *) ;
 struct notifier_block VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct notifier_block*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_2)
{
 struct notifier_block *VAR_3;

 FUNC_0(&VAR_2->bridge->fdb_notify.dw);

 VAR_3 = &VAR_0;
 FUNC_1(VAR_3);

 FUNC_2(&VAR_1);
}
