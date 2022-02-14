
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ addr4; } ;
struct mlxsw_sp_nve_config {scalar_t__ ul_proto; scalar_t__ ul_tb_id; TYPE_1__ ul_sip; } ;
struct mlxsw_sp_nve {scalar_t__ num_nve_tunnels; struct mlxsw_sp_nve_config config; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const struct mlxsw_sp *VAR_1,
          u32 VAR_2, __be32 VAR_3)
{
 struct mlxsw_sp_nve *VAR_4 = VAR_1->nve;
 struct mlxsw_sp_nve_config *VAR_5 = &VAR_4->config;

 if (VAR_4->num_nve_tunnels &&
     VAR_5->ul_proto == VAR_0 &&
     VAR_5->ul_sip.addr4 == VAR_3 && VAR_5->ul_tb_id == VAR_2)
  return 1;

 return 0;
}
