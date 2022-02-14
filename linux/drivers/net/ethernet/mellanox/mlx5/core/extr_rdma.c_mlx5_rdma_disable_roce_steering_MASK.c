
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_roce {int ft; int fg; int allow_rule; } ;
struct TYPE_2__ {struct mlx5_core_roce roce; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_core_roce *VAR_1 = &VAR_0->priv.roce;

 FUNC_0(VAR_1->allow_rule);
 FUNC_1(VAR_1->fg);
 FUNC_2(VAR_1->ft);
}
