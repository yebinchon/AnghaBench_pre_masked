
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_3__ {int dw; } ;
struct TYPE_4__ {int nexthop_probe_dw; TYPE_1__ neighs_update; int neigh_ht; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3->router->neigh_ht,
         &VAR_0);
 if (VAR_4)
  return VAR_4;




 FUNC_2(VAR_3);


 FUNC_0(&VAR_3->router->neighs_update.dw,
     VAR_1);
 FUNC_0(&VAR_3->router->nexthop_probe_dw,
     VAR_2);
 FUNC_1(&VAR_3->router->neighs_update.dw, 0);
 FUNC_1(&VAR_3->router->nexthop_probe_dw, 0);
 return 0;
}
