
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ath_hw {int eeprom; } ;
struct ath_common {int dummy; } ;


 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,char*,int) ;

bool FUNC_2(struct ath_hw *VAR_0, int VAR_1)
{
 u32 VAR_2, VAR_3 = 0;
 u16 *VAR_4 = (u16 *)(&VAR_0->eeprom);
 struct ath_common *VAR_5 = FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 ^= VAR_4[VAR_2];

 if (VAR_3 != 0xffff) {
  FUNC_1(VAR_5, "Bad EEPROM checksum 0x%x\n", VAR_3);
  return 0;
 }

 return 1;
}
