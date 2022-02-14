
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int * ptp_ops; int * port_type_speed_ops; int * sb_vals; int rif_ops_arr; int mac_mask; int nve_ops_arr; int * acl_tcam_ops; int * mr_tcam_ops; int * afk_ops; int * afa_ops; int * kvdl_ops; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dummy; } ;


 struct mlxsw_sp* FUNC_0 (struct mlxsw_core*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mlxsw_core*,struct mlxsw_bus_info const*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_core *VAR_11,
     const struct mlxsw_bus_info *VAR_12)
{
 struct mlxsw_sp *VAR_13 = FUNC_0(VAR_11);

 VAR_13->kvdl_ops = &VAR_3;
 VAR_13->afa_ops = &VAR_1;
 VAR_13->afk_ops = &VAR_2;
 VAR_13->mr_tcam_ops = &VAR_5;
 VAR_13->acl_tcam_ops = &VAR_0;
 VAR_13->nve_ops_arr = VAR_6;
 VAR_13->mac_mask = VAR_4;
 VAR_13->rif_ops_arr = VAR_9;
 VAR_13->sb_vals = &VAR_10;
 VAR_13->port_type_speed_ops = &VAR_7;
 VAR_13->ptp_ops = &VAR_8;

 return FUNC_1(VAR_11, VAR_12);
}
