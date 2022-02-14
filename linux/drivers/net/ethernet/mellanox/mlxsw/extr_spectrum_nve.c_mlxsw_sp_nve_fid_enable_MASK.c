
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_nve_params {size_t type; int vni; TYPE_1__* dev; } ;
struct mlxsw_sp_nve_ops {int (* fdb_replay ) (TYPE_1__*,int ,struct netlink_ext_ack*) ;int (* nve_config ) (struct mlxsw_sp_nve*,TYPE_1__*,struct mlxsw_sp_nve_config*) ;int (* can_offload ) (struct mlxsw_sp_nve*,TYPE_1__*,struct netlink_ext_ack*) ;} ;
struct mlxsw_sp_nve_config {int dummy; } ;
struct mlxsw_sp_nve {struct mlxsw_sp_nve_config config; scalar_t__ num_nve_tunnels; struct mlxsw_sp_nve_ops** nve_ops_arr; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;
typedef int config ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_nve_config*,struct mlxsw_sp_nve_config*,int) ;
 int FUNC_2 (struct mlxsw_sp_nve_config*,int ,int) ;
 int FUNC_3 (struct mlxsw_sp_fid*) ;
 int FUNC_4 (struct mlxsw_sp_fid*,size_t,int ,int ) ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_nve_config*) ;
 int FUNC_7 (struct mlxsw_sp_nve*,TYPE_1__*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct mlxsw_sp_nve*,TYPE_1__*,struct mlxsw_sp_nve_config*) ;
 int FUNC_9 (TYPE_1__*,int ,struct netlink_ext_ack*) ;

int FUNC_10(struct mlxsw_sp *VAR_1, struct mlxsw_sp_fid *VAR_2,
       struct mlxsw_sp_nve_params *VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_sp_nve *VAR_5 = VAR_1->nve;
 const struct mlxsw_sp_nve_ops *VAR_6;
 struct mlxsw_sp_nve_config VAR_7;
 int VAR_8;

 VAR_6 = VAR_5->nve_ops_arr[VAR_3->type];

 if (!VAR_6->can_offload(VAR_5, VAR_3->dev, VAR_4))
  return -VAR_0;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_6->nve_config(VAR_5, VAR_3->dev, &VAR_7);
 if (VAR_5->num_nve_tunnels &&
     FUNC_1(&VAR_7, &VAR_5->config, sizeof(VAR_7))) {
  FUNC_0(VAR_4, "Conflicting NVE tunnels configuration");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_1, &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_4, "Failed to initialize NVE tunnel");
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_2, VAR_3->type, VAR_3->vni,
       VAR_3->dev->ifindex);
 if (VAR_8) {
  FUNC_0(VAR_4, "Failed to set VNI on FID");
  goto err_fid_vni_set;
 }

 VAR_5->config = VAR_7;

 VAR_8 = VAR_6->fdb_replay(VAR_3->dev, VAR_3->vni, VAR_4);
 if (VAR_8)
  goto err_fdb_replay;

 return 0;

err_fdb_replay:
 FUNC_3(VAR_2);
err_fid_vni_set:
 FUNC_5(VAR_1);
 return VAR_8;
}
