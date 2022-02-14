
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int * txq; } ;
struct ath_softc {int tx99_skb; TYPE_5__ tx; struct ath_hw* sc_ah; int hw_check_work; int hw_pll_work; int paprd_work; int hw_reset_work; int sleep_timer; int bcon_tasklet; int intr_tq; int mutex; int chan_lock; int sc_pm_lock; int sc_serial_rw; int intr_lock; int hw; TYPE_2__* cur_chan; TYPE_2__* chanctx; int tx_wait; scalar_t__ tx99_power; int dfs_detector; int dev; } ;
struct TYPE_9__ {int led_active_high; } ;
struct TYPE_8__ {int rmw; int write; int multi_read; int read; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct TYPE_6__ {int devid; } ;
struct ath_hw {int led_pin; TYPE_4__ config; TYPE_3__ reg_ops; struct ath9k_hw_capabilities caps; int ah_flags; TYPE_1__ hw_version; int hw; int dev; } ;
struct ath_common {int btcoex_enabled; int disable_ani; int bt_ant_diversity; int cachelsz; struct ath_bus_ops const* bus_ops; int cc_lock; int debug_mask; struct ath_softc* priv; int hw; struct ath_hw* ah; int * ps_ops; TYPE_3__* ops; int op_flags; } ;
struct ath_bus_ops {int (* aspm_init ) (struct ath_common*) ;} ;
struct TYPE_7__ {scalar_t__ hw_queue_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ath_softc*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ath_common*) ;
 int FUNC_4 (struct ath_hw*) ;
 int VAR_11 ;
 int FUNC_5 (struct ath_softc*) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (struct ath_softc*) ;
 int FUNC_14 (struct ath_softc*) ;
 int FUNC_15 (struct ath_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 () ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (struct ath_softc*) ;
 int FUNC_18 (struct ath_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_19 (struct ath_softc*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_20 (struct ath_common*,int*) ;
 int VAR_23 ;
 int FUNC_21 (struct ath_softc*,int *) ;
 int FUNC_22 (int ) ;
 struct ath_hw* FUNC_23 (int ,int,int ) ;
 int FUNC_24 (struct ath_common*,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct ath_common*) ;
 int FUNC_30 (int *,int ,unsigned long) ;
 int FUNC_31 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_32(u16 VAR_24, struct ath_softc *VAR_25,
       const struct ath_bus_ops *VAR_26)
{
 struct ath_hw *VAR_27 = ((void*)0);
 struct ath9k_hw_capabilities *VAR_28;
 struct ath_common *VAR_29;
 int VAR_30 = 0, VAR_31;
 int VAR_32 = 0;

 VAR_27 = FUNC_23(VAR_25->dev, sizeof(struct ath_hw), VAR_5);
 if (!VAR_27)
  return -VAR_4;

 VAR_27->dev = VAR_25->dev;
 VAR_27->hw = VAR_25->hw;
 VAR_27->hw_version.devid = VAR_24;
 VAR_27->ah_flags |= VAR_0;
 VAR_27->led_pin = -1;
 VAR_27->reg_ops.read = VAR_12;
 VAR_27->reg_ops.multi_read = VAR_15;
 VAR_27->reg_ops.write = VAR_13;
 VAR_27->reg_ops.rmw = VAR_17;
 VAR_28 = &VAR_27->caps;

 VAR_29 = FUNC_6(VAR_27);


 FUNC_27(VAR_3, &VAR_29->op_flags);

 VAR_25->sc_ah = VAR_27;
 VAR_25->dfs_detector = FUNC_24(VAR_29, VAR_7);
 VAR_25->tx99_power = VAR_6 + 1;
 FUNC_25(&VAR_25->tx_wait);
 VAR_25->cur_chan = &VAR_25->chanctx[0];
 if (!FUNC_16())
  VAR_25->cur_chan->hw_queue_base = 0;

 VAR_29->ops = &VAR_27->reg_ops;
 VAR_29->bus_ops = VAR_26;
 VAR_29->ps_ops = &VAR_16;
 VAR_29->ah = VAR_27;
 VAR_29->hw = VAR_25->hw;
 VAR_29->priv = VAR_25;
 VAR_29->debug_mask = VAR_11;
 VAR_29->btcoex_enabled = VAR_10 == 1;
 VAR_29->disable_ani = 0;




 FUNC_13(VAR_25);

 VAR_30 = FUNC_14(VAR_25);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_17(VAR_25);
 if (VAR_30)
  return VAR_30;

 if (VAR_14 != -1)
  VAR_27->config.led_active_high = VAR_14 == 1;
 if (!VAR_29->btcoex_enabled && VAR_9 &&
     (VAR_28->hw_caps & VAR_1))
  VAR_29->bt_ant_diversity = 1;

 FUNC_28(&VAR_29->cc_lock);
 FUNC_28(&VAR_25->intr_lock);
 FUNC_28(&VAR_25->sc_serial_rw);
 FUNC_28(&VAR_25->sc_pm_lock);
 FUNC_28(&VAR_25->chan_lock);
 FUNC_26(&VAR_25->mutex);
 FUNC_30(&VAR_25->intr_tq, VAR_18, (unsigned long)VAR_25);
 FUNC_30(&VAR_25->bcon_tasklet, VAR_8,
       (unsigned long)VAR_25);

 FUNC_31(&VAR_25->sleep_timer, VAR_22, 0);
 FUNC_2(&VAR_25->hw_reset_work, VAR_23);
 FUNC_2(&VAR_25->paprd_work, VAR_21);
 FUNC_1(&VAR_25->hw_pll_work, VAR_20);
 FUNC_1(&VAR_25->hw_check_work, VAR_19);

 FUNC_10(VAR_25);





 FUNC_20(VAR_29, &VAR_32);
 VAR_29->cachelsz = VAR_32 << 2;


 VAR_30 = FUNC_8(VAR_27);
 if (VAR_30)
  goto err_hw;

 VAR_30 = FUNC_15(VAR_25);
 if (VAR_30)
  goto err_queues;

 VAR_30 = FUNC_9(VAR_25);
 if (VAR_30)
  goto err_btcoex;

 VAR_30 = FUNC_3(VAR_29);
 if (VAR_30)
  goto err_btcoex;

 VAR_30 = FUNC_12(VAR_25);
 if (VAR_30)
  goto err_btcoex;

 FUNC_4(VAR_25->sc_ah);
 FUNC_11(VAR_25);
 FUNC_19(VAR_25);
 FUNC_18(VAR_25);

 if (VAR_29->bus_ops->aspm_init)
  VAR_29->bus_ops->aspm_init(VAR_29);

 return 0;

err_btcoex:
 for (VAR_31 = 0; VAR_31 < VAR_2; VAR_31++)
  if (FUNC_0(VAR_25, VAR_31))
   FUNC_21(VAR_25, &VAR_25->tx.txq[VAR_31]);
err_queues:
 FUNC_7(VAR_27);
err_hw:
 FUNC_5(VAR_25);
 FUNC_22(VAR_25->tx99_skb);
 return VAR_30;
}
