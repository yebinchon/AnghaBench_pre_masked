
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct modal_eep_ar9287_header {scalar_t__ ht40PowerIncForPdadc; } ;
struct ath_regulatory {scalar_t__ max_power_level; } ;
struct ar9287_eeprom {struct modal_eep_ar9287_header modalHeader; } ;
struct TYPE_2__ {struct ar9287_eeprom map9287; } ;
struct ath_hw {scalar_t__ tpc_enabled; TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;
typedef int ratesArray ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ,scalar_t__) ;
 int FUNC_7 (struct ath_hw*,scalar_t__*,struct ath9k_channel*,int) ;
 scalar_t__ FUNC_8 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 struct ath_regulatory* FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_12 (struct ath_hw*,struct ath9k_channel*,scalar_t__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (scalar_t__*,int ,int) ;
 size_t VAR_16 ;
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

__attribute__((used)) static void FUNC_15(struct ath_hw *VAR_52,
     struct ath9k_channel *VAR_53, u16 VAR_54,
     u8 VAR_55,
     u8 VAR_56, bool VAR_57)
{
 struct ath_regulatory *VAR_58 = FUNC_10(VAR_52);
 struct ar9287_eeprom *VAR_59 = &VAR_52->eeprom.map9287;
 struct modal_eep_ar9287_header *VAR_60 = &VAR_59->modalHeader;
 int16_t VAR_61[VAR_13];
 u8 VAR_62 = 2;
 int VAR_63;

 FUNC_14(VAR_61, 0, sizeof(VAR_61));

 if (FUNC_9(VAR_52) >= VAR_0)
  VAR_62 = VAR_60->ht40PowerIncForPdadc;

 FUNC_12(VAR_52, VAR_53,
       &VAR_61[0], VAR_54,
       VAR_55,
       VAR_56);

 FUNC_11(VAR_52, VAR_53);

 VAR_58->max_power_level = 0;
 for (VAR_63 = 0; VAR_63 < FUNC_0(VAR_61); VAR_63++) {
  if (VAR_61[VAR_63] > VAR_15)
   VAR_61[VAR_63] = VAR_15;

  if (VAR_61[VAR_63] > VAR_58->max_power_level)
   VAR_58->max_power_level = VAR_61[VAR_63];
 }

 FUNC_13(VAR_52);

 if (VAR_57)
  return;

 for (VAR_63 = 0; VAR_63 < VAR_13; VAR_63++)
  VAR_61[VAR_63] -= VAR_1 * 2;

 FUNC_2(VAR_52);


 FUNC_6(VAR_52, VAR_2,
    FUNC_1(VAR_61[VAR_19], 24)
    | FUNC_1(VAR_61[VAR_18], 16)
    | FUNC_1(VAR_61[VAR_30], 8)
    | FUNC_1(VAR_61[VAR_29], 0));

 FUNC_6(VAR_52, VAR_3,
    FUNC_1(VAR_61[VAR_26], 24)
    | FUNC_1(VAR_61[VAR_25], 16)
    | FUNC_1(VAR_61[VAR_24], 8)
    | FUNC_1(VAR_61[VAR_21], 0));


 if (FUNC_3(VAR_53)) {
  FUNC_6(VAR_52, VAR_4,
     FUNC_1(VAR_61[VAR_23], 24)
     | FUNC_1(VAR_61[VAR_22], 16)
     | FUNC_1(VAR_61[VAR_51], 8)
     | FUNC_1(VAR_61[VAR_20], 0));
  FUNC_6(VAR_52, VAR_5,
     FUNC_1(VAR_61[VAR_17], 24)
     | FUNC_1(VAR_61[VAR_16], 16)
     | FUNC_1(VAR_61[VAR_28], 8)
     | FUNC_1(VAR_61[VAR_27], 0));
 }


 FUNC_6(VAR_52, VAR_6,
    FUNC_1(VAR_61[VAR_38], 24)
    | FUNC_1(VAR_61[VAR_37], 16)
    | FUNC_1(VAR_61[VAR_36], 8)
    | FUNC_1(VAR_61[VAR_35], 0));

 FUNC_6(VAR_52, VAR_7,
    FUNC_1(VAR_61[VAR_42], 24)
    | FUNC_1(VAR_61[VAR_41], 16)
    | FUNC_1(VAR_61[VAR_40], 8)
    | FUNC_1(VAR_61[VAR_39], 0));


 if (FUNC_4(VAR_53)) {
  if (FUNC_8(VAR_52, VAR_14)) {
   FUNC_6(VAR_52, VAR_8,
      FUNC_1(VAR_61[VAR_46], 24)
      | FUNC_1(VAR_61[VAR_45], 16)
      | FUNC_1(VAR_61[VAR_44], 8)
      | FUNC_1(VAR_61[VAR_43], 0));

   FUNC_6(VAR_52, VAR_9,
      FUNC_1(VAR_61[VAR_50], 24)
      | FUNC_1(VAR_61[VAR_49], 16)
      | FUNC_1(VAR_61[VAR_48], 8)
      | FUNC_1(VAR_61[VAR_47], 0));
  } else {
   FUNC_6(VAR_52, VAR_8,
      FUNC_1(VAR_61[VAR_46] +
            VAR_62, 24)
      | FUNC_1(VAR_61[VAR_45] +
       VAR_62, 16)
      | FUNC_1(VAR_61[VAR_44] +
       VAR_62, 8)
      | FUNC_1(VAR_61[VAR_43] +
       VAR_62, 0));

   FUNC_6(VAR_52, VAR_9,
      FUNC_1(VAR_61[VAR_50] +
            VAR_62, 24)
      | FUNC_1(VAR_61[VAR_49] +
       VAR_62, 16)
      | FUNC_1(VAR_61[VAR_48] +
       VAR_62, 8)
      | FUNC_1(VAR_61[VAR_47] +
       VAR_62, 0));
  }


  FUNC_6(VAR_52, VAR_10,
     FUNC_1(VAR_61[VAR_34], 24)
     | FUNC_1(VAR_61[VAR_33], 16)
     | FUNC_1(VAR_61[VAR_32], 8)
     | FUNC_1(VAR_61[VAR_31], 0));
 }


 if (VAR_52->tpc_enabled) {
  int VAR_64;

  VAR_64 = (FUNC_4(VAR_53)) ? VAR_62 : 0;
  FUNC_7(VAR_52, VAR_61, VAR_53, VAR_64);

  FUNC_6(VAR_52, VAR_11,
   VAR_15 | VAR_12);
 } else {

  FUNC_6(VAR_52, VAR_11, VAR_15);
 }

 FUNC_5(VAR_52);
}
