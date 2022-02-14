
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int ps_enabled; int ps_flags; struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {int imask; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct ath_softc *VAR_9)
{
 struct ath_hw *VAR_10 = VAR_9->sc_ah;
 struct ath_common *VAR_11 = FUNC_1(VAR_10);

 if (FUNC_0(VAR_3))
  return;

 VAR_9->ps_enabled = 0;
 FUNC_3(VAR_10, VAR_2);
 if (!(VAR_10->caps.hw_caps & VAR_0)) {
  FUNC_4(VAR_10, 0);
  VAR_9->ps_flags &= ~(VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_8);
  if (VAR_10->imask & VAR_1) {
   VAR_10->imask &= ~VAR_1;
   FUNC_2(VAR_10);
  }
 }
 FUNC_5(VAR_11, VAR_4, "PowerSave disabled\n");
}
