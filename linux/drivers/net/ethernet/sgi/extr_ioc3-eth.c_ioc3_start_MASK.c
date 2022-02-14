
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_private {int rx_ci; int rx_pi; int tx_pi; int tx_ci; int emcr; scalar_t__ txqlen; int txr_dma; int rxr_dma; struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int eier; int emcr; int etcir; int etpir; int etbr_l; int etbr_h; int erpir; int ercir; int erbr_l; int erbr_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct ioc3_private *VAR_17)
{
 struct ioc3_ethregs *VAR_18 = VAR_17->regs;
 unsigned long VAR_19;


 VAR_19 = FUNC_0(VAR_17->rxr_dma, VAR_15);
 FUNC_2(VAR_19 >> 32, &VAR_18->erbr_h);
 FUNC_2(VAR_19 & 0xffffffff, &VAR_18->erbr_l);
 FUNC_2(VAR_17->rx_ci << 3, &VAR_18->ercir);
 FUNC_2((VAR_17->rx_pi << 3) | VAR_14, &VAR_18->erpir);

 VAR_19 = FUNC_0(VAR_17->txr_dma, VAR_15);

 VAR_17->txqlen = 0;


 FUNC_2(VAR_19 >> 32, &VAR_18->etbr_h);
 FUNC_2(VAR_19 & 0xffffffff, &VAR_18->etbr_l);
 FUNC_2(VAR_17->tx_pi << 7, &VAR_18->etpir);
 FUNC_2(VAR_17->tx_ci << 7, &VAR_18->etcir);
 FUNC_1(&VAR_18->etcir);

 VAR_17->emcr |= ((VAR_16 / 2) << VAR_11) | VAR_12 |
      VAR_13 | VAR_9 | VAR_10 | VAR_8;
 FUNC_2(VAR_17->emcr, &VAR_18->emcr);
 FUNC_2(VAR_4 | VAR_2 | VAR_0 |
        VAR_1 | VAR_3 | VAR_5 |
        VAR_6 | VAR_7, &VAR_18->eier);
 FUNC_1(&VAR_18->eier);
}
