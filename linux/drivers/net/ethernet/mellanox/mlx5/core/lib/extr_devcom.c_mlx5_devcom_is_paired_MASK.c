
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_devcom {TYPE_2__* priv; } ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_4__ {TYPE_1__* components; } ;
struct TYPE_3__ {int paired; } ;


 scalar_t__ FUNC_0 (struct mlx5_devcom*) ;

bool FUNC_1(struct mlx5_devcom *VAR_0,
      enum mlx5_devcom_components VAR_1)
{
 if (FUNC_0(VAR_0))
  return 0;

 return VAR_0->priv->components[VAR_1].paired;
}
