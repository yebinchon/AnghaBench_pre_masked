
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_config_profile {scalar_t__ kvd_hash_single_parts; scalar_t__ kvd_hash_double_parts; scalar_t__ kvd_linear_size; } ;
struct devlink_resource_size_params {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct devlink*,int ,scalar_t__,int ,int ,struct devlink_resource_size_params*) ;
 struct mlxsw_config_profile VAR_12 ;
 int FUNC_3 (struct mlxsw_core*) ;
 int FUNC_4 (struct mlxsw_core*,struct devlink_resource_size_params*,struct devlink_resource_size_params*,struct devlink_resource_size_params*,struct devlink_resource_size_params*) ;
 struct devlink* FUNC_5 (struct mlxsw_core*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_core *VAR_13)
{
 struct devlink *VAR_14 = FUNC_5(VAR_13);
 struct devlink_resource_size_params VAR_15;
 struct devlink_resource_size_params VAR_16;
 struct devlink_resource_size_params VAR_17;
 struct devlink_resource_size_params VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 const struct mlxsw_config_profile *VAR_23;
 int VAR_24;

 VAR_23 = &VAR_12;
 if (!FUNC_1(VAR_13, VAR_2))
  return -VAR_1;

 FUNC_4(VAR_13, &VAR_18,
           &VAR_17,
           &VAR_16,
           &VAR_15);

 VAR_19 = FUNC_0(VAR_13, VAR_2);
 VAR_24 = FUNC_2(VAR_14, VAR_8,
     VAR_19, VAR_4,
     VAR_0,
     &VAR_18);
 if (VAR_24)
  return VAR_24;

 VAR_22 = VAR_23->kvd_linear_size;
 VAR_24 = FUNC_2(VAR_14, VAR_11,
     VAR_22,
     VAR_7,
     VAR_4,
     &VAR_17);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_3(VAR_13);
 if (VAR_24)
  return VAR_24;

 VAR_21 = VAR_19 - VAR_22;
 VAR_21 *= VAR_23->kvd_hash_double_parts;
 VAR_21 /= VAR_23->kvd_hash_double_parts +
         VAR_23->kvd_hash_single_parts;
 VAR_21 = FUNC_6(VAR_21, VAR_3);
 VAR_24 = FUNC_2(VAR_14, VAR_9,
     VAR_21,
     VAR_5,
     VAR_4,
     &VAR_16);
 if (VAR_24)
  return VAR_24;

 VAR_20 = VAR_19 - VAR_21 - VAR_22;
 VAR_24 = FUNC_2(VAR_14, VAR_10,
     VAR_20,
     VAR_6,
     VAR_4,
     &VAR_15);
 if (VAR_24)
  return VAR_24;

 return 0;
}
