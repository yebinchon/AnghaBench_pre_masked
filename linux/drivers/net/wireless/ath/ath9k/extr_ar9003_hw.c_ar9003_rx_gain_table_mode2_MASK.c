
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int ini_modes_rxgain_xlna; int ini_modes_rxgain_bb_postamble; int ini_modes_rxgain_bb_core; int iniModesRxGain; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_8)
{
 if (FUNC_1(VAR_8)) {
  FUNC_2(&VAR_8->iniModesRxGain,
          VAR_7);
  FUNC_2(&VAR_8->ini_modes_rxgain_bb_core,
          VAR_4);
  FUNC_2(&VAR_8->ini_modes_rxgain_bb_postamble,
          VAR_6);
  FUNC_2(&VAR_8->ini_modes_rxgain_xlna,
          VAR_5);
 } else if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_8->iniModesRxGain,
          VAR_3);
  FUNC_2(&VAR_8->ini_modes_rxgain_bb_core,
          VAR_0);
  FUNC_2(&VAR_8->ini_modes_rxgain_bb_postamble,
          VAR_2);
  FUNC_2(&VAR_8->ini_modes_rxgain_xlna,
          VAR_1);
 }
}
