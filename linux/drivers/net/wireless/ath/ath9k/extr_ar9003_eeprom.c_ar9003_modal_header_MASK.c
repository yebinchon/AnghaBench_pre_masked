
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9300_modal_eep_header {int dummy; } ;
struct ar9300_eeprom {struct ar9300_modal_eep_header modalHeader5G; struct ar9300_modal_eep_header modalHeader2G; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;



__attribute__((used)) static struct ar9300_modal_eep_header *FUNC_0(struct ath_hw *VAR_0,
          bool VAR_1)
{
 struct ar9300_eeprom *VAR_2 = &VAR_0->eeprom.ar9300_eep;

 if (VAR_1)
  return &VAR_2->modalHeader2G;
 else
  return &VAR_2->modalHeader5G;
}
