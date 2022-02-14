
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsensor_shared_calib {int base_cp; int base_ft; int actual_temp_cp; int actual_temp_ft; } ;
struct tegra_soctherm_fuse {int fuse_base_cp_mask; int fuse_base_cp_shift; int fuse_base_ft_mask; int fuse_base_ft_shift; int fuse_shift_ft_mask; int fuse_shift_ft_shift; scalar_t__ fuse_spare_realignment; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,int*) ;

int FUNC_2(const struct tegra_soctherm_fuse *VAR_3,
       struct tsensor_shared_calib *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_0, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_4->base_cp = (VAR_5 & VAR_3->fuse_base_cp_mask) >>
     VAR_3->fuse_base_cp_shift;
 VAR_4->base_ft = (VAR_5 & VAR_3->fuse_base_ft_mask) >>
     VAR_3->fuse_base_ft_shift;

 VAR_7 = (VAR_5 & VAR_3->fuse_shift_ft_mask) >>
       VAR_3->fuse_shift_ft_shift;
 VAR_7 = FUNC_0(VAR_7, 4);

 if (VAR_3->fuse_spare_realignment) {
  VAR_8 = FUNC_1(VAR_3->fuse_spare_realignment, &VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 VAR_6 = FUNC_0(VAR_5, 5);

 VAR_4->actual_temp_cp = 2 * VAR_1 + VAR_6;
 VAR_4->actual_temp_ft = 2 * VAR_2 + VAR_7;

 return 0;
}
