
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int intr_tq; int bcon_tasklet; int sc_pcu_lock; int irq; TYPE_1__* cur_chan; struct ath_hw* sc_ah; int chan_lock; int cur_chandef; } ;
struct ath_hw {struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {int dummy; } ;
struct ath9k_channel {int channel; } ;
struct TYPE_2__ {scalar_t__ offchannel; int chandef; struct ath9k_hw_cal_data caldata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath9k_channel*) ;
 int VAR_2 ;
 int FUNC_1 (struct ath_softc*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*,struct ath9k_hw_cal_data*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct ath_softc*,int,int) ;
 int FUNC_8 (struct ath_softc*,int ) ;
 int FUNC_9 (struct ath_softc*,int) ;
 int FUNC_10 (struct ath_common*,int ,char*,int ,int ,int) ;
 int FUNC_11 (struct ath_common*,char*,int) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct ath_softc *VAR_3, struct ath9k_channel *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_3->sc_ah;
 struct ath_common *VAR_6 = FUNC_2(VAR_5);
 struct ath9k_hw_cal_data *VAR_7 = ((void*)0);
 bool VAR_8 = 1;
 int VAR_9;

 FUNC_1(VAR_3);

 FUNC_13(VAR_3->irq);
 FUNC_17(&VAR_3->intr_tq);
 FUNC_17(&VAR_3->bcon_tasklet);
 FUNC_15(&VAR_3->sc_pcu_lock);

 if (!VAR_3->cur_chan->offchannel) {
  VAR_8 = 0;
  VAR_7 = &VAR_3->cur_chan->caldata;
 }

 if (!VAR_4) {
  VAR_8 = 0;
  VAR_4 = VAR_5->curchan;
 }

 if (!FUNC_12(VAR_3))
  VAR_8 = 0;

 if (FUNC_6())
  VAR_8 = 0;

 FUNC_15(&VAR_3->chan_lock);
 VAR_3->cur_chandef = VAR_3->cur_chan->chandef;
 FUNC_16(&VAR_3->chan_lock);

 FUNC_10(VAR_6, VAR_0, "Reset to %u MHz, HT40: %d fastcc: %d\n",
  VAR_4->channel, FUNC_0(VAR_4), VAR_8);

 VAR_9 = FUNC_5(VAR_5, VAR_4, VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_11(VAR_6,
   "Unable to reset channel, reset status %d\n", VAR_9);

  FUNC_3(VAR_5);
  FUNC_8(VAR_3, VAR_2);

  goto out;
 }

 if (FUNC_4(VAR_3->sc_ah) &&
     VAR_3->cur_chan->offchannel)
  FUNC_7(VAR_3, 1, 0);

 if (!FUNC_9(VAR_3, 1))
  VAR_9 = -VAR_1;

out:
 FUNC_14(VAR_3->irq);
 FUNC_16(&VAR_3->sc_pcu_lock);
 FUNC_18(&VAR_3->bcon_tasklet);
 FUNC_18(&VAR_3->intr_tq);

 return VAR_9;
}
