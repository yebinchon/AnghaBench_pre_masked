
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_pool {int available_fcs; struct mlx5_core_dev* dev; } ;
struct mlx5_fc_bulk {scalar_t__ bulk_len; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_fc_bulk*) ;
 struct mlx5_fc_bulk* FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_fc_pool*) ;

__attribute__((used)) static struct mlx5_fc_bulk *
FUNC_3(struct mlx5_fc_pool *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->dev;
 struct mlx5_fc_bulk *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_2))
  VAR_0->available_fcs += VAR_2->bulk_len;
 FUNC_2(VAR_0);
 return VAR_2;
}
