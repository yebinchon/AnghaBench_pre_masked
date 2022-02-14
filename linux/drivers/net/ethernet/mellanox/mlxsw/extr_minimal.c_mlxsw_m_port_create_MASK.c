
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int * ethtool_ops; int * netdev_ops; } ;
struct mlxsw_m_port {size_t local_port; size_t module; struct mlxsw_m* mlxsw_m; struct net_device* dev; } ;
struct mlxsw_m {int core; struct mlxsw_m_port** ports; TYPE_1__* bus_info; int base_mac; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,size_t,struct mlxsw_m_port*,struct net_device*) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,size_t,size_t,int,int ,int ,int) ;
 int FUNC_7 (struct mlxsw_m_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlxsw_m_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int
FUNC_11(struct mlxsw_m *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct mlxsw_m_port *VAR_6;
 struct net_device *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_3->core, VAR_4,
       VAR_5 + 1, 0, 0,
       VAR_3->base_mac,
       sizeof(VAR_3->base_mac));
 if (VAR_8) {
  FUNC_2(VAR_3->bus_info->dev, "Port %d: Failed to init core port\n",
   VAR_4);
  return VAR_8;
 }

 VAR_7 = FUNC_1(sizeof(struct mlxsw_m_port));
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err_alloc_etherdev;
 }

 FUNC_0(VAR_7, VAR_3->bus_info->dev);
 VAR_6 = FUNC_8(VAR_7);
 VAR_6->dev = VAR_7;
 VAR_6->mlxsw_m = VAR_3;
 VAR_6->local_port = VAR_4;
 VAR_6->module = VAR_5;

 VAR_7->netdev_ops = &VAR_2;
 VAR_7->ethtool_ops = &VAR_1;

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_3->bus_info->dev, "Port %d: Unable to get port mac address\n",
   VAR_6->local_port);
  goto err_dev_addr_get;
 }

 FUNC_9(VAR_7);
 VAR_3->ports[VAR_4] = VAR_6;
 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_3->bus_info->dev, "Port %d: Failed to register netdev\n",
   VAR_6->local_port);
  goto err_register_netdev;
 }

 FUNC_4(VAR_3->core, VAR_6->local_port,
    VAR_6, VAR_7);

 return 0;

err_register_netdev:
 VAR_3->ports[VAR_4] = ((void*)0);
 FUNC_3(VAR_7);
err_dev_addr_get:
err_alloc_etherdev:
 FUNC_5(VAR_3->core, VAR_4);
 return VAR_8;
}
