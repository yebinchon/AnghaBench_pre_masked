
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int base_addr; int irq; } ;
struct mpc52xx_fec_priv {int fec; int tx_dmatsk; int rx_dmatsk; int * phy_node; } ;
struct mpc52xx_fec {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mpc52xx_fec_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int
FUNC_10(struct platform_device *VAR_0)
{
 struct net_device *VAR_1;
 struct mpc52xx_fec_priv *VAR_2;

 VAR_1 = FUNC_7(VAR_0);
 VAR_2 = FUNC_5(VAR_1);

 FUNC_9(VAR_1);

 FUNC_6(VAR_2->phy_node);
 VAR_2->phy_node = ((void*)0);

 FUNC_4(VAR_1->irq);

 FUNC_0(VAR_2->rx_dmatsk);
 FUNC_1(VAR_2->tx_dmatsk);

 FUNC_3(VAR_2->fec);

 FUNC_8(VAR_1->base_addr, sizeof(struct mpc52xx_fec));

 FUNC_2(VAR_1);

 return 0;
}
