
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_devcom_component {TYPE_1__* device; int sem; int paired; } ;
struct mlx5_devcom {int idx; TYPE_2__* priv; } ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_4__ {struct mlx5_devcom_component* components; } ;
struct TYPE_3__ {void* data; } ;


 scalar_t__ FUNC_0 (struct mlx5_devcom*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *FUNC_3(struct mlx5_devcom *VAR_1,
    enum mlx5_devcom_components VAR_2)
{
 struct mlx5_devcom_component *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_1))
  return ((void*)0);

 VAR_3 = &VAR_1->priv->components[VAR_2];
 FUNC_1(&VAR_3->sem);
 if (!VAR_3->paired) {
  FUNC_2(&VAR_3->sem);
  return ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_4 != VAR_1->idx)
   break;

 return VAR_3->device[VAR_4].data;
}
