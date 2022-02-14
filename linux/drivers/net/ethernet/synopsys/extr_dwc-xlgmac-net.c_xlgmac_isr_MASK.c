
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fatal_bus_error; int rx_buffer_unavailable; int tx_buffer_unavailable; int rx_process_stopped; int tx_process_stopped; int napi_poll_isr; } ;
struct xlgmac_hw_ops {int (* rx_mmc_int ) (struct xlgmac_pdata*) ;int (* tx_mmc_int ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {unsigned int channel_count; scalar_t__ mac_regs; int restart_work; TYPE_1__ stats; int napi; int per_channel_irq; int netdev; struct xlgmac_channel* channel_head; struct xlgmac_hw_ops hw_ops; } ;
struct xlgmac_channel {int dummy; } ;
typedef int irqreturn_t ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (struct xlgmac_channel*,int ) ;
 int FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_24 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct xlgmac_pdata*,int ,int ,char*,unsigned int,...) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xlgmac_pdata*) ;
 int FUNC_8 (struct xlgmac_pdata*) ;
 int FUNC_9 (unsigned int,scalar_t__) ;
 int FUNC_10 (struct xlgmac_pdata*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_25, void *VAR_26)
{
 unsigned int VAR_27, VAR_28, VAR_29;
 struct xlgmac_pdata *VAR_30 = VAR_26;
 struct xlgmac_channel *VAR_31;
 struct xlgmac_hw_ops *VAR_32;
 unsigned int VAR_33, VAR_34, VAR_35;

 VAR_32 = &VAR_30->hw_ops;





 VAR_27 = FUNC_5(VAR_30->mac_regs + VAR_15);
 if (!VAR_27)
  return VAR_18;

 FUNC_4(VAR_30, VAR_24, VAR_30->netdev, "DMA_ISR=%#010x\n", VAR_27);

 for (VAR_33 = 0; VAR_33 < VAR_30->channel_count; VAR_33++) {
  if (!(VAR_27 & (1 << VAR_33)))
   continue;

  VAR_31 = VAR_30->channel_head + VAR_33;

  VAR_28 = FUNC_5(FUNC_0(VAR_31, VAR_0));
  FUNC_4(VAR_30, VAR_24, VAR_30->netdev, "DMA_CH%u_ISR=%#010x\n",
     VAR_33, VAR_28);





  VAR_34 = FUNC_1(VAR_28, VAR_12,
      VAR_11);
  VAR_35 = FUNC_1(VAR_28, VAR_6,
      VAR_5);
  if (!VAR_30->per_channel_irq && (VAR_34 || VAR_35)) {
   if (FUNC_3(&VAR_30->napi)) {

    FUNC_10(VAR_30);

    VAR_30->stats.napi_poll_isr++;

    FUNC_2(&VAR_30->napi);
   }
  }

  if (FUNC_1(VAR_28, VAR_14,
     VAR_13))
   VAR_30->stats.tx_process_stopped++;

  if (FUNC_1(VAR_28, VAR_8,
     VAR_7))
   VAR_30->stats.rx_process_stopped++;

  if (FUNC_1(VAR_28, VAR_10,
     VAR_9))
   VAR_30->stats.tx_buffer_unavailable++;

  if (FUNC_1(VAR_28, VAR_4,
     VAR_3))
   VAR_30->stats.rx_buffer_unavailable++;


  if (FUNC_1(VAR_28, VAR_2,
     VAR_1)) {
   VAR_30->stats.fatal_bus_error++;
   FUNC_6(&VAR_30->restart_work);
  }


  FUNC_9(VAR_28, FUNC_0(VAR_31, VAR_0));
 }

 if (FUNC_1(VAR_27, VAR_17,
    VAR_16)) {
  VAR_29 = FUNC_5(VAR_30->mac_regs + VAR_19);

  if (FUNC_1(VAR_29, VAR_23,
     VAR_22))
   VAR_32->tx_mmc_int(VAR_30);

  if (FUNC_1(VAR_29, VAR_21,
     VAR_20))
   VAR_32->rx_mmc_int(VAR_30);
 }

 return VAR_18;
}
