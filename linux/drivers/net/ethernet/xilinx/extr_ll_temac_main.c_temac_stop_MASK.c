
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int rx_irq; int tx_irq; } ;
struct phy_device {int dummy; } ;
struct net_device {int dev; struct phy_device* phydev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct temac_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct temac_local *VAR_1 = FUNC_2(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;

 FUNC_0(&VAR_0->dev, "temac_close()\n");

 FUNC_1(VAR_1->tx_irq, VAR_0);
 FUNC_1(VAR_1->rx_irq, VAR_0);

 if (VAR_2)
  FUNC_3(VAR_2);

 FUNC_4(VAR_0);

 return 0;
}
