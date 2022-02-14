
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_core {int dummy; } ;
struct devlink_resource_size_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlxsw_core*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct devlink_resource_size_params*,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_core *VAR_5,
          struct devlink_resource_size_params *VAR_6,
          struct devlink_resource_size_params *VAR_7,
          struct devlink_resource_size_params *VAR_8,
          struct devlink_resource_size_params *VAR_9)
{
 u32 VAR_10 = FUNC_0(VAR_5,
       VAR_2);
 u32 VAR_11 = FUNC_0(VAR_5,
       VAR_1);
 u32 VAR_12 = FUNC_0(VAR_5, VAR_3);
 u32 VAR_13 = 0;

 FUNC_1(VAR_6, VAR_12, VAR_12,
       VAR_4,
       VAR_0);
 FUNC_1(VAR_7, VAR_13,
       VAR_12 - VAR_10 -
       VAR_11,
       VAR_4,
       VAR_0);
 FUNC_1(VAR_8,
       VAR_11,
       VAR_12 - VAR_10 -
       VAR_13,
       VAR_4,
       VAR_0);
 FUNC_1(VAR_9,
       VAR_10,
       VAR_12 - VAR_11 -
       VAR_13,
       VAR_4,
       VAR_0);
}
