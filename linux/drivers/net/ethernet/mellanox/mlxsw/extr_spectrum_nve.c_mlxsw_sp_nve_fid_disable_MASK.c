
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int) ;
 struct net_device* FUNC_1 (int *,int) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct mlxsw_sp_fid*,struct net_device*) ;
 int FUNC_4 (struct mlxsw_sp_fid*) ;
 scalar_t__ FUNC_5 (struct mlxsw_sp_fid*,int*) ;
 scalar_t__ FUNC_6 (struct mlxsw_sp_fid*,int *) ;
 int FUNC_7 (struct mlxsw_sp_fid*) ;
 int FUNC_8 (struct mlxsw_sp*,struct mlxsw_sp_fid*,struct net_device*,int ) ;
 int FUNC_9 (struct mlxsw_sp*,int ) ;
 int FUNC_10 (struct mlxsw_sp*,struct mlxsw_sp_fid*) ;
 int FUNC_11 (struct mlxsw_sp*) ;

void FUNC_12(struct mlxsw_sp *VAR_1,
         struct mlxsw_sp_fid *VAR_2)
{
 u16 VAR_3 = FUNC_4(VAR_2);
 struct net_device *VAR_4;
 int VAR_5;
 __be32 VAR_6;

 FUNC_10(VAR_1, VAR_2);
 FUNC_9(VAR_1, VAR_3);

 if (FUNC_0(FUNC_5(VAR_2, &VAR_5) ||
      FUNC_6(VAR_2, &VAR_6)))
  goto out;

 VAR_4 = FUNC_1(&VAR_0, VAR_5);
 if (!VAR_4)
  goto out;

 FUNC_8(VAR_1, VAR_2, VAR_4, VAR_6);
 FUNC_3(VAR_2, VAR_4);

 FUNC_2(VAR_4);

out:
 FUNC_7(VAR_2);
 FUNC_11(VAR_1);
}
