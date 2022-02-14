
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_db {int dummy; } ;
struct TYPE_2__ {int numa_node; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_db*,int ) ;

int FUNC_1(struct mlx5_core_dev *VAR_0, struct mlx5_db *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_0->priv.numa_node);
}
