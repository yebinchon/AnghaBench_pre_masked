
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int dev; int tx_irq; int rx_irq; int phy_interface; int phy_name; int ndev; scalar_t__ phy_node; } ;
struct phy_device {int dummy; } ;
struct net_device {int name; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct temac_local* FUNC_5 (struct net_device*) ;
 struct phy_device* FUNC_6 (int ,scalar_t__,int ,int ,int ) ;
 struct phy_device* FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (int ,int ,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_3 ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_4)
{
 struct temac_local *VAR_5 = FUNC_5(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_2(&VAR_4->dev, "temac_open()\n");

 if (VAR_5->phy_node) {
  VAR_6 = FUNC_6(VAR_5->ndev, VAR_5->phy_node,
     VAR_3, 0, 0);
  if (!VAR_6) {
   FUNC_3(VAR_5->dev, "of_phy_connect() failed\n");
   return -VAR_0;
  }
  FUNC_9(VAR_6);
 } else if (FUNC_11(VAR_5->phy_name) > 0) {
  VAR_6 = FUNC_7(VAR_5->ndev, VAR_5->phy_name, VAR_3,
         VAR_5->phy_interface);
  if (FUNC_0(VAR_6)) {
   FUNC_3(VAR_5->dev, "phy_connect() failed\n");
   return FUNC_1(VAR_6);
  }
  FUNC_9(VAR_6);
 }

 FUNC_12(VAR_4);

 VAR_7 = FUNC_10(VAR_5->tx_irq, VAR_2, 0, VAR_4->name, VAR_4);
 if (VAR_7)
  goto err_tx_irq;
 VAR_7 = FUNC_10(VAR_5->rx_irq, VAR_1, 0, VAR_4->name, VAR_4);
 if (VAR_7)
  goto err_rx_irq;

 return 0;

 err_rx_irq:
 FUNC_4(VAR_5->tx_irq, VAR_4);
 err_tx_irq:
 if (VAR_6)
  FUNC_8(VAR_6);
 FUNC_3(VAR_5->dev, "request_irq() failed\n");
 return VAR_7;
}
