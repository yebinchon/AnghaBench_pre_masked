
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int papdRateMaskHt40; int papdRateMaskHt20; } ;
struct TYPE_5__ {int papdRateMaskHt20; } ;
struct ar9300_eeprom {TYPE_3__ modalHeader5G; TYPE_2__ modalHeader2G; } ;
struct TYPE_4__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath9k_channel {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

unsigned int FUNC_3(struct ath_hw *VAR_2,
        struct ath9k_channel *VAR_3)
{
 struct ar9300_eeprom *VAR_4 = &VAR_2->eeprom.ar9300_eep;

 if (FUNC_0(VAR_3))
  return FUNC_1(FUNC_2(VAR_4->modalHeader2G.papdRateMaskHt20),
     VAR_0);
 else {
  if (VAR_3->channel >= 5700)
   return FUNC_1(FUNC_2(VAR_4->modalHeader5G.papdRateMaskHt20),
      VAR_0);
  else if (VAR_3->channel >= 5400)
   return FUNC_1(FUNC_2(VAR_4->modalHeader5G.papdRateMaskHt40),
      VAR_1);
  else
   return FUNC_1(FUNC_2(VAR_4->modalHeader5G.papdRateMaskHt40),
      VAR_0);
 }
}
