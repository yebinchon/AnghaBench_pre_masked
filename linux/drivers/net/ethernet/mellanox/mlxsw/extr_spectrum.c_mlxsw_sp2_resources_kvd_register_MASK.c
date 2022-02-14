
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_core {int dummy; } ;
struct devlink_resource_size_params {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct devlink*,int ,int ,int ,int ,struct devlink_resource_size_params*) ;
 int FUNC_3 (struct devlink_resource_size_params*,int ,int ,int ,int ) ;
 struct devlink* FUNC_4 (struct mlxsw_core*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_core *VAR_7)
{
 struct devlink *VAR_8 = FUNC_4(VAR_7);
 struct devlink_resource_size_params VAR_9;
 u32 VAR_10;

 if (!FUNC_1(VAR_7, VAR_3))
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_7, VAR_3);
 FUNC_3(&VAR_9, VAR_10, VAR_10,
       VAR_4,
       VAR_1);

 return FUNC_2(VAR_8, VAR_6,
      VAR_10, VAR_5,
      VAR_0,
      &VAR_9);
}
