
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ phydev; } ;
struct altera_tse_private {TYPE_1__* dmaops; int mac_cfg_lock; int tx_lock; int tx_irq; int rx_irq; int rxdma_irq_lock; int napi; } ;
struct TYPE_2__ {int (* uninit_dma ) (struct altera_tse_private*) ;int (* reset_dma ) (struct altera_tse_private*) ;int (* disable_txirq ) (struct altera_tse_private*) ;int (* disable_rxirq ) (struct altera_tse_private*) ;} ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct altera_tse_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct altera_tse_private*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct altera_tse_private*) ;
 int FUNC_13 (struct altera_tse_private*) ;
 int FUNC_14 (struct altera_tse_private*) ;
 int FUNC_15 (struct altera_tse_private*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_0)
{
 struct altera_tse_private *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;
 unsigned long int VAR_3;


 if (VAR_0->phydev)
  FUNC_6(VAR_0->phydev);

 FUNC_5(VAR_0);
 FUNC_2(&VAR_1->napi);


 FUNC_9(&VAR_1->rxdma_irq_lock, VAR_3);
 VAR_1->dmaops->disable_rxirq(VAR_1);
 VAR_1->dmaops->disable_txirq(VAR_1);
 FUNC_11(&VAR_1->rxdma_irq_lock, VAR_3);


 FUNC_0(VAR_1->rx_irq, VAR_0);
 FUNC_0(VAR_1->tx_irq, VAR_0);


 FUNC_8(&VAR_1->mac_cfg_lock);
 FUNC_8(&VAR_1->tx_lock);

 VAR_2 = FUNC_7(VAR_1);




 if (VAR_2)
  FUNC_3(VAR_0, "Cannot reset MAC core (error: %d)\n", VAR_2);
 VAR_1->dmaops->reset_dma(VAR_1);
 FUNC_1(VAR_0);

 FUNC_10(&VAR_1->tx_lock);
 FUNC_10(&VAR_1->mac_cfg_lock);

 VAR_1->dmaops->uninit_dma(VAR_1);

 return 0;
}
