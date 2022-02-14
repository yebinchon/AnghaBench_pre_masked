
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ath_softc {TYPE_1__* cur_chan; struct ath_hw* sc_ah; } ;
struct TYPE_6__ {scalar_t__ ani_poll_interval; } ;
struct ath_hw {TYPE_3__ config; } ;
struct TYPE_5__ {unsigned long longcal_timer; unsigned long shortcal_timer; unsigned long checkani_timer; int timer; } ;
struct ath_common {TYPE_2__ ani; int op_flags; scalar_t__ disable_ani; } ;
struct TYPE_4__ {scalar_t__ offchannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct ath_softc *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 unsigned long VAR_6 = FUNC_2(VAR_2);

 if (VAR_5->disable_ani ||
     !FUNC_5(VAR_1, &VAR_5->op_flags) ||
     VAR_3->cur_chan->offchannel)
  return;

 VAR_5->ani.longcal_timer = VAR_6;
 VAR_5->ani.shortcal_timer = VAR_6;
 VAR_5->ani.checkani_timer = VAR_6;

 FUNC_1(VAR_5, VAR_0, "Starting ANI\n");
 FUNC_3(&VAR_5->ani.timer,
    VAR_2 + FUNC_4((u32)VAR_4->config.ani_poll_interval));
}
