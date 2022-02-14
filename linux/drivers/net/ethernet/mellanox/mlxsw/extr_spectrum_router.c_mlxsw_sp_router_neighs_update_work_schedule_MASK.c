
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_3__ {unsigned long interval; int dw; } ;
struct TYPE_4__ {TYPE_1__ neighs_update; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0)
{
 unsigned long VAR_1 = VAR_0->router->neighs_update.interval;

 FUNC_0(&VAR_0->router->neighs_update.dw,
          FUNC_1(VAR_1));
}
