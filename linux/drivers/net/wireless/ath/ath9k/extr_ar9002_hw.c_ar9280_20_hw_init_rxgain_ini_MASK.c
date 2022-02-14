
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_hw {int iniModesRxGain; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom_rev ) (struct ath_hw*) ;scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_7)
{
 u32 VAR_8;

 if (VAR_7->eep_ops->get_eeprom_rev(VAR_7) >= VAR_0) {
  VAR_8 = VAR_7->eep_ops->get_eeprom(VAR_7, VAR_3);

  if (VAR_8 == VAR_1)
   FUNC_0(&VAR_7->iniModesRxGain,
           VAR_4);
  else if (VAR_8 == VAR_2)
   FUNC_0(&VAR_7->iniModesRxGain,
           VAR_5);
  else
   FUNC_0(&VAR_7->iniModesRxGain,
           VAR_6);
 } else {
  FUNC_0(&VAR_7->iniModesRxGain,
          VAR_6);
 }
}
