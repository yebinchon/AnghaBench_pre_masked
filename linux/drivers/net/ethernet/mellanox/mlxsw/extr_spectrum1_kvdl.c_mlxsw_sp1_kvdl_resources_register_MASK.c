
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_core {int dummy; } ;
struct devlink_resource_size_params {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlxsw_core*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct devlink*,int ,int ,int ,int ,struct devlink_resource_size_params*) ;
 int FUNC_2 (struct devlink_resource_size_params*,int ,scalar_t__,int ,int ) ;
 struct devlink* FUNC_3 (struct mlxsw_core*) ;

int FUNC_4(struct mlxsw_core *VAR_17)
{
 struct devlink *VAR_18 = FUNC_3(VAR_17);
 static struct devlink_resource_size_params VAR_19;
 u32 VAR_20;
 int VAR_21;

 VAR_20 = FUNC_0(VAR_17, VAR_3) -
   FUNC_0(VAR_17, VAR_2) -
   FUNC_0(VAR_17, VAR_1);

 FUNC_2(&VAR_19, 0, VAR_20,
       VAR_8,
       VAR_0);
 VAR_21 = FUNC_1(VAR_18, VAR_16,
     VAR_9,
     VAR_13,
     VAR_10,
     &VAR_19);
 if (VAR_21)
  return VAR_21;

 FUNC_2(&VAR_19, 0, VAR_20,
       VAR_4,
       VAR_0);
 VAR_21 = FUNC_1(VAR_18, VAR_14,
     VAR_5,
     VAR_11,
     VAR_10,
     &VAR_19);
 if (VAR_21)
  return VAR_21;

 FUNC_2(&VAR_19, 0, VAR_20,
       VAR_6,
       VAR_0);
 VAR_21 = FUNC_1(VAR_18, VAR_15,
     VAR_7,
     VAR_12,
     VAR_10,
     &VAR_19);
 return VAR_21;
}
