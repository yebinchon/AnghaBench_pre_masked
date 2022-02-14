
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* disable_ecc_sec ) (struct xgbe_prv_data*,int ) ;int (* disable_ecc_ded ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {TYPE_2__* vdata; TYPE_1__ hw_if; int desc_sec_count; int desc_sec_period; int rx_sec_count; int rx_sec_period; int tx_sec_count; int tx_sec_period; int stopdev_work; int desc_ded_count; int desc_ded_period; int rx_ded_count; int rx_ded_period; int tx_ded_count; int tx_ded_period; int netdev; } ;
struct TYPE_4__ {scalar_t__ irq_reissue_support; } ;


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
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 int VAR_11 ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*,int ) ;
 int FUNC_7 (struct xgbe_prv_data*,int ) ;
 int FUNC_8 (struct xgbe_prv_data*,int ) ;
 int FUNC_9 (struct xgbe_prv_data*,int *,int *,char*) ;
 scalar_t__ FUNC_10 (struct xgbe_prv_data*,int *,int *,char*) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_13)
{
 struct xgbe_prv_data *VAR_14 = (struct xgbe_prv_data *)VAR_13;
 unsigned int VAR_15;
 bool VAR_16 = 0;


 VAR_15 = FUNC_1(VAR_14, VAR_10);
 VAR_15 &= FUNC_1(VAR_14, VAR_9);
 FUNC_3(VAR_14, VAR_12, VAR_14->netdev, "ECC_ISR=%#010x\n", VAR_15);

 if (FUNC_0(VAR_15, VAR_10, VAR_4)) {
  VAR_16 |= FUNC_9(VAR_14, &VAR_14->tx_ded_period,
         &VAR_14->tx_ded_count, "TX fifo");
 }

 if (FUNC_0(VAR_15, VAR_10, VAR_2)) {
  VAR_16 |= FUNC_9(VAR_14, &VAR_14->rx_ded_period,
         &VAR_14->rx_ded_count, "RX fifo");
 }

 if (FUNC_0(VAR_15, VAR_10, VAR_0)) {
  VAR_16 |= FUNC_9(VAR_14, &VAR_14->desc_ded_period,
         &VAR_14->desc_ded_count,
         "descriptor cache");
 }

 if (VAR_16) {
  VAR_14->hw_if.disable_ecc_ded(VAR_14);
  FUNC_4(&VAR_14->stopdev_work);
  goto out;
 }

 if (FUNC_0(VAR_15, VAR_10, VAR_5)) {
  if (FUNC_10(VAR_14, &VAR_14->tx_sec_period,
     &VAR_14->tx_sec_count, "TX fifo"))
   VAR_14->hw_if.disable_ecc_sec(VAR_14, VAR_8);
 }

 if (FUNC_0(VAR_15, VAR_10, VAR_3))
  if (FUNC_10(VAR_14, &VAR_14->rx_sec_period,
     &VAR_14->rx_sec_count, "RX fifo"))
   VAR_14->hw_if.disable_ecc_sec(VAR_14, VAR_7);

 if (FUNC_0(VAR_15, VAR_10, VAR_1))
  if (FUNC_10(VAR_14, &VAR_14->desc_sec_period,
     &VAR_14->desc_sec_count, "descriptor cache"))
   VAR_14->hw_if.disable_ecc_sec(VAR_14, VAR_6);

out:

 FUNC_2(VAR_14, VAR_10, VAR_15);


 if (VAR_14->vdata->irq_reissue_support)
  FUNC_2(VAR_14, VAR_11, 1 << 1);
}
