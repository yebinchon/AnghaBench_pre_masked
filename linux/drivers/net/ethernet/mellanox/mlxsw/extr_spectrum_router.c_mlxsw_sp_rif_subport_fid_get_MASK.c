
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_rif {int rif_index; int mlxsw_sp; } ;
struct mlxsw_sp_fid {int dummy; } ;


 struct mlxsw_sp_fid* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct mlxsw_sp_fid *
FUNC_1(struct mlxsw_sp_rif *VAR_0,
        struct netlink_ext_ack *VAR_1)
{
 return FUNC_0(VAR_0->mlxsw_sp, VAR_0->rif_index);
}
