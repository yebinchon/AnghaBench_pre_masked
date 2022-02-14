
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_rif {int fid; TYPE_1__* dev; int mlxsw_sp; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mlxsw_sp_rif*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct mlxsw_sp_rif*,int) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_rif *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0->mlxsw_sp, VAR_0->dev->dev_addr,
      FUNC_0(VAR_0->fid), 1);
 if (VAR_1)
  goto err_rif_fdb_op;

 FUNC_1(VAR_0->fid, VAR_0);
 return 0;

err_rif_fdb_op:
 FUNC_3(VAR_0, 0);
 return VAR_1;
}
