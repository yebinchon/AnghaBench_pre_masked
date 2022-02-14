
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hv_vhca {int agents_lock; struct mlx5_core_dev* dev; int work_queue; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5_hv_vhca* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct mlx5_hv_vhca*) ;
 struct mlx5_hv_vhca* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct mlx5_hv_vhca *FUNC_5(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_hv_vhca *VAR_3 = ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->work_queue = FUNC_1("mlx5_hv_vhca");
 if (!VAR_3->work_queue) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 VAR_3->dev = VAR_2;
 FUNC_4(&VAR_3->agents_lock);

 return VAR_3;
}
