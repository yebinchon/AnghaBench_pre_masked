
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tsensor_shared_calib {int base_cp; int base_ft; long long actual_temp_ft; long long actual_temp_cp; } ;
struct tegra_tsensor_group {long long pdiv; long long pdiv_ate; } ;
struct tegra_tsensor {long long fuse_corr_alpha; long long fuse_corr_beta; TYPE_1__* config; int calib_fuse_offset; struct tegra_tsensor_group* group; } ;
typedef long long s64 ;
typedef long long s32 ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {long long tsample_ate; long long tsample; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (long long,long long) ;
 long long FUNC_1 (int,int) ;
 int FUNC_2 (int ,int*) ;

int FUNC_3(const struct tegra_tsensor *VAR_5,
        const struct tsensor_shared_calib *VAR_6,
        u32 *VAR_7)
{
 const struct tegra_tsensor_group *VAR_8;
 u32 VAR_9, VAR_10;
 s32 VAR_11, VAR_12;
 s32 VAR_13, VAR_14;
 s32 VAR_15, VAR_16;
 s16 VAR_17, VAR_18;
 s64 VAR_19;
 int VAR_20;

 VAR_8 = VAR_5->group;

 VAR_20 = FUNC_2(VAR_5->calib_fuse_offset, &VAR_9);
 if (VAR_20)
  return VAR_20;

 VAR_12 = (VAR_6->base_cp * 64) + FUNC_1(VAR_9, 12);
 VAR_9 = (VAR_9 & VAR_1) >>
       VAR_2;
 VAR_11 = (VAR_6->base_ft * 32) + FUNC_1(VAR_9, 12);

 VAR_13 = VAR_11 - VAR_12;
 VAR_14 = VAR_6->actual_temp_ft - VAR_6->actual_temp_cp;

 VAR_15 = VAR_8->pdiv * VAR_5->config->tsample_ate;
 VAR_16 = VAR_5->config->tsample * VAR_8->pdiv_ate;

 VAR_19 = (s64)VAR_14 * (1LL << 13) * VAR_15;
 VAR_17 = FUNC_0(VAR_19, (s64)VAR_13 * VAR_16);

 VAR_19 = ((s64)VAR_11 * VAR_6->actual_temp_cp) -
  ((s64)VAR_12 * VAR_6->actual_temp_ft);
 VAR_18 = FUNC_0(VAR_19, VAR_13);

 VAR_19 = (s64)VAR_17 * VAR_5->fuse_corr_alpha;
 VAR_17 = FUNC_0(VAR_19, VAR_0);

 VAR_19 = (s64)VAR_18 * VAR_5->fuse_corr_alpha + VAR_5->fuse_corr_beta;
 VAR_18 = FUNC_0(VAR_19, VAR_0);

 VAR_10 = ((u16)VAR_17 << VAR_3) |
  ((u16)VAR_18 << VAR_4);

 *VAR_7 = VAR_10;

 return 0;
}
