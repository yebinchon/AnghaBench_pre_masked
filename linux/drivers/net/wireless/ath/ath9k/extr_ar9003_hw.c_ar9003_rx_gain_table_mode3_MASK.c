
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int ini_modes_rxgain_xlna; int iniModesRxGain; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_4)
{
 if (FUNC_1(VAR_4)) {
  FUNC_2(&VAR_4->iniModesRxGain,
          VAR_3);
  FUNC_2(&VAR_4->ini_modes_rxgain_xlna,
          VAR_2);
 } else if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_4->iniModesRxGain,
          VAR_1);
  FUNC_2(&VAR_4->ini_modes_rxgain_xlna,
          VAR_0);
 }
}
