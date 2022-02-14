
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_devcom_component {int (* handler ) (int,scalar_t__,void*) ;int sem; TYPE_2__* device; } ;
struct mlx5_devcom {int idx; TYPE_1__* priv; } ;
typedef enum mlx5_devcom_components { ____Placeholder_mlx5_devcom_components } mlx5_devcom_components ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {struct mlx5_devcom_component* components; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_devcom*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__,void*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx5_devcom *VAR_2,
      enum mlx5_devcom_components VAR_3,
      int VAR_4,
      void *VAR_5)
{
 struct mlx5_devcom_component *VAR_6;
 int VAR_7 = -VAR_0, VAR_8;

 if (FUNC_0(VAR_2))
  return VAR_7;

 VAR_6 = &VAR_2->priv->components[VAR_3];
 FUNC_1(&VAR_6->sem);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (VAR_8 != VAR_2->idx && VAR_6->device[VAR_8].data) {
   VAR_7 = VAR_6->handler(VAR_4, VAR_6->device[VAR_8].data,
         VAR_5);
   break;
  }

 FUNC_3(&VAR_6->sem);
 return VAR_7;
}
