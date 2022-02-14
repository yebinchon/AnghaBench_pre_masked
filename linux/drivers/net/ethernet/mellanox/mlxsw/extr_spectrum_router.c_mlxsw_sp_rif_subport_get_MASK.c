
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_rif_subport {int ref_count; } ;
struct mlxsw_sp_rif_params {int dev; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_rif* FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_rif_params const*,struct netlink_ext_ack*) ;
 struct mlxsw_sp_rif* FUNC_1 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_rif_subport* FUNC_2 (struct mlxsw_sp_rif*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mlxsw_sp_rif *
FUNC_4(struct mlxsw_sp *VAR_0,
    const struct mlxsw_sp_rif_params *VAR_1,
    struct netlink_ext_ack *VAR_2)
{
 struct mlxsw_sp_rif_subport *VAR_3;
 struct mlxsw_sp_rif *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->dev);
 if (!VAR_4)
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_4);
 FUNC_3(&VAR_3->ref_count);
 return VAR_4;
}
