
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int ps_enabled; struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {int imask; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_4->sc_ah;
 struct ath_common *VAR_6 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_2))
  return;

 VAR_4->ps_enabled = 1;
 if (!(VAR_5->caps.hw_caps & VAR_0)) {
  if ((VAR_5->imask & VAR_1) == 0) {
   VAR_5->imask |= VAR_1;
   FUNC_2(VAR_5);
  }
  FUNC_3(VAR_5, 1);
 }
 FUNC_4(VAR_6, VAR_3, "PowerSave enabled\n");
}
