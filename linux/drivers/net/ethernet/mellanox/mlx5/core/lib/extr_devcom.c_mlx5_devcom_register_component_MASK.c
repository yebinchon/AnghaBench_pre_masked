
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_devcom_component {int sem; TYPE_1__* device; int handler; } ;
struct mlx5_devcom {size_t idx; TYPE_2__* priv; } ;
typedef int mlx5_devcom_event_handler_t ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_4__ {struct mlx5_devcom_component* components; } ;
struct TYPE_3__ {void* data; } ;


 scalar_t__ FUNC_0 (struct mlx5_devcom*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5_devcom *VAR_0,
        enum mlx5_devcom_components VAR_1,
        mlx5_devcom_event_handler_t VAR_2,
        void *VAR_3)
{
 struct mlx5_devcom_component *VAR_4;

 if (FUNC_0(VAR_0))
  return;

 FUNC_1(!VAR_3);

 VAR_4 = &VAR_0->priv->components[VAR_1];
 FUNC_2(&VAR_4->sem);
 VAR_4->handler = VAR_2;
 VAR_4->device[VAR_0->idx].data = VAR_3;
 FUNC_3(&VAR_4->sem);
}
