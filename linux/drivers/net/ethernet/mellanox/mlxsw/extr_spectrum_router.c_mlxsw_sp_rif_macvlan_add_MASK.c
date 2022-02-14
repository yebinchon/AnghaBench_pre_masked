
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dev_addr; } ;
struct mlxsw_sp_rif {int fid; TYPE_1__* ops; int rif_index; } ;
struct mlxsw_sp {int dummy; } ;
struct macvlan_dev {int lowerdev; } ;
struct TYPE_2__ {int (* fdb_del ) (struct mlxsw_sp_rif*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ,int) ;
 struct mlxsw_sp_rif* FUNC_3 (struct mlxsw_sp*,int ) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int ,int) ;
 struct macvlan_dev* FUNC_5 (struct net_device const*) ;
 int FUNC_6 (struct mlxsw_sp_rif*,int ) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_1,
        const struct net_device *VAR_2,
        struct netlink_ext_ack *VAR_3)
{
 struct macvlan_dev *VAR_4 = FUNC_5(VAR_2);
 struct mlxsw_sp_rif *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_4->lowerdev);
 if (!VAR_5) {
  FUNC_0(VAR_3, "macvlan is only supported on top of router interfaces");
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_1, VAR_2->dev_addr,
      FUNC_1(VAR_5->fid), 1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_5->rif_index,
       VAR_2->dev_addr, 1);
 if (VAR_6)
  goto err_rif_vrrp_add;




 if (VAR_5->ops->fdb_del)
  VAR_5->ops->fdb_del(VAR_5, VAR_2->dev_addr);

 return 0;

err_rif_vrrp_add:
 FUNC_2(VAR_1, VAR_2->dev_addr,
       FUNC_1(VAR_5->fid), 0);
 return VAR_6;
}
