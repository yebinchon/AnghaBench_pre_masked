
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int dev; } ;
struct emac_priv {int phy_node; int dma; scalar_t__ rxchan; scalar_t__ txchan; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 struct emac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*) ;
 struct net_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_8(VAR_0);
 struct emac_priv *VAR_2 = FUNC_4(VAR_1);
 struct device_node *VAR_3 = VAR_0->dev.of_node;

 FUNC_2(&VAR_1->dev, "DaVinci EMAC: davinci_emac_remove()\n");

 if (VAR_2->txchan)
  FUNC_0(VAR_2->txchan);
 if (VAR_2->rxchan)
  FUNC_0(VAR_2->rxchan);
 FUNC_1(VAR_2->dma);

 FUNC_10(VAR_1);
 FUNC_5(VAR_2->phy_node);
 FUNC_9(&VAR_0->dev);
 if (FUNC_7(VAR_3))
  FUNC_6(VAR_3);
 FUNC_3(VAR_1);

 return 0;
}
