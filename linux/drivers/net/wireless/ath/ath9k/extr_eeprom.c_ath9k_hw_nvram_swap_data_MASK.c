
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ath_hw {int ah_flags; TYPE_1__* eep_ops; int eeprom; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int (* get_eepmisc ) (struct ath_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;
 int FUNC_4 (struct ath_common*,char*,...) ;
 int FUNC_5 (struct ath_common*,char*) ;
 int FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

int FUNC_8(struct ath_hw *VAR_7, bool *VAR_8, int VAR_9)
{
 u16 VAR_10;
 u16 *VAR_11;
 int VAR_12;
 bool VAR_13 = 0;
 struct ath_common *VAR_14 = FUNC_0(VAR_7);

 if (!FUNC_1(VAR_7, VAR_3, &VAR_10)) {
  FUNC_4(VAR_14, "Reading Magic # failed\n");
  return -VAR_6;
 }

 if (FUNC_7(VAR_10) == VAR_2) {
  VAR_13 = 1;
  FUNC_3(VAR_14, VAR_4,
   "EEPROM needs byte-swapping to correct endianness.\n");
 } else if (VAR_10 != VAR_2) {
  if (FUNC_2(VAR_7)) {
   FUNC_3(VAR_14, VAR_4,
    "Ignoring invalid EEPROM magic (0x%04x).\n",
    VAR_10);
  } else {
   FUNC_4(VAR_14,
    "Invalid EEPROM magic (0x%04x).\n", VAR_10);
   return -VAR_5;
  }
 }

 if (VAR_13) {
  if (VAR_7->ah_flags & VAR_0) {
   FUNC_5(VAR_14,
     "Ignoring endianness difference in EEPROM magic bytes.\n");
  } else {
   VAR_11 = (u16 *)(&VAR_7->eeprom);

   for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
    VAR_11[VAR_12] = FUNC_7(VAR_11[VAR_12]);
  }
 }

 if (VAR_7->eep_ops->get_eepmisc(VAR_7) & VAR_1) {
  *VAR_8 = 1;
  FUNC_3(VAR_14, VAR_4,
   "Big Endian EEPROM detected according to EEPMISC register.\n");
 } else {
  *VAR_8 = 0;
 }

 return 0;
}
