
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_lag {int dummy; } ;
struct TYPE_2__ {struct mlx5_lag* lag; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;



__attribute__((used)) static inline struct mlx5_lag *
FUNC_0(struct mlx5_core_dev *VAR_0)
{
 return VAR_0->priv.lag;
}
