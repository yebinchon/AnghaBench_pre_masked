
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_nve_ops {int (* fdb_clear_offload ) (struct net_device const*,int ) ;} ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {TYPE_1__* nve; } ;
typedef enum mlxsw_sp_nve_type { ____Placeholder_mlxsw_sp_nve_type } mlxsw_sp_nve_type ;
typedef int __be32 ;
struct TYPE_2__ {struct mlxsw_sp_nve_ops** nve_ops_arr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp_fid const*,int*) ;
 int FUNC_2 (struct net_device const*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0,
        const struct mlxsw_sp_fid *VAR_1,
        const struct net_device *VAR_2,
        __be32 VAR_3)
{
 const struct mlxsw_sp_nve_ops *VAR_4;
 enum mlxsw_sp_nve_type VAR_5;

 if (FUNC_0(FUNC_1(VAR_1, &VAR_5)))
  return;

 VAR_4 = VAR_0->nve->nve_ops_arr[VAR_5];
 VAR_4->fdb_clear_offload(VAR_2, VAR_3);
}
