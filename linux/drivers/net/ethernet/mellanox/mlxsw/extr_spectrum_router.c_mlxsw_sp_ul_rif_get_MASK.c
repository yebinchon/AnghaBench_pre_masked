
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_vr {struct mlxsw_sp_vr* ul_rif; int ul_rif_refcnt; int rif_count; } ;
struct mlxsw_sp_rif {struct mlxsw_sp_rif* ul_rif; int ul_rif_refcnt; int rif_count; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_vr* FUNC_0 (struct mlxsw_sp_vr*) ;
 struct mlxsw_sp_vr* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_vr*) ;
 int FUNC_3 (struct mlxsw_sp_vr*) ;
 struct mlxsw_sp_vr* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_vr*,struct netlink_ext_ack*) ;
 struct mlxsw_sp_vr* FUNC_5 (struct mlxsw_sp*,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static struct mlxsw_sp_rif *
FUNC_9(struct mlxsw_sp *VAR_0, u32 VAR_1,
      struct netlink_ext_ack *VAR_2)
{
 struct mlxsw_sp_vr *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);

 if (FUNC_7(&VAR_3->ul_rif_refcnt))
  return VAR_3->ul_rif;

 VAR_3->ul_rif = FUNC_4(VAR_0, VAR_3, VAR_2);
 if (FUNC_2(VAR_3->ul_rif)) {
  VAR_4 = FUNC_3(VAR_3->ul_rif);
  goto err_ul_rif_create;
 }

 VAR_3->rif_count++;
 FUNC_8(&VAR_3->ul_rif_refcnt, 1);

 return VAR_3->ul_rif;

err_ul_rif_create:
 FUNC_6(VAR_0, VAR_3);
 return FUNC_1(VAR_4);
}
