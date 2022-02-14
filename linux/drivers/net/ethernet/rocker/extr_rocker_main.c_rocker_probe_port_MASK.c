
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {unsigned int port_number; unsigned int pport; int napi_rx; int napi_tx; struct rocker* rocker; struct net_device* dev; } ;
struct rocker {struct rocker_port** ports; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct net_device {int features; int max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 struct rocker_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int *,int ,int ) ;
 int FUNC_6 (struct net_device*,int *,int ,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct rocker_port*) ;
 int FUNC_9 (struct rocker_port*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct rocker_port*) ;
 int FUNC_11 (struct rocker_port*) ;
 int FUNC_12 (struct rocker_port*) ;
 int FUNC_13 (struct rocker_port*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct rocker *VAR_10, unsigned int VAR_11)
{
 struct pci_dev *VAR_12 = VAR_10->pdev;
 struct rocker_port *VAR_13;
 struct net_device *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(sizeof(struct rocker_port));
 if (!VAR_14)
  return -VAR_0;
 FUNC_0(VAR_14, &VAR_12->dev);
 VAR_13 = FUNC_4(VAR_14);
 VAR_13->dev = VAR_14;
 VAR_13->rocker = VAR_10;
 VAR_13->port_number = VAR_11;
 VAR_13->pport = VAR_11 + 1;

 VAR_15 = FUNC_10(VAR_13);
 if (VAR_15) {
  FUNC_2(&VAR_12->dev, "world init failed\n");
  goto err_world_check_init;
 }

 FUNC_9(VAR_13);
 VAR_14->netdev_ops = &VAR_7;
 VAR_14->ethtool_ops = &VAR_6;
 FUNC_6(VAR_14, &VAR_13->napi_tx, VAR_9,
     VAR_1);
 FUNC_5(VAR_14, &VAR_13->napi_rx, VAR_8,
         VAR_1);
 FUNC_8(VAR_13);

 VAR_14->features |= VAR_2 | VAR_3;


 VAR_14->min_mtu = VAR_5;
 VAR_14->max_mtu = VAR_4;

 VAR_15 = FUNC_13(VAR_13);
 if (VAR_15) {
  FUNC_2(&VAR_12->dev, "port world pre-init failed\n");
  goto err_world_port_pre_init;
 }
 VAR_15 = FUNC_7(VAR_14);
 if (VAR_15) {
  FUNC_2(&VAR_12->dev, "register_netdev failed\n");
  goto err_register_netdev;
 }
 VAR_10->ports[VAR_11] = VAR_13;

 VAR_15 = FUNC_11(VAR_13);
 if (VAR_15) {
  FUNC_2(&VAR_12->dev, "port world init failed\n");
  goto err_world_port_init;
 }

 return 0;

err_world_port_init:
 VAR_10->ports[VAR_11] = ((void*)0);
 FUNC_14(VAR_14);
err_register_netdev:
 FUNC_12(VAR_13);
err_world_port_pre_init:
err_world_check_init:
 FUNC_3(VAR_14);
 return VAR_15;
}
