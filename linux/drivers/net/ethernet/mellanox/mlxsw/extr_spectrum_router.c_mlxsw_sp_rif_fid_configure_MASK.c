
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_rif {int fid; TYPE_1__* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mlxsw_sp_rif*) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int) ;
 int FUNC_4 (struct mlxsw_sp_rif*,int ,int ,int) ;
 int FUNC_5 (struct mlxsw_sp*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_rif *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_3->mlxsw_sp;
 u16 VAR_5 = FUNC_1(VAR_3->fid);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_0, VAR_5,
           1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3->fid, VAR_2,
         FUNC_5(VAR_4), 1);
 if (VAR_6)
  goto err_fid_mc_flood_set;

 VAR_6 = FUNC_0(VAR_3->fid, VAR_1,
         FUNC_5(VAR_4), 1);
 if (VAR_6)
  goto err_fid_bc_flood_set;

 VAR_6 = FUNC_3(VAR_3->mlxsw_sp, VAR_3->dev->dev_addr,
      FUNC_1(VAR_3->fid), 1);
 if (VAR_6)
  goto err_rif_fdb_op;

 FUNC_2(VAR_3->fid, VAR_3);
 return 0;

err_rif_fdb_op:
 FUNC_0(VAR_3->fid, VAR_1,
          FUNC_5(VAR_4), 0);
err_fid_bc_flood_set:
 FUNC_0(VAR_3->fid, VAR_2,
          FUNC_5(VAR_4), 0);
err_fid_mc_flood_set:
 FUNC_4(VAR_3, VAR_0, VAR_5, 0);
 return VAR_6;
}
