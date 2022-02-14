
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_hv_vhca_work {int invalidate_work; int block_mask; struct mlx5_hv_vhca* hv_vhca; } ;
struct mlx5_hv_vhca {int work_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct mlx5_hv_vhca_work* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(void *VAR_2, u64 VAR_3)
{
 struct mlx5_hv_vhca *VAR_4 = (struct mlx5_hv_vhca *)VAR_2;
 struct mlx5_hv_vhca_work *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 FUNC_0(&VAR_5->invalidate_work, VAR_1);
 VAR_5->hv_vhca = VAR_4;
 VAR_5->block_mask = VAR_3;

 FUNC_2(VAR_4->work_queue, &VAR_5->invalidate_work);
}
