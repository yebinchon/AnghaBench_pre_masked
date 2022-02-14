
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_adapter {int irq_mod; int automatic; int single_pause_mode; int preamble; int rfd_burst; int tpd_burst; int dmaw_dly_cnt; int dmar_dly_cnt; int dmaw_block; int dmar_block; int dma_order; int rx_desc_cnt; int tx_desc_cnt; int rfd_size; int tpd_size; int rrd_size; } ;


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

__attribute__((used)) static void FUNC_0(struct emac_adapter *VAR_17)
{
 u32 VAR_18;

 VAR_17->rrd_size = VAR_8;
 VAR_17->tpd_size = VAR_9;
 VAR_17->rfd_size = VAR_7;


 VAR_17->tx_desc_cnt = VAR_4;
 VAR_17->rx_desc_cnt = VAR_2;


 VAR_17->dma_order = VAR_14;
 VAR_17->dmar_block = VAR_16;
 VAR_17->dmaw_block = VAR_15;
 VAR_17->dmar_dly_cnt = VAR_0;
 VAR_17->dmaw_dly_cnt = VAR_1;
 VAR_17->tpd_burst = VAR_13;
 VAR_17->rfd_burst = VAR_12;


 VAR_18 = ((VAR_3 >> 1) << VAR_10) |
       ((VAR_5 >> 1) << VAR_11);
 VAR_17->irq_mod = VAR_18;


 VAR_17->preamble = VAR_6;


 VAR_17->automatic = 1;


 VAR_17->single_pause_mode = 0;
}
