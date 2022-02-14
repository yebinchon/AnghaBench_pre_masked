
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_rif {struct mlxsw_sp_fid* fid; TYPE_1__* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_sp_fid*,int ,int ,int) ;
 int FUNC_1 (struct mlxsw_sp_fid*) ;
 int FUNC_2 (struct mlxsw_sp_fid*,int *) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int) ;
 int FUNC_4 (struct mlxsw_sp_rif*) ;
 int FUNC_5 (struct mlxsw_sp_rif*,int ,int ,int) ;
 int FUNC_6 (struct mlxsw_sp*) ;

__attribute__((used)) static void FUNC_7(struct mlxsw_sp_rif *VAR_3)
{
 u16 VAR_4 = FUNC_1(VAR_3->fid);
 struct mlxsw_sp *VAR_5 = VAR_3->mlxsw_sp;
 struct mlxsw_sp_fid *VAR_6 = VAR_3->fid;

 FUNC_2(VAR_6, ((void*)0));
 FUNC_3(VAR_3->mlxsw_sp, VAR_3->dev->dev_addr,
       FUNC_1(VAR_6), 0);
 FUNC_4(VAR_3);
 FUNC_0(VAR_3->fid, VAR_1,
          FUNC_6(VAR_5), 0);
 FUNC_0(VAR_3->fid, VAR_2,
          FUNC_6(VAR_5), 0);
 FUNC_5(VAR_3, VAR_0, VAR_4, 0);
}
