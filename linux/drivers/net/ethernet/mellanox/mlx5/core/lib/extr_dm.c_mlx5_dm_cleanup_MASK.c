
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_dm {struct mlx5_dm* header_modify_sw_icm_alloc_blocks; struct mlx5_dm* steering_sw_icm_alloc_blocks; } ;
struct mlx5_core_dev {struct mlx5_dm* dm; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx5_dm*,int ) ;
 int FUNC_5 (struct mlx5_dm*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_dm *VAR_3 = VAR_2->dm;

 if (!VAR_2->dm)
  return;

 if (VAR_3->steering_sw_icm_alloc_blocks) {
  FUNC_3(!FUNC_4(VAR_3->steering_sw_icm_alloc_blocks,
          FUNC_0(FUNC_1(VAR_2, VAR_1) -
       FUNC_2(VAR_2))));
  FUNC_5(VAR_3->steering_sw_icm_alloc_blocks);
 }

 if (VAR_3->header_modify_sw_icm_alloc_blocks) {
  FUNC_3(!FUNC_4(VAR_3->header_modify_sw_icm_alloc_blocks,
          FUNC_0(FUNC_1(VAR_2,
          VAR_0) -
          FUNC_2(VAR_2))));
  FUNC_5(VAR_3->header_modify_sw_icm_alloc_blocks);
 }

 FUNC_5(VAR_3);
}
