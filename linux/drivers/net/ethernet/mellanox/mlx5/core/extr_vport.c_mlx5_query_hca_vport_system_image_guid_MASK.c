
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_hca_vport_context {int sys_image_guid; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_hca_vport_context*) ;
 struct mlx5_hca_vport_context* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int,int ,struct mlx5_hca_vport_context*) ;

int FUNC_3(struct mlx5_core_dev *VAR_2,
        u64 *VAR_3)
{
 struct mlx5_hca_vport_context *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2, 0, 1, 0, VAR_4);
 if (!VAR_5)
  *VAR_3 = VAR_4->sys_image_guid;

 FUNC_0(VAR_4);
 return VAR_5;
}
