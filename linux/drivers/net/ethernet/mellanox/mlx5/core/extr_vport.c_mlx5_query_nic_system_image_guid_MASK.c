
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_core_dev {int sys_image_guid; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int VAR_1 ;

u64 FUNC_3(struct mlx5_core_dev *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, VAR_1);
 u64 VAR_4 = 0;

 if (VAR_2->sys_image_guid)
  return VAR_2->sys_image_guid;

 if (VAR_3 == VAR_0)
  FUNC_2(VAR_2, &VAR_4);
 else
  FUNC_1(VAR_2, &VAR_4);

 VAR_2->sys_image_guid = VAR_4;

 return VAR_4;
}
