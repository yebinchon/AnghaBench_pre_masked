
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_config {int ul_sip; int ul_proto; int ul_tb_id; int udp_dport; } ;
struct mlxsw_sp_nve {int tunnel_index; int ul_rif_index; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_nve_config const*) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_nve *VAR_0,
        const struct mlxsw_sp_nve_config *VAR_1)
{
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1->udp_dport);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3)
  goto err_config_set;

 VAR_3 = FUNC_4(VAR_2, VAR_0->tunnel_index,
        VAR_0->ul_rif_index);
 if (VAR_3)
  goto err_rtdp_set;

 VAR_3 = FUNC_5(VAR_2, VAR_1->ul_tb_id,
      VAR_1->ul_proto,
      &VAR_1->ul_sip,
      VAR_0->tunnel_index);
 if (VAR_3)
  goto err_promote_decap;

 return 0;

err_promote_decap:
err_rtdp_set:
 FUNC_2(VAR_2);
err_config_set:
 FUNC_1(VAR_2, 0);
 return VAR_3;
}
