
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq_table {int irq_table; int num_comp_eqs; } ;
struct TYPE_2__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_eq_table *VAR_1 = VAR_0->priv.eq_table;
 int VAR_2;

 VAR_1->num_comp_eqs =
  FUNC_4(VAR_1->irq_table);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "Failed to create async EQs\n");
  goto err_async_eqs;
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "Failed to create completion EQs\n");
  goto err_comp_eqs;
 }

 return 0;
err_comp_eqs:
 FUNC_2(VAR_0);
err_async_eqs:
 return VAR_2;
}
