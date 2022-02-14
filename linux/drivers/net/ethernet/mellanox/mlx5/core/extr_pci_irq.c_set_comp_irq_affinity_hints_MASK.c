
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->priv.irq_table);
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = FUNC_2(VAR_0, VAR_3);
  if (VAR_2)
   goto err_out;
 }

 return 0;

err_out:
 for (VAR_3--; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_0, VAR_3);

 return VAR_2;
}
