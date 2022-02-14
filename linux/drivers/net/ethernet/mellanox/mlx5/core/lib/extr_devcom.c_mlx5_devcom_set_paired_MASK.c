
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_devcom_component {int paired; int sem; } ;
struct mlx5_devcom {TYPE_1__* priv; } ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_2__ {struct mlx5_devcom_component* components; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5_devcom *VAR_0,
       enum mlx5_devcom_components VAR_1,
       bool VAR_2)
{
 struct mlx5_devcom_component *VAR_3;

 VAR_3 = &VAR_0->priv->components[VAR_1];
 FUNC_0(!FUNC_1(&VAR_3->sem));

 VAR_3->paired = VAR_2;
}
