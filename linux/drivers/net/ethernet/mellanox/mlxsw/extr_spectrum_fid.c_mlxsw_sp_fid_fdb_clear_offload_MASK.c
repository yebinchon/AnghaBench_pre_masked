
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_fid_ops {int (* fdb_clear_offload ) (struct mlxsw_sp_fid const*,struct net_device const*) ;} ;
struct mlxsw_sp_fid_family {struct mlxsw_sp_fid_ops* ops; } ;
struct mlxsw_sp_fid {struct mlxsw_sp_fid_family* fid_family; } ;


 int FUNC_0 (struct mlxsw_sp_fid const*,struct net_device const*) ;

void FUNC_1(const struct mlxsw_sp_fid *VAR_0,
        const struct net_device *VAR_1)
{
 struct mlxsw_sp_fid_family *VAR_2 = VAR_0->fid_family;
 const struct mlxsw_sp_fid_ops *VAR_3 = VAR_2->ops;

 if (VAR_3->fdb_clear_offload)
  VAR_3->fdb_clear_offload(VAR_0, VAR_1);
}
