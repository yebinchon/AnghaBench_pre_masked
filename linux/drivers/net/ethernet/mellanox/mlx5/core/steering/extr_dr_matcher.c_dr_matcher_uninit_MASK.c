
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_matcher {int tx; int rx; TYPE_1__* tbl; } ;
struct mlx5dr_domain {int type; } ;
struct TYPE_2__ {struct mlx5dr_domain* dmn; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5dr_matcher*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5dr_matcher *VAR_0)
{
 struct mlx5dr_domain *VAR_1 = VAR_0->tbl->dmn;

 switch (VAR_1->type) {
 case 129:
  FUNC_2(&VAR_0->rx);
  break;
 case 128:
  FUNC_2(&VAR_0->tx);
  break;
 case 130:
  FUNC_1(VAR_0);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
