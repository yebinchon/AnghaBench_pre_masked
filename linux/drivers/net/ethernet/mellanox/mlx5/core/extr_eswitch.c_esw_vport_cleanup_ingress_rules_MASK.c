
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * allow_rule; int * drop_rule; } ;
struct mlx5_vport {TYPE_1__ ingress; } ;
struct mlx5_eswitch {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_eswitch *VAR_0,
         struct mlx5_vport *VAR_1)
{
 if (!FUNC_0(VAR_1->ingress.drop_rule))
  FUNC_2(VAR_1->ingress.drop_rule);

 if (!FUNC_0(VAR_1->ingress.allow_rule))
  FUNC_2(VAR_1->ingress.allow_rule);

 VAR_1->ingress.drop_rule = ((void*)0);
 VAR_1->ingress.allow_rule = ((void*)0);

 FUNC_1(VAR_0, VAR_1);
}
