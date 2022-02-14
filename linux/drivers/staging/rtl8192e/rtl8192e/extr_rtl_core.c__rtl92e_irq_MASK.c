
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int txvookint; int txviokint; int txbeokint; int txbkokint; int txoverflow; int rxoverflow; int rxrdu; int rxint; int txcmdpktokint; int txmanageokint; int txbeaconerr; int txbeaconokint; int ints; int shints; } ;
struct TYPE_7__ {int nIMR_ROK; } ;
struct r8192_priv {scalar_t__ irq_enabled; int irq_th_lock; TYPE_5__* rtllib; TYPE_3__ stats; int irq_rx_tasklet; int irq_prepare_beacon_tasklet; TYPE_2__ InterruptLog; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_9__ {int NumTxOkInPeriod; } ;
struct TYPE_10__ {TYPE_4__ LinkDetectInfo; scalar_t__ ack_tx_to_ieee; } ;
struct TYPE_6__ {int (* interrupt_recognized ) (struct net_device*,int*,int*) ;} ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct net_device*,int*,int*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_25, void *VAR_26)
{
 struct net_device *VAR_27 = VAR_26;
 struct r8192_priv *VAR_28 = FUNC_6(VAR_27);
 unsigned long VAR_29;
 u32 VAR_30;
 u32 VAR_31;

 VAR_31 = 0;

 if (VAR_28->irq_enabled == 0)
  goto done;

 FUNC_8(&VAR_28->irq_th_lock, VAR_29);

 VAR_28->ops->interrupt_recognized(VAR_27, &VAR_30, &VAR_31);
 VAR_28->stats.shints++;

 if (!VAR_30) {
  FUNC_9(&VAR_28->irq_th_lock, VAR_29);
  goto done;
 }

 if (VAR_30 == 0xffff) {
  FUNC_9(&VAR_28->irq_th_lock, VAR_29);
  goto done;
 }

 VAR_28->stats.ints++;

 if (!FUNC_3(VAR_27)) {
  FUNC_9(&VAR_28->irq_th_lock, VAR_29);
  goto done;
 }

 if (VAR_30 & VAR_15) {
  FUNC_0(VAR_2, "beacon ok interrupt!\n");
  VAR_28->stats.txbeaconokint++;
 }

 if (VAR_30 & VAR_14) {
  FUNC_0(VAR_2, "beacon ok interrupt!\n");
  VAR_28->stats.txbeaconerr++;
 }

 if (VAR_30 & VAR_4)
  FUNC_0(VAR_2, "beacon interrupt!\n");

 if (VAR_30 & VAR_10) {
  FUNC_0(VAR_2, "Manage ok interrupt!\n");
  VAR_28->stats.txmanageokint++;
  FUNC_2(VAR_27, VAR_21);
  FUNC_9(&VAR_28->irq_th_lock, VAR_29);
  if (VAR_28->rtllib->ack_tx_to_ieee) {
   if (FUNC_1(VAR_27)) {
    VAR_28->rtllib->ack_tx_to_ieee = 0;
    FUNC_7(VAR_28->rtllib, 1);
   }
  }
  FUNC_8(&VAR_28->irq_th_lock, VAR_29);
 }

 if (VAR_30 & VAR_8) {
  VAR_28->stats.txcmdpktokint++;
  FUNC_2(VAR_27, VAR_22);
 }

 if (VAR_30 & VAR_9)
  FUNC_2(VAR_27, VAR_3);

 if (VAR_30 & VAR_12) {
  VAR_28->stats.rxint++;
  VAR_28->InterruptLog.nIMR_ROK++;
  FUNC_11(&VAR_28->irq_rx_tasklet);
 }

 if (VAR_30 & VAR_7) {
  FUNC_0(VAR_2, "prepare beacon for interrupt!\n");
  FUNC_11(&VAR_28->irq_prepare_beacon_tasklet);
 }

 if (VAR_30 & VAR_11) {
  FUNC_0(VAR_2, "rx descriptor unavailable!\n");
  VAR_28->stats.rxrdu++;
  FUNC_5(VAR_27, VAR_19,
         FUNC_4(VAR_27, VAR_19) & ~VAR_11);
  FUNC_11(&VAR_28->irq_rx_tasklet);
 }

 if (VAR_30 & VAR_13) {
  FUNC_0(VAR_2, "rx overflow !\n");
  VAR_28->stats.rxoverflow++;
  FUNC_11(&VAR_28->irq_rx_tasklet);
 }

 if (VAR_30 & VAR_16)
  VAR_28->stats.txoverflow++;

 if (VAR_30 & VAR_6) {
  FUNC_0(VAR_2, "BK Tx OK interrupt!\n");
  VAR_28->stats.txbkokint++;
  VAR_28->rtllib->LinkDetectInfo.NumTxOkInPeriod++;
  FUNC_2(VAR_27, VAR_1);
 }

 if (VAR_30 & VAR_5) {
  FUNC_0(VAR_2, "BE TX OK interrupt!\n");
  VAR_28->stats.txbeokint++;
  VAR_28->rtllib->LinkDetectInfo.NumTxOkInPeriod++;
  FUNC_2(VAR_27, VAR_0);
 }

 if (VAR_30 & VAR_17) {
  FUNC_0(VAR_2, "VI TX OK interrupt!\n");
  VAR_28->stats.txviokint++;
  VAR_28->rtllib->LinkDetectInfo.NumTxOkInPeriod++;
  FUNC_2(VAR_27, VAR_23);
 }

 if (VAR_30 & VAR_18) {
  VAR_28->stats.txvookint++;
  FUNC_0(VAR_2, "Vo TX OK interrupt!\n");
  VAR_28->rtllib->LinkDetectInfo.NumTxOkInPeriod++;
  FUNC_2(VAR_27, VAR_24);
 }

 FUNC_9(&VAR_28->irq_th_lock, VAR_29);

done:

 return VAR_20;
}
