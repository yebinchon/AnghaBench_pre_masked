
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int * resource; int dev; } ;
struct net_device {scalar_t__ phydev; } ;
struct greth_private {int regs; int mdio; int tx_bd_base_phys; int tx_bd_base; int rx_bd_base_phys; int rx_bd_base; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct greth_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct greth_private *VAR_2 = FUNC_3(VAR_1);


 FUNC_0(&VAR_0->dev, 1024, VAR_2->rx_bd_base, VAR_2->rx_bd_base_phys);

 FUNC_0(&VAR_0->dev, 1024, VAR_2->tx_bd_base, VAR_2->tx_bd_base_phys);

 if (VAR_1->phydev)
  FUNC_5(VAR_1->phydev);
 FUNC_2(VAR_2->mdio);

 FUNC_8(VAR_1);
 FUNC_1(VAR_1);

 FUNC_4(&VAR_0->resource[0], VAR_2->regs, FUNC_7(&VAR_0->resource[0]));

 return 0;
}
