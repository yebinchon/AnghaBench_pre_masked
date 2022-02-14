
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_devcom_list {size_t idx; int list; int ** devs; struct mlx5_devcom_list* priv; } ;
struct mlx5_devcom {size_t idx; int list; int ** devs; struct mlx5_devcom* priv; } ;


 scalar_t__ FUNC_0 (struct mlx5_devcom_list*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_devcom_list*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_devcom *VAR_1)
{
 struct mlx5_devcom_list *VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_1))
  return;

 VAR_2 = VAR_1->priv;
 VAR_2->devs[VAR_1->idx] = ((void*)0);

 FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->devs[VAR_3])
   break;

 if (VAR_3 != VAR_0)
  return;

 FUNC_2(&VAR_2->list);
 FUNC_1(VAR_2);
}
