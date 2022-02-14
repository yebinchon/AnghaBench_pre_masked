
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int listeners_count; int listeners; int * ptp_ops; int * port_type_speed_ops; int * sb_vals; int rif_ops_arr; int mac_mask; int nve_ops_arr; int * acl_tcam_ops; int * mr_tcam_ops; int * afk_ops; int * afa_ops; int * kvdl_ops; int fw_filename; int * req_rev; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct mlxsw_sp* FUNC_1 (struct mlxsw_core*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct mlxsw_core*,struct mlxsw_bus_info const*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_core *VAR_14,
     const struct mlxsw_bus_info *VAR_15)
{
 struct mlxsw_sp *VAR_16 = FUNC_1(VAR_14);

 VAR_16->req_rev = &VAR_4;
 VAR_16->fw_filename = VAR_0;
 VAR_16->kvdl_ops = &VAR_5;
 VAR_16->afa_ops = &VAR_2;
 VAR_16->afk_ops = &VAR_3;
 VAR_16->mr_tcam_ops = &VAR_8;
 VAR_16->acl_tcam_ops = &VAR_1;
 VAR_16->nve_ops_arr = VAR_9;
 VAR_16->mac_mask = VAR_7;
 VAR_16->rif_ops_arr = VAR_12;
 VAR_16->sb_vals = &VAR_13;
 VAR_16->port_type_speed_ops = &VAR_10;
 VAR_16->ptp_ops = &VAR_11;
 VAR_16->listeners = VAR_6;
 VAR_16->listeners_count = FUNC_0(VAR_6);

 return FUNC_2(VAR_14, VAR_15);
}
