
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; scalar_t__ phydev; } ;
struct mv643xx_eth_private {int rxq_count; int txq_count; scalar_t__ txq; scalar_t__ rxq; int mib_counters_timer; int rx_oom; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct mv643xx_eth_private*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 struct mv643xx_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mv643xx_eth_private*) ;
 int FUNC_9 (struct mv643xx_eth_private*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct mv643xx_eth_private *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 FUNC_12(VAR_3, VAR_1, 0x00000000);
 FUNC_12(VAR_3, VAR_0, 0x00000000);
 FUNC_9(VAR_3, VAR_0);

 FUNC_4(&VAR_3->napi);

 FUNC_0(&VAR_3->rx_oom);

 FUNC_6(VAR_2);
 if (VAR_2->phydev)
  FUNC_7(VAR_2->phydev);
 FUNC_1(VAR_2->irq, VAR_2);

 FUNC_8(VAR_3);
 FUNC_3(VAR_2);
 FUNC_2(VAR_3);
 FUNC_0(&VAR_3->mib_counters_timer);

 for (VAR_4 = 0; VAR_4 < VAR_3->rxq_count; VAR_4++)
  FUNC_10(VAR_3->rxq + VAR_4);
 for (VAR_4 = 0; VAR_4 < VAR_3->txq_count; VAR_4++)
  FUNC_11(VAR_3->txq + VAR_4);

 return 0;
}
