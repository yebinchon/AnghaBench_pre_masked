
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* i2c_isr ) (struct xgbe_prv_data*) ;} ;
struct TYPE_6__ {int (* an_isr ) (struct xgbe_prv_data*) ;} ;
struct TYPE_5__ {int rx_buffer_unavailable; } ;
struct xgbe_hw_if {int (* get_tx_tstamp ) (struct xgbe_prv_data*) ;int (* rx_mmc_int ) (struct xgbe_prv_data*) ;int (* tx_mmc_int ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {unsigned int channel_count; scalar_t__ dev_irq; scalar_t__ an_irq; scalar_t__ ecc_irq; scalar_t__ i2c_irq; int per_channel_irq; TYPE_4__* vdata; TYPE_3__ i2c_if; TYPE_2__ phy_if; int mdio_complete; int netdev; int tx_tstamp_work; int dev_workqueue; int tx_tstamp; int restart_work; TYPE_1__ ext_stats; int napi; struct xgbe_channel** channel; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {int dummy; } ;
struct TYPE_8__ {scalar_t__ irq_reissue_support; scalar_t__ i2c_support; scalar_t__ ecc_support; } ;


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
 unsigned int FUNC_0 (struct xgbe_channel*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,int ,int ) ;
 unsigned int FUNC_3 (struct xgbe_prv_data*,int ) ;
 int FUNC_4 (unsigned int,int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_5 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_17 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct xgbe_prv_data*,int ,int ,char*,unsigned int,...) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct xgbe_prv_data*) ;
 int FUNC_13 (struct xgbe_prv_data*) ;
 int FUNC_14 (struct xgbe_prv_data*) ;
 int FUNC_15 (struct xgbe_prv_data*) ;
 int FUNC_16 (struct xgbe_prv_data*) ;
 int FUNC_17 (struct xgbe_prv_data*) ;
 int FUNC_18 (unsigned long) ;

__attribute__((used)) static void FUNC_19(unsigned long VAR_18)
{
 struct xgbe_prv_data *VAR_19 = (struct xgbe_prv_data *)VAR_18;
 struct xgbe_hw_if *VAR_20 = &VAR_19->hw_if;
 struct xgbe_channel *VAR_21;
 unsigned int VAR_22, VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;





 VAR_22 = FUNC_3(VAR_19, VAR_1);
 if (!VAR_22)
  goto isr_done;

 FUNC_9(VAR_19, VAR_17, VAR_19->netdev, "DMA_ISR=%#010x\n", VAR_22);

 for (VAR_27 = 0; VAR_27 < VAR_19->channel_count; VAR_27++) {
  if (!(VAR_22 & (1 << VAR_27)))
   continue;

  VAR_21 = VAR_19->channel[VAR_27];

  VAR_23 = FUNC_0(VAR_21, VAR_0);
  FUNC_9(VAR_19, VAR_17, VAR_19->netdev, "DMA_CH%u_ISR=%#010x\n",
     VAR_27, VAR_23);





  if (!VAR_19->per_channel_irq &&
      (FUNC_2(VAR_23, VAR_0, VAR_13) ||
       FUNC_2(VAR_23, VAR_0, VAR_10))) {
   if (FUNC_8(&VAR_19->napi)) {

    FUNC_17(VAR_19);


    FUNC_6(&VAR_19->napi);
   }
  } else {




   FUNC_4(VAR_23, VAR_0, VAR_13, 0);
   FUNC_4(VAR_23, VAR_0, VAR_10, 0);
  }

  if (FUNC_2(VAR_23, VAR_0, VAR_9))
   VAR_19->ext_stats.rx_buffer_unavailable++;


  if (FUNC_2(VAR_23, VAR_0, VAR_2))
   FUNC_11(&VAR_19->restart_work);


  FUNC_1(VAR_21, VAR_0, VAR_23);
 }

 if (FUNC_2(VAR_22, VAR_1, VAR_3)) {
  VAR_24 = FUNC_3(VAR_19, VAR_4);

  FUNC_9(VAR_19, VAR_17, VAR_19->netdev, "MAC_ISR=%#010x\n",
     VAR_24);

  if (FUNC_2(VAR_24, VAR_4, VAR_8))
   VAR_20->tx_mmc_int(VAR_19);

  if (FUNC_2(VAR_24, VAR_4, VAR_7))
   VAR_20->rx_mmc_int(VAR_19);

  if (FUNC_2(VAR_24, VAR_4, VAR_14)) {
   VAR_25 = FUNC_3(VAR_19, VAR_6);

   FUNC_9(VAR_19, VAR_17, VAR_19->netdev,
      "MAC_TSSR=%#010x\n", VAR_25);

   if (FUNC_2(VAR_25, VAR_6, VAR_15)) {

    VAR_19->tx_tstamp =
     VAR_20->get_tx_tstamp(VAR_19);
    FUNC_10(VAR_19->dev_workqueue,
        &VAR_19->tx_tstamp_work);
   }
  }

  if (FUNC_2(VAR_24, VAR_4, VAR_11)) {
   VAR_26 = FUNC_3(VAR_19, VAR_5);

   FUNC_9(VAR_19, VAR_17, VAR_19->netdev,
      "MAC_MDIOISR=%#010x\n", VAR_26);

   if (FUNC_2(VAR_26, VAR_5,
        VAR_12))
    FUNC_7(&VAR_19->mdio_complete);
  }
 }

isr_done:

 if (VAR_19->dev_irq == VAR_19->an_irq)
  VAR_19->phy_if.an_isr(VAR_19);


 if (VAR_19->vdata->ecc_support && (VAR_19->dev_irq == VAR_19->ecc_irq))
  FUNC_18((unsigned long)VAR_19);


 if (VAR_19->vdata->i2c_support && (VAR_19->dev_irq == VAR_19->i2c_irq))
  VAR_19->i2c_if.i2c_isr(VAR_19);


 if (VAR_19->vdata->irq_reissue_support) {
  unsigned int VAR_28;

  VAR_28 = 1 << 0;
  if (!VAR_19->per_channel_irq)
   VAR_28 |= 0xffff << 4;

  FUNC_5(VAR_19, VAR_16, VAR_28);
 }
}
