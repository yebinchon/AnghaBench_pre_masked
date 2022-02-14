
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath9k_hw_mci {int bt_state; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hw*,int ,int ,int *,int,int,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_softc*,int ) ;
 int FUNC_4 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_6, u8 VAR_7, u8 *VAR_8)
{
 struct ath_hw *VAR_9 = VAR_6->sc_ah;
 struct ath_common *VAR_10 = FUNC_2(VAR_9);
 struct ath9k_hw_mci *VAR_11 = &VAR_9->btcoex_hw.mci;
 u32 VAR_12[4] = {0, 0, 0, 0};

 switch (VAR_7) {
 case 128:
  if (VAR_11->bt_state == VAR_1) {
   VAR_11->bt_state = VAR_2;
   FUNC_3(VAR_6, VAR_5);
  }
  FUNC_4(VAR_10, VAR_0, "MCI State : %d\n", VAR_11->bt_state);
  break;
 case 129:
  FUNC_0(VAR_12, VAR_4);
  FUNC_1(VAR_6->sc_ah, VAR_3, 0, VAR_12,
     16, 0, 1);
  break;
 default:
  FUNC_4(VAR_10, VAR_0, "Unknown GPM CAL message\n");
  break;
 }
}
