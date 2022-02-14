
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_hw {int iniModesTxGain; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom_rev ) (struct ath_hw*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_4, u32 VAR_5)
{
 if (VAR_4->eep_ops->get_eeprom_rev(VAR_4) >= VAR_0) {
  if (VAR_5 == VAR_1)
   FUNC_0(&VAR_4->iniModesTxGain,
           VAR_2);
  else
   FUNC_0(&VAR_4->iniModesTxGain,
           VAR_3);
 } else {
  FUNC_0(&VAR_4->iniModesTxGain,
          VAR_3);
 }
}
