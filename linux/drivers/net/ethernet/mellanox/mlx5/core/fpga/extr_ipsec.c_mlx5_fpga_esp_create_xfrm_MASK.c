
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_accel_esp_xfrm {int attrs; } ;
struct mlx5_fpga_esp_xfrm {struct mlx5_accel_esp_xfrm accel_xfrm; int lock; } ;
struct mlx5_core_dev {int dummy; } ;
struct mlx5_accel_esp_xfrm_attrs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_accel_esp_xfrm* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlx5_fpga_esp_xfrm* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct mlx5_accel_esp_xfrm_attrs const*,int) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*,struct mlx5_accel_esp_xfrm_attrs const*) ;
 int FUNC_5 (int *) ;

struct mlx5_accel_esp_xfrm *
FUNC_6(struct mlx5_core_dev *VAR_5,
     const struct mlx5_accel_esp_xfrm_attrs *VAR_6,
     u32 VAR_7)
{
 struct mlx5_fpga_esp_xfrm *VAR_8;

 if (!(VAR_7 & VAR_4)) {
  FUNC_3(VAR_5, "Tried to create an esp action without metadata\n");
  return FUNC_0(-VAR_0);
 }

 if (FUNC_4(VAR_5, VAR_6)) {
  FUNC_3(VAR_5, "Tried to create an esp with unsupported attrs\n");
  return FUNC_0(-VAR_2);
 }

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 FUNC_5(&VAR_8->lock);
 FUNC_2(&VAR_8->accel_xfrm.attrs, VAR_6,
        sizeof(VAR_8->accel_xfrm.attrs));

 return &VAR_8->accel_xfrm;
}
