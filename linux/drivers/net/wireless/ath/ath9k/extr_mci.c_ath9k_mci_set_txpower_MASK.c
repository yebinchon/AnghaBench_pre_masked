
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ath_softc {TYPE_2__* cur_chan; struct ath_hw* sc_ah; } ;
struct ath9k_hw_mci {int concur_tx; int config; } ;
struct TYPE_6__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_3__* curchan; TYPE_1__ btcoex_hw; } ;
struct ath9k_hw_cal_data {int channel; } ;
struct TYPE_8__ {int channel; } ;
struct TYPE_7__ {int txpower; struct ath9k_hw_cal_data caldata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;

void FUNC_4(struct ath_softc *VAR_1, bool VAR_2,
      bool VAR_3)
{
 struct ath_hw *VAR_4 = VAR_1->sc_ah;
 struct ath9k_hw_mci *VAR_5 = &VAR_1->sc_ah->btcoex_hw.mci;
 bool VAR_6 = VAR_5->concur_tx;

 if (!(VAR_5->config & VAR_0)) {
  VAR_5->concur_tx = 0;
  return;
 }

 if (!FUNC_0(VAR_4->curchan))
  return;

 if (VAR_2) {
  struct ath9k_hw_cal_data *VAR_7 = &VAR_1->cur_chan->caldata;
  if (FUNC_2(VAR_4->curchan) &&
      (VAR_4->curchan->channel > VAR_7->channel) &&
      (VAR_4->curchan->channel <= VAR_7->channel + 20))
   return;
  if (FUNC_1(VAR_4->curchan) &&
      (VAR_4->curchan->channel < VAR_7->channel) &&
      (VAR_4->curchan->channel >= VAR_7->channel - 20))
   return;
  VAR_5->concur_tx = 0;
 } else
  VAR_5->concur_tx = VAR_3;

 if (VAR_6 != VAR_5->concur_tx)
  FUNC_3(VAR_4, VAR_1->cur_chan->txpower, 0);
}
