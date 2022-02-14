
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_rif {TYPE_1__* dev; int mlxsw_sp; struct mlxsw_sp_fid* fid; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct mlxsw_sp_fid*) ;
 int FUNC_1 (struct mlxsw_sp_fid*,int *) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct mlxsw_sp_rif*) ;
 int FUNC_4 (struct mlxsw_sp_rif*,int) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp_fid *VAR_1 = VAR_0->fid;

 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_0->mlxsw_sp, VAR_0->dev->dev_addr,
       FUNC_0(VAR_1), 0);
 FUNC_3(VAR_0);
 FUNC_4(VAR_0, 0);
}
