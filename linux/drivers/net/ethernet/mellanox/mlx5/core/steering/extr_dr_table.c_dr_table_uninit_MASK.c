
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {TYPE_1__* dmn; int tx; int rx; } ;
struct TYPE_2__ {int type; int mutex; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5dr_table*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5dr_table *VAR_0)
{
 FUNC_3(&VAR_0->dmn->mutex);

 switch (VAR_0->dmn->type) {
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

 FUNC_4(&VAR_0->dmn->mutex);
}
