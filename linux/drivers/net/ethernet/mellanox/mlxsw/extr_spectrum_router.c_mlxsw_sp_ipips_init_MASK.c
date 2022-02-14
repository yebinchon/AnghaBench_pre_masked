
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int ipip_list; int ipip_ops_arr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_1)
{
 VAR_1->router->ipip_ops_arr = VAR_0;
 FUNC_0(&VAR_1->router->ipip_list);
 return FUNC_1(VAR_1);
}
