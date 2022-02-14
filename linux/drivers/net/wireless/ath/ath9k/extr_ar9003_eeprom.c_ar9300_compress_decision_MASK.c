
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9300_eeprom {int dummy; } ;
typedef struct ar9300_eeprom const u8 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct ar9300_eeprom* FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*,struct ar9300_eeprom const*,int,struct ar9300_eeprom const*,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,int,...) ;
 int FUNC_4 (struct ar9300_eeprom const*,struct ar9300_eeprom const*,int) ;

__attribute__((used)) static int FUNC_5(struct ath_hw *VAR_2,
        int VAR_3,
        int VAR_4,
        int VAR_5,
        u8 *VAR_6,
        u8 *VAR_7, int VAR_8, int VAR_9)
{
 struct ath_common *VAR_10 = FUNC_2(VAR_2);
 const struct ar9300_eeprom *VAR_11 = ((void*)0);

 switch (VAR_4) {
 case 128:
  if (VAR_8 != VAR_9) {
   FUNC_3(VAR_10, VAR_1,
    "EEPROM structure size mismatch memory=%d eeprom=%d\n",
    VAR_9, VAR_8);
   return -1;
  }
  FUNC_4(VAR_6, VAR_7 + VAR_0, VAR_8);
  FUNC_3(VAR_10, VAR_1,
   "restored eeprom %d: uncompressed, length %d\n",
   VAR_3, VAR_8);
  break;
 case 129:
  if (VAR_5 != 0) {
   VAR_11 = FUNC_0(VAR_5);
   if (VAR_11 == ((void*)0)) {
    FUNC_3(VAR_10, VAR_1,
     "can't find reference eeprom struct %d\n",
     VAR_5);
    return -1;
   }
   FUNC_4(VAR_6, VAR_11, VAR_9);
  }
  FUNC_3(VAR_10, VAR_1,
   "restore eeprom %d: block, reference %d, length %d\n",
   VAR_3, VAR_5, VAR_8);
  FUNC_1(VAR_2, VAR_6, VAR_9,
     (VAR_7 + VAR_0), VAR_8);
  break;
 default:
  FUNC_3(VAR_10, VAR_1, "unknown compression code %d\n", VAR_4);
  return -1;
 }
 return 0;
}
