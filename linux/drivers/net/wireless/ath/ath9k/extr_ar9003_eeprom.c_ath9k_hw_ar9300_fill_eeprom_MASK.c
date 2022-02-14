
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ar9300_eeprom {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_0)
{
 u8 *VAR_1 = (u8 *) &VAR_0->eeprom.ar9300_eep;

 if (FUNC_0(VAR_0, VAR_1,
   sizeof(struct ar9300_eeprom)) < 0)
  return 0;

 return 1;
}
