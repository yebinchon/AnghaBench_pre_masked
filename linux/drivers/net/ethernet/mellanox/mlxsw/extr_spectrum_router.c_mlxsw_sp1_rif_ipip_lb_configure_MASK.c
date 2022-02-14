
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_vr {int rif_count; int id; } ;
struct mlxsw_sp_rif_ipip_lb {scalar_t__ ul_rif_id; int ul_vr_id; } ;
struct mlxsw_sp_rif {struct mlxsw_sp* mlxsw_sp; int dev; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_vr*) ;
 int FUNC_1 (struct mlxsw_sp_vr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_sp_rif_ipip_lb*,int ,int ,int) ;
 struct mlxsw_sp_rif_ipip_lb* FUNC_4 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_vr* FUNC_5 (struct mlxsw_sp*,int ,int *) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp_rif_ipip_lb *VAR_1 = FUNC_4(VAR_0);
 u32 VAR_2 = FUNC_2(VAR_0->dev);
 struct mlxsw_sp *VAR_3 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_vr *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_3, VAR_2, ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_3(VAR_1, VAR_4->id, 0, 1);
 if (VAR_5)
  goto err_loopback_op;

 VAR_1->ul_vr_id = VAR_4->id;
 VAR_1->ul_rif_id = 0;
 ++VAR_4->rif_count;
 return 0;

err_loopback_op:
 FUNC_6(VAR_3, VAR_4);
 return VAR_5;
}
