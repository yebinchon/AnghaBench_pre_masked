
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_kvdl {int dummy; } ;
struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devlink*,int ,int ,struct mlxsw_sp1_kvdl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp1_kvdl*) ;
 int VAR_7 ;
 struct devlink* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_8, void *VAR_9)
{
 struct devlink *VAR_10 = FUNC_2(VAR_8->core);
 struct mlxsw_sp1_kvdl *VAR_11 = VAR_9;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_11);
 if (VAR_12)
  return VAR_12;
 FUNC_0(VAR_10,
       VAR_0,
       VAR_6,
       VAR_11);
 FUNC_0(VAR_10,
       VAR_3,
       VAR_7,
       VAR_11);
 FUNC_0(VAR_10,
       VAR_1,
       VAR_4,
       VAR_11);
 FUNC_0(VAR_10,
       VAR_2,
       VAR_5,
       VAR_11);
 return 0;
}
