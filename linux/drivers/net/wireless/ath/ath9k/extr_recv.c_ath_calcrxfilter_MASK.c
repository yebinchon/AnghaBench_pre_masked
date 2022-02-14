
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {scalar_t__ width; } ;
struct ath_softc {int chan_lock; TYPE_7__* sc_ah; TYPE_5__* cur_chan; TYPE_4__ cur_chandef; TYPE_2__* hw; } ;
struct ath_common {int op_flags; } ;
struct TYPE_18__ {scalar_t__ macVersion; } ;
struct TYPE_15__ {scalar_t__ enabled; } ;
struct TYPE_19__ {scalar_t__ opmode; TYPE_6__ hw_version; TYPE_3__ dynack; scalar_t__ is_monitoring; } ;
struct TYPE_17__ {int rxfilter; int nvifs; } ;
struct TYPE_13__ {scalar_t__ radar_enabled; } ;
struct TYPE_14__ {TYPE_1__ conf; } ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
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
 int VAR_22 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 struct ath_common* FUNC_6 (TYPE_7__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

u32 FUNC_11(struct ath_softc *VAR_27)
{
 struct ath_common *VAR_28 = FUNC_6(VAR_27->sc_ah);
 u32 VAR_29;

 if (FUNC_5(VAR_17))
  return 0;

 VAR_29 = VAR_15 | VAR_2
  | VAR_7;


 if (VAR_27->hw->conf.radar_enabled)
  VAR_29 |= VAR_11 | VAR_10;

 FUNC_8(&VAR_27->chan_lock);

 if (VAR_27->cur_chan->rxfilter & VAR_21)
  VAR_29 |= VAR_12;

 if (VAR_27->sc_ah->is_monitoring)
  VAR_29 |= VAR_13;

 if ((VAR_27->cur_chan->rxfilter & VAR_19) ||
     VAR_27->sc_ah->dynack.enabled)
  VAR_29 |= VAR_5;

 if ((VAR_27->sc_ah->opmode == VAR_26) &&
     (VAR_27->cur_chan->nvifs <= 1) &&
     !(VAR_27->cur_chan->rxfilter & VAR_18))
  VAR_29 |= VAR_9;
 else if (VAR_27->sc_ah->opmode != VAR_25)
  VAR_29 |= VAR_3;

 if ((VAR_27->sc_ah->opmode == VAR_24) ||
     (VAR_27->cur_chan->rxfilter & VAR_22))
  VAR_29 |= VAR_14;

 if (VAR_27->cur_chandef.width != VAR_23)
  VAR_29 |= VAR_4;

 if (VAR_27->cur_chan->nvifs > 1 || (VAR_27->cur_chan->rxfilter & VAR_20)) {

  if (VAR_27->sc_ah->hw_version.macVersion <= VAR_0)
   VAR_29 |= VAR_13;
  VAR_29 |= VAR_8;
 }

 if (FUNC_2(VAR_27->sc_ah) || FUNC_1(VAR_27->sc_ah) ||
     FUNC_3(VAR_27->sc_ah))
  VAR_29 |= VAR_1;

 if (FUNC_0(VAR_27->sc_ah) || FUNC_4(VAR_27->sc_ah))
  VAR_29 |= VAR_6;

 if (FUNC_7() &&
     FUNC_10(VAR_16, &VAR_28->op_flags))
  VAR_29 |= VAR_3;

 FUNC_9(&VAR_27->chan_lock);

 return VAR_29;

}
