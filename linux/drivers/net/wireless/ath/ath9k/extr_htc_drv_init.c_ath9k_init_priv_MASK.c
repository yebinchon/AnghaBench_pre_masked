
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int rmw; int rmw_flush; int enable_rmw_buffer; int write_flush; int enable_write_buffer; int write; int multi_read; int read; } ;
struct TYPE_5__ {int usbdev; int devid; } ;
struct ath_hw {TYPE_2__ reg_ops; int ah_flags; TYPE_1__ hw_version; int hw; int dev; } ;
struct ath_common {int btcoex_enabled; int cachelsz; int op_flags; int debug_mask; struct ath9k_htc_priv* priv; int hw; struct ath_hw* ah; int * bus_ops; int * ps_ops; TYPE_2__* ops; } ;
struct TYPE_8__ {int slottime; int ** bslot; } ;
struct TYPE_7__ {int cleanup_timer; int tx_lock; } ;
struct ath9k_htc_priv {struct ath_hw* ah; TYPE_4__ beacon; TYPE_3__ tx; int fatal_work; int ps_work; int ani_work; int tx_failed_tasklet; int rx_tasklet; int htc_pm_lock; int mutex; int beacon_lock; int hw; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ath_common*) ;
 int FUNC_3 (struct ath_hw*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ath9k_htc_priv*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 int FUNC_9 (struct ath9k_htc_priv*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (struct ath_common*,char*,int) ;
 int FUNC_11 (struct ath_common*,int*) ;
 int FUNC_12 (struct ath_hw*) ;
 struct ath_hw* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,unsigned long) ;
 int FUNC_18 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct ath9k_htc_priv *VAR_23,
      u16 VAR_24, char *VAR_25,
      u32 VAR_26)
{
 struct ath_hw *VAR_27 = ((void*)0);
 struct ath_common *VAR_28;
 int VAR_29, VAR_30 = 0, VAR_31 = 0;

 VAR_27 = FUNC_13(sizeof(struct ath_hw), VAR_4);
 if (!VAR_27)
  return -VAR_3;

 VAR_27->dev = VAR_23->dev;
 VAR_27->hw = VAR_23->hw;
 VAR_27->hw_version.devid = VAR_24;
 VAR_27->hw_version.usbdev = VAR_26;
 VAR_27->ah_flags |= VAR_0;
 VAR_27->reg_ops.read = VAR_17;
 VAR_27->reg_ops.multi_read = VAR_13;
 VAR_27->reg_ops.write = VAR_18;
 VAR_27->reg_ops.enable_write_buffer = VAR_6;
 VAR_27->reg_ops.write_flush = VAR_19;
 VAR_27->reg_ops.enable_rmw_buffer = VAR_7;
 VAR_27->reg_ops.rmw_flush = VAR_16;
 VAR_27->reg_ops.rmw = VAR_15;
 VAR_23->ah = VAR_27;

 VAR_28 = FUNC_5(VAR_27);
 VAR_28->ops = &VAR_27->reg_ops;
 VAR_28->ps_ops = &VAR_11;
 VAR_28->bus_ops = &VAR_22;
 VAR_28->ah = VAR_27;
 VAR_28->hw = VAR_23->hw;
 VAR_28->priv = VAR_23;
 VAR_28->debug_mask = VAR_5;
 VAR_28->btcoex_enabled = VAR_10 == 1;
 FUNC_15(VAR_2, &VAR_28->op_flags);

 FUNC_16(&VAR_23->beacon_lock);
 FUNC_16(&VAR_23->tx.tx_lock);
 FUNC_14(&VAR_23->mutex);
 FUNC_14(&VAR_23->htc_pm_lock);
 FUNC_17(&VAR_23->rx_tasklet, VAR_20,
       (unsigned long)VAR_23);
 FUNC_17(&VAR_23->tx_failed_tasklet, VAR_21,
       (unsigned long)VAR_23);
 FUNC_0(&VAR_23->ani_work, VAR_9);
 FUNC_1(&VAR_23->ps_work, VAR_14);
 FUNC_1(&VAR_23->fatal_work, VAR_8);
 FUNC_18(&VAR_23->tx.cleanup_timer, VAR_12, 0);





 FUNC_11(VAR_28, &VAR_31);
 VAR_28->cachelsz = VAR_31 << 2;

 VAR_30 = FUNC_7(VAR_27);
 if (VAR_30) {
  FUNC_10(VAR_28,
   "Unable to initialize hardware; initialization status: %d\n",
   VAR_30);
  goto err_hw;
 }

 VAR_30 = FUNC_9(VAR_23);
 if (VAR_30)
  goto err_queues;

 for (VAR_29 = 0; VAR_29 < VAR_1; VAR_29++)
  VAR_23->beacon.bslot[VAR_29] = ((void*)0);
 VAR_23->beacon.slottime = 9;

 FUNC_2(VAR_28);
 FUNC_3(VAR_27);
 FUNC_8(VAR_23);
 FUNC_4(VAR_23, VAR_25);

 return 0;

err_queues:
 FUNC_6(VAR_27);
err_hw:

 FUNC_12(VAR_27);
 VAR_23->ah = ((void*)0);

 return VAR_30;
}
