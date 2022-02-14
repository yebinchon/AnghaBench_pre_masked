
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_5__ {scalar_t__ beacon_interval; } ;
struct TYPE_6__ {TYPE_2__ beacon; } ;
struct TYPE_4__ {TYPE_3__ chan; } ;
struct ath_softc {int ps_flags; TYPE_3__* cur_chan; TYPE_1__ offchannel; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct ath_common* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_7(struct ath_softc *VAR_4, struct sk_buff *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_1(VAR_4->sc_ah);
 bool VAR_7 = 0;

 if (VAR_5->len < 24 + 8 + 2 + 2)
  return;

 VAR_4->ps_flags &= ~VAR_2;

 if (VAR_4->ps_flags & VAR_1) {
  VAR_4->ps_flags &= ~VAR_1;
  FUNC_6(VAR_6, VAR_0,
   "Reconfigure beacon timers based on synchronized timestamp\n");
  if (!VAR_7 &&
      !(FUNC_0(VAR_4->cur_chan->beacon.beacon_interval == 0)))
   FUNC_4(VAR_4);

  FUNC_3(VAR_4);
 }

 if (FUNC_5(VAR_5)) {







  FUNC_6(VAR_6, VAR_0,
   "Received DTIM beacon indicating buffered broadcast/multicast frame(s)\n");
  VAR_4->ps_flags |= VAR_3 | VAR_2;
  return;
 }

 if (VAR_4->ps_flags & VAR_3) {





  VAR_4->ps_flags &= ~VAR_3;
  FUNC_6(VAR_6, VAR_0, "PS wait for CAB frames timed out\n");
 }
}
