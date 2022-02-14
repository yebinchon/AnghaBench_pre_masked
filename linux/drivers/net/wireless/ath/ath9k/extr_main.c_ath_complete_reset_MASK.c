
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_softc {int ps_flags; int hw; scalar_t__ gtt_cnt; int sc_pm_lock; TYPE_1__* cur_chan; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ opmode; } ;
struct ath_common {int op_flags; } ;
struct TYPE_2__ {scalar_t__ tsf_val; int tsf_ts; int offchannel; int cur_txpower; int txpower; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_softc*,TYPE_1__*) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int *) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,scalar_t__) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static bool FUNC_17(struct ath_softc *VAR_6, bool VAR_7)
{
 struct ath_hw *VAR_8 = VAR_6->sc_ah;
 struct ath_common *VAR_9 = FUNC_2(VAR_8);
 unsigned long VAR_10;

 FUNC_0(VAR_6, VAR_6->cur_chan);
 FUNC_10(VAR_6);
 FUNC_1(VAR_8, VAR_6->cur_chan->cur_txpower,
          VAR_6->cur_chan->txpower,
          &VAR_6->cur_chan->cur_txpower);
 FUNC_12(VAR_1, &VAR_9->op_flags);

 if (!VAR_6->cur_chan->offchannel && VAR_7) {

  if (VAR_6->cur_chan->tsf_val) {
   u32 VAR_11;

   VAR_11 = FUNC_4(&VAR_6->cur_chan->tsf_ts,
        ((void*)0));
   FUNC_6(VAR_8, VAR_6->cur_chan->tsf_val + VAR_11);
  }


  if (!FUNC_16(VAR_0, &VAR_9->op_flags))
   goto work;

  if (VAR_8->opmode == VAR_3 &&
      FUNC_16(VAR_2, &VAR_9->op_flags)) {
   FUNC_14(&VAR_6->sc_pm_lock, VAR_10);
   VAR_6->ps_flags |= VAR_4 | VAR_5;
   FUNC_15(&VAR_6->sc_pm_lock, VAR_10);
  } else {
   FUNC_8(VAR_6);
  }
 work:
  FUNC_9(VAR_6);
  FUNC_11(VAR_6);
 }

 VAR_6->gtt_cnt = 0;

 FUNC_5(VAR_8);
 FUNC_3(VAR_8);
 FUNC_13(VAR_6->hw);
 FUNC_7(VAR_6);

 return 1;
}
