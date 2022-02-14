
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_rule {int tx; int rx; TYPE_2__* matcher; } ;
struct mlx5dr_domain {int type; } ;
struct TYPE_4__ {TYPE_1__* tbl; } ;
struct TYPE_3__ {struct mlx5dr_domain* dmn; } ;


 int VAR_0 ;



 int FUNC_0 (struct mlx5dr_rule*) ;
 int FUNC_1 (struct mlx5dr_rule*,int *) ;
 int FUNC_2 (struct mlx5dr_rule*) ;
 int FUNC_3 (struct mlx5dr_rule*) ;

__attribute__((used)) static int FUNC_4(struct mlx5dr_rule *VAR_1)
{
 struct mlx5dr_domain *VAR_2 = VAR_1->matcher->tbl->dmn;

 switch (VAR_2->type) {
 case 129:
  FUNC_1(VAR_1, &VAR_1->rx);
  break;
 case 128:
  FUNC_1(VAR_1, &VAR_1->tx);
  break;
 case 130:
  FUNC_0(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 return 0;
}
