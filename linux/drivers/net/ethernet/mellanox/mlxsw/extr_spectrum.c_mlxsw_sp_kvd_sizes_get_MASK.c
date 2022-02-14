
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_config_profile {scalar_t__ kvd_linear_size; scalar_t__ kvd_hash_single_parts; scalar_t__ kvd_hash_double_parts; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct devlink*,int ,scalar_t__*) ;
 struct devlink* FUNC_3 (struct mlxsw_core*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_core *VAR_8,
      const struct mlxsw_config_profile *VAR_9,
      u64 *VAR_10, u64 *VAR_11,
      u64 *VAR_12)
{
 struct devlink *VAR_13 = FUNC_3(VAR_8);
 u32 VAR_14;
 int VAR_15;

 if (!FUNC_1(VAR_8, VAR_2) ||
     !FUNC_1(VAR_8, VAR_1))
  return -VAR_0;
 VAR_15 = FUNC_2(VAR_13,
     VAR_7,
     VAR_12);
 if (VAR_15)
  *VAR_12 = VAR_9->kvd_linear_size;

 VAR_15 = FUNC_2(VAR_13,
     VAR_5,
     VAR_11);
 if (VAR_15) {
  VAR_14 = FUNC_0(VAR_8, VAR_3) -
         *VAR_12;
  VAR_14 *= VAR_9->kvd_hash_double_parts;
  VAR_14 /= VAR_9->kvd_hash_double_parts +
          VAR_9->kvd_hash_single_parts;
  *VAR_11 = FUNC_4(VAR_14,
        VAR_4);
 }

 VAR_15 = FUNC_2(VAR_13,
     VAR_6,
     VAR_10);
 if (VAR_15)
  *VAR_10 = FUNC_0(VAR_8, VAR_3) -
     *VAR_11 - *VAR_12;


 if (*VAR_10 < FUNC_0(VAR_8, VAR_2) ||
     *VAR_11 < FUNC_0(VAR_8, VAR_1) ||
     FUNC_0(VAR_8, VAR_3) < *VAR_12)
  return -VAR_0;

 return 0;
}
