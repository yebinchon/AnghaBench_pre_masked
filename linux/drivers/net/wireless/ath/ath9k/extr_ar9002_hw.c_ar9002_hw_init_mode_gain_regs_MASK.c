
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_hw {int iniModesTxGain; int iniModesRxGain; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ath_hw*,scalar_t__) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_10(struct ath_hw *VAR_8)
{
 u32 VAR_9 = VAR_8->eep_ops->get_eeprom(VAR_8, VAR_1);

 if (FUNC_4(VAR_8))
  FUNC_5(&VAR_8->iniModesRxGain,
          VAR_6);
 else if (FUNC_1(VAR_8))
  FUNC_7(VAR_8);

 if (FUNC_0(VAR_8)) {
  FUNC_6(VAR_8, VAR_9);
 } else if (FUNC_4(VAR_8)) {
  FUNC_5(&VAR_8->iniModesTxGain,
          VAR_7);
 } else if (FUNC_1(VAR_8)) {
  FUNC_8(VAR_8, VAR_9);
 } else if (FUNC_3(VAR_8)) {

  if (VAR_9 == VAR_0) {
   if (FUNC_2(VAR_8)) {
    FUNC_5(&VAR_8->iniModesTxGain,
            VAR_2);
   } else {
    FUNC_5(&VAR_8->iniModesTxGain,
     VAR_4);
   }
  } else {
   if (FUNC_2(VAR_8)) {
    FUNC_5(&VAR_8->iniModesTxGain,
            VAR_3);
   } else {
    FUNC_5(&VAR_8->iniModesTxGain,
     VAR_5);
   }
  }
 }
}
