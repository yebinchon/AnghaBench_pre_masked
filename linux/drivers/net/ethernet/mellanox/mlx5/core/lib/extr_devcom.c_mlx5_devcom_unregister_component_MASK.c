
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_devcom_component {int sem; TYPE_2__* device; } ;
struct mlx5_devcom {size_t idx; TYPE_1__* priv; } ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_4__ {int * data; } ;
struct TYPE_3__ {struct mlx5_devcom_component* components; } ;


 scalar_t__ FUNC_0 (struct mlx5_devcom*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_devcom *VAR_0,
          enum mlx5_devcom_components VAR_1)
{
 struct mlx5_devcom_component *VAR_2;

 if (FUNC_0(VAR_0))
  return;

 VAR_2 = &VAR_0->priv->components[VAR_1];
 FUNC_1(&VAR_2->sem);
 VAR_2->device[VAR_0->idx].data = ((void*)0);
 FUNC_2(&VAR_2->sem);
}
