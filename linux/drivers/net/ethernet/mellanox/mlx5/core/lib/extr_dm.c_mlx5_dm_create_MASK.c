
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_dm {struct mlx5_dm* steering_sw_icm_alloc_blocks; void* header_modify_sw_icm_alloc_blocks; int lock; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct mlx5_dm* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct mlx5_core_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct mlx5_dm*) ;
 struct mlx5_dm* FUNC_9 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int VAR_7 ;

struct mlx5_dm *FUNC_11(struct mlx5_core_dev *VAR_8)
{
 u64 VAR_9 = 0;
 u64 VAR_10 = 0;
 struct mlx5_dm *VAR_11;

 if (!(FUNC_5(VAR_8, VAR_3) & VAR_2))
  return 0;

 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return FUNC_2(-VAR_0);

 FUNC_10(&VAR_11->lock);

 if (FUNC_3(VAR_8, VAR_7)) {
  VAR_10 =
   FUNC_0(FUNC_4(VAR_8, VAR_6) -
       FUNC_6(VAR_8));

  VAR_11->steering_sw_icm_alloc_blocks =
   FUNC_7(FUNC_1(VAR_10),
    sizeof(unsigned long), VAR_1);
  if (!VAR_11->steering_sw_icm_alloc_blocks)
   goto err_steering;
 }

 if (FUNC_3(VAR_8, VAR_4)) {
  VAR_9 =
   FUNC_0(FUNC_4(VAR_8, VAR_5) -
       FUNC_6(VAR_8));

  VAR_11->header_modify_sw_icm_alloc_blocks =
   FUNC_7(FUNC_1(VAR_9),
    sizeof(unsigned long), VAR_1);
  if (!VAR_11->header_modify_sw_icm_alloc_blocks)
   goto err_modify_hdr;
 }

 return VAR_11;

err_modify_hdr:
 FUNC_8(VAR_11->steering_sw_icm_alloc_blocks);

err_steering:
 FUNC_8(VAR_11);

 return FUNC_2(-VAR_0);
}
