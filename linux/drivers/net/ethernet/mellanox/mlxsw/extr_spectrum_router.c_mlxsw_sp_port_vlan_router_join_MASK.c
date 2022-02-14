
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif_params {struct net_device* dev; } ;
struct mlxsw_sp_rif {TYPE_1__* ops; } ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_fid* fid; int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {struct mlxsw_sp_fid* (* fid_get ) (struct mlxsw_sp_rif*,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_rif*) ;
 int FUNC_1 (struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;
 int FUNC_3 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;
 int FUNC_4 (struct mlxsw_sp_fid*) ;
 int FUNC_5 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_6 (struct mlxsw_sp_port*,int ,int ) ;
 struct mlxsw_sp_rif* FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_rif_params*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct mlxsw_sp_rif_params*,struct mlxsw_sp_port_vlan*) ;
 int FUNC_9 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_fid* FUNC_10 (struct mlxsw_sp_rif*,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_11(struct mlxsw_sp_port_vlan *VAR_1,
          struct net_device *VAR_2,
          struct netlink_ext_ack *VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = VAR_1->mlxsw_sp_port;
 struct mlxsw_sp *VAR_5 = VAR_4->mlxsw_sp;
 struct mlxsw_sp_rif_params VAR_6 = {
  .dev = VAR_2,
 };
 u16 VAR_7 = VAR_1->vid;
 struct mlxsw_sp_rif *VAR_8;
 struct mlxsw_sp_fid *VAR_9;
 int VAR_10;

 FUNC_8(&VAR_6, VAR_1);
 VAR_8 = FUNC_7(VAR_5, &VAR_6, VAR_3);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);


 VAR_9 = VAR_8->ops->fid_get(VAR_8, VAR_3);
 VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_7);
 if (VAR_10)
  goto err_fid_port_vid_map;

 VAR_10 = FUNC_5(VAR_4, VAR_7, 0);
 if (VAR_10)
  goto err_port_vid_learning_set;

 VAR_10 = FUNC_6(VAR_4, VAR_7,
     VAR_0);
 if (VAR_10)
  goto err_port_vid_stp_set;

 VAR_1->fid = VAR_9;

 return 0;

err_port_vid_stp_set:
 FUNC_5(VAR_4, VAR_7, 1);
err_port_vid_learning_set:
 FUNC_3(VAR_9, VAR_4, VAR_7);
err_fid_port_vid_map:
 FUNC_4(VAR_9);
 FUNC_9(VAR_8);
 return VAR_10;
}
