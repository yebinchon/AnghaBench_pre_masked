
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int mode; int name; } ;
struct TYPE_12__ {TYPE_3__ attr; int show; int store; } ;
struct mlx4_port_info {int port; int devlink_port; TYPE_6__ port_attr; struct mlx4_dev* dev; TYPE_6__ port_mtu_attr; int dev_mtu_name; int dev_name; int base_qpn; int gid_table; int vlan_table; int mac_table; } ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct devlink {int dummy; } ;
struct TYPE_11__ {struct mlx4_port_info* port; } ;
struct TYPE_9__ {TYPE_1__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int *,TYPE_6__*) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (struct devlink*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_dev*,char*,int) ;
 int FUNC_5 (struct mlx4_dev*,int) ;
 int FUNC_6 (struct mlx4_dev*,int *) ;
 int FUNC_7 (struct mlx4_dev*,int *) ;
 int FUNC_8 (struct mlx4_dev*,int *) ;
 scalar_t__ FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 TYPE_4__* FUNC_11 (struct mlx4_dev*) ;
 struct devlink* FUNC_12 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_15(struct mlx4_dev *VAR_4, int VAR_5)
{
 struct devlink *VAR_6 = FUNC_12(FUNC_11(VAR_4));
 struct mlx4_port_info *VAR_7 = &FUNC_11(VAR_4)->port[VAR_5];
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, &VAR_7->devlink_port, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7->dev = VAR_4;
 VAR_7->port = VAR_5;
 if (!FUNC_10(VAR_4)) {
  FUNC_6(VAR_4, &VAR_7->mac_table);
  FUNC_8(VAR_4, &VAR_7->vlan_table);
  FUNC_7(VAR_4, &VAR_7->gid_table);
  VAR_7->base_qpn = FUNC_5(VAR_4, VAR_5);
 }

 FUNC_13(VAR_7->dev_name, "mlx4_port%d", VAR_5);
 VAR_7->port_attr.attr.name = VAR_7->dev_name;
 if (FUNC_9(VAR_4)) {
  VAR_7->port_attr.attr.mode = 0444;
 } else {
  VAR_7->port_attr.attr.mode = 0644;
  VAR_7->port_attr.store = VAR_1;
 }
 VAR_7->port_attr.show = VAR_3;
 FUNC_14(&VAR_7->port_attr.attr);

 VAR_8 = FUNC_0(&VAR_4->persist->pdev->dev, &VAR_7->port_attr);
 if (VAR_8) {
  FUNC_4(VAR_4, "Failed to create file for port %d\n", VAR_5);
  FUNC_3(&VAR_7->devlink_port);
  VAR_7->port = -1;
  return VAR_8;
 }

 FUNC_13(VAR_7->dev_mtu_name, "mlx4_port%d_mtu", VAR_5);
 VAR_7->port_mtu_attr.attr.name = VAR_7->dev_mtu_name;
 if (FUNC_9(VAR_4)) {
  VAR_7->port_mtu_attr.attr.mode = 0444;
 } else {
  VAR_7->port_mtu_attr.attr.mode = 0644;
  VAR_7->port_mtu_attr.store = VAR_0;
 }
 VAR_7->port_mtu_attr.show = VAR_2;
 FUNC_14(&VAR_7->port_mtu_attr.attr);

 VAR_8 = FUNC_0(&VAR_4->persist->pdev->dev,
     &VAR_7->port_mtu_attr);
 if (VAR_8) {
  FUNC_4(VAR_4, "Failed to create mtu file for port %d\n", VAR_5);
  FUNC_1(&VAR_7->dev->persist->pdev->dev,
       &VAR_7->port_attr);
  FUNC_3(&VAR_7->devlink_port);
  VAR_7->port = -1;
  return VAR_8;
 }

 return 0;
}
