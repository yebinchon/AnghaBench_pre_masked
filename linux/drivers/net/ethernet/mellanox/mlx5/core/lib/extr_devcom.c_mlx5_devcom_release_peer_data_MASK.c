
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_devcom_component {int sem; } ;
struct mlx5_devcom {TYPE_1__* priv; } ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_2__ {struct mlx5_devcom_component* components; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mlx5_devcom *VAR_0,
       enum mlx5_devcom_components VAR_1)
{
 struct mlx5_devcom_component *VAR_2 = &VAR_0->priv->components[VAR_1];

 FUNC_0(&VAR_2->sem);
}
