
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int (* get_eeprom_ver ) (struct ath_hw*) ;int (* get_eeprom_rev ) (struct ath_hw*) ;} ;


 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,char*,int,int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;

bool FUNC_6(struct ath_hw *VAR_0, int VAR_1, int VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_0);

 if (VAR_0->eep_ops->get_eeprom_ver(VAR_0) != VAR_1 ||
     VAR_0->eep_ops->get_eeprom_rev(VAR_0) < VAR_2) {
  FUNC_1(VAR_3, "Bad EEPROM VER 0x%04x or REV 0x%04x\n",
   VAR_0->eep_ops->get_eeprom_ver(VAR_0),
   VAR_0->eep_ops->get_eeprom_rev(VAR_0));
  return 0;
 }

 return 1;
}
