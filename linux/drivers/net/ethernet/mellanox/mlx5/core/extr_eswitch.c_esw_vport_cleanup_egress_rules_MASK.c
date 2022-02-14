
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * drop_rule; int * allowed_vlan; } ;
struct mlx5_vport {TYPE_1__ egress; } ;
struct mlx5_eswitch {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5_eswitch *VAR_0,
        struct mlx5_vport *VAR_1)
{
 if (!FUNC_0(VAR_1->egress.allowed_vlan))
  FUNC_1(VAR_1->egress.allowed_vlan);

 if (!FUNC_0(VAR_1->egress.drop_rule))
  FUNC_1(VAR_1->egress.drop_rule);

 VAR_1->egress.allowed_vlan = ((void*)0);
 VAR_1->egress.drop_rule = ((void*)0);
}
