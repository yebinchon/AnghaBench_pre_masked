
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq_table {int irq_table; int * nh; int lock; } ;
struct TYPE_2__ {int irq_table; struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_eq_table* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_eq_table *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->priv.eq_table = VAR_4;

 FUNC_2(VAR_3);

 FUNC_3(&VAR_4->lock);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_0(&VAR_4->nh[VAR_5]);

 VAR_4->irq_table = VAR_3->priv.irq_table;
 return 0;
}
