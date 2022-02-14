
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ethtool_ops; } ;
struct gbe_priv {int dev; int gbe_intf_head; int tx_pipe; } ;
struct gbe_intf {struct gbe_intf* slave; int gbe_intf_list; int tx_pipe; struct gbe_priv* gbe_dev; int dev; struct net_device* ndev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct gbe_intf*) ;
 void* FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (struct gbe_priv*,struct gbe_intf*,struct device_node*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, struct net_device *VAR_5,
        struct device_node *VAR_6, void **VAR_7)
{
 struct gbe_priv *VAR_8 = VAR_4;
 struct gbe_intf *VAR_9;
 int VAR_10;

 if (!VAR_6) {
  FUNC_0(VAR_8->dev, "interface node not available\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->ndev = VAR_5;
 VAR_9->dev = VAR_8->dev;
 VAR_9->gbe_dev = VAR_8;

 VAR_9->slave = FUNC_2(VAR_8->dev,
     sizeof(*VAR_9->slave),
     VAR_2);
 if (!VAR_9->slave) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 if (FUNC_3(VAR_8, VAR_9->slave, VAR_6)) {
  VAR_10 = -VAR_0;
  goto fail;
 }

 VAR_9->tx_pipe = VAR_8->tx_pipe;
 VAR_5->ethtool_ops = &VAR_3;
 FUNC_4(&VAR_9->gbe_intf_list, &VAR_8->gbe_intf_head);
 *VAR_7 = VAR_9;
 return 0;

fail:
 if (VAR_9->slave)
  FUNC_1(VAR_8->dev, VAR_9->slave);
 if (VAR_9)
  FUNC_1(VAR_8->dev, VAR_9);
 return VAR_10;
}
