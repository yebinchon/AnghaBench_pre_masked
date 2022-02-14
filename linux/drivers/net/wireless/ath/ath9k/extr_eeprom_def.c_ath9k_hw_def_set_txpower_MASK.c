
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct modal_eep_header {scalar_t__ ht40PowerIncForPdadc; scalar_t__ pwrDecreaseFor3Chain; scalar_t__ pwrDecreaseFor2Chain; } ;
struct ath_regulatory {scalar_t__ max_power_level; } ;
struct ar5416_eeprom_def {struct modal_eep_header* modalHeader; } ;
struct TYPE_3__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {scalar_t__ tpc_enabled; TYPE_2__* eep_ops; TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;
typedef int ratesArray ;
typedef int int8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_4__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (struct ath_hw*,scalar_t__*,struct ath9k_channel*,int) ;
 scalar_t__ FUNC_10 (struct ath_hw*) ;
 struct ath_regulatory* FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_13 (struct ath_hw*,struct ath9k_channel*,scalar_t__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (scalar_t__*,int ,int) ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 int FUNC_16 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_17(struct ath_hw *VAR_53,
        struct ath9k_channel *VAR_54,
        u16 VAR_55,
        u8 VAR_56,
        u8 VAR_57, bool VAR_58)
{

 struct ath_regulatory *VAR_59 = FUNC_11(VAR_53);
 struct ar5416_eeprom_def *VAR_60 = &VAR_53->eeprom.def;
 struct modal_eep_header *VAR_61 =
  &(VAR_60->modalHeader[FUNC_4(VAR_54)]);
 int16_t VAR_62[VAR_13];
 u8 VAR_63 = 2;
 int VAR_64, VAR_65 = 0;

 FUNC_15(VAR_62, 0, sizeof(VAR_62));

 if (FUNC_10(VAR_53) >= VAR_0)
  VAR_63 = VAR_61->ht40PowerIncForPdadc;

 FUNC_13(VAR_53, VAR_54,
            &VAR_62[0], VAR_55,
            VAR_56,
            VAR_57);

 FUNC_12(VAR_53, VAR_54);

 VAR_59->max_power_level = 0;
 for (VAR_64 = 0; VAR_64 < FUNC_0(VAR_62); VAR_64++) {
  if (VAR_62[VAR_64] > VAR_15)
   VAR_62[VAR_64] = VAR_15;
  if (VAR_62[VAR_64] > VAR_59->max_power_level)
   VAR_59->max_power_level = VAR_62[VAR_64];
 }

 FUNC_14(VAR_53);

 if (VAR_58)
  return;

 if (FUNC_1(VAR_53)) {
  for (VAR_64 = 0; VAR_64 < VAR_13; VAR_64++) {
   int8_t VAR_66;

   VAR_66 = VAR_53->eep_ops->get_eeprom(VAR_53,
       VAR_14);
   VAR_62[VAR_64] -= VAR_66 * 2;
  }
 }

 FUNC_3(VAR_53);

 FUNC_7(VAR_53, VAR_1,
    FUNC_2(VAR_62[VAR_20], 24)
    | FUNC_2(VAR_62[VAR_19], 16)
    | FUNC_2(VAR_62[VAR_31], 8)
    | FUNC_2(VAR_62[VAR_30], 0));
 FUNC_7(VAR_53, VAR_2,
    FUNC_2(VAR_62[VAR_27], 24)
    | FUNC_2(VAR_62[VAR_26], 16)
    | FUNC_2(VAR_62[VAR_25], 8)
    | FUNC_2(VAR_62[VAR_22], 0));

 if (FUNC_4(VAR_54)) {
  if (VAR_16) {
   VAR_65 = 2;
   FUNC_7(VAR_53, VAR_3,
    FUNC_2((VAR_62[VAR_24] - VAR_65), 24)
    | FUNC_2((VAR_62[VAR_23] - VAR_65), 16)
    | FUNC_2(VAR_62[VAR_52], 8)
    | FUNC_2((VAR_62[VAR_21] - VAR_65), 0));
   FUNC_7(VAR_53, VAR_4,
    FUNC_2((VAR_62[VAR_18] - VAR_65), 24)
    | FUNC_2((VAR_62[VAR_17] - VAR_65), 16)
    | FUNC_2((VAR_62[VAR_29] - VAR_65), 8)
    | FUNC_2((VAR_62[VAR_28] - VAR_65), 0));
  } else {
   FUNC_7(VAR_53, VAR_3,
    FUNC_2(VAR_62[VAR_24], 24)
    | FUNC_2(VAR_62[VAR_23], 16)
    | FUNC_2(VAR_62[VAR_52], 8)
    | FUNC_2(VAR_62[VAR_21], 0));
   FUNC_7(VAR_53, VAR_4,
    FUNC_2(VAR_62[VAR_18], 24)
    | FUNC_2(VAR_62[VAR_17], 16)
    | FUNC_2(VAR_62[VAR_29], 8)
    | FUNC_2(VAR_62[VAR_28], 0));
  }
 }

 FUNC_7(VAR_53, VAR_5,
    FUNC_2(VAR_62[VAR_39], 24)
    | FUNC_2(VAR_62[VAR_38], 16)
    | FUNC_2(VAR_62[VAR_37], 8)
    | FUNC_2(VAR_62[VAR_36], 0));
 FUNC_7(VAR_53, VAR_6,
    FUNC_2(VAR_62[VAR_43], 24)
    | FUNC_2(VAR_62[VAR_42], 16)
    | FUNC_2(VAR_62[VAR_41], 8)
    | FUNC_2(VAR_62[VAR_40], 0));

 if (FUNC_5(VAR_54)) {
  FUNC_7(VAR_53, VAR_7,
     FUNC_2(VAR_62[VAR_47] +
           VAR_63, 24)
     | FUNC_2(VAR_62[VAR_46] +
      VAR_63, 16)
     | FUNC_2(VAR_62[VAR_45] +
      VAR_63, 8)
     | FUNC_2(VAR_62[VAR_44] +
      VAR_63, 0));
  FUNC_7(VAR_53, VAR_8,
     FUNC_2(VAR_62[VAR_51] +
           VAR_63, 24)
     | FUNC_2(VAR_62[VAR_50] +
      VAR_63, 16)
     | FUNC_2(VAR_62[VAR_49] +
      VAR_63, 8)
     | FUNC_2(VAR_62[VAR_48] +
      VAR_63, 0));
  if (VAR_16) {
   FUNC_7(VAR_53, VAR_9,
    FUNC_2(VAR_62[VAR_35], 24)
    | FUNC_2((VAR_62[VAR_34] - VAR_65), 16)
    | FUNC_2(VAR_62[VAR_33], 8)
    | FUNC_2((VAR_62[VAR_32] - VAR_65), 0));
  } else {
   FUNC_7(VAR_53, VAR_9,
    FUNC_2(VAR_62[VAR_35], 24)
    | FUNC_2(VAR_62[VAR_34], 16)
    | FUNC_2(VAR_62[VAR_33], 8)
    | FUNC_2(VAR_62[VAR_32], 0));
  }
 }

 FUNC_7(VAR_53, VAR_12,
    FUNC_2(VAR_61->pwrDecreaseFor3Chain, 6)
    | FUNC_2(VAR_61->pwrDecreaseFor2Chain, 0));


 if (VAR_53->tpc_enabled) {
  int VAR_67;

  VAR_67 = (FUNC_5(VAR_54)) ? VAR_63 : 0;
  FUNC_9(VAR_53, VAR_62, VAR_54, VAR_67);

  FUNC_7(VAR_53, VAR_10,
   VAR_15 | VAR_11);
 } else {

  FUNC_7(VAR_53, VAR_10, VAR_15);
 }

 FUNC_6(VAR_53);
}
