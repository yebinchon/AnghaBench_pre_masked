
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ,int,int ,int ) ;
 int FUNC_6 (struct ath_common*,int ,char*) ;

__attribute__((used)) static bool FUNC_7(struct ath_hw *VAR_21,
           bool VAR_22)
{
 struct ath_common *VAR_23 = FUNC_4(VAR_21);
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28,
  VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36,
  VAR_37, VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44,
  VAR_45, VAR_46, VAR_47;
 bool VAR_48;
 u32 VAR_49, VAR_50;




 FUNC_0(VAR_21, VAR_9,
      VAR_12);
 FUNC_0(VAR_21, VAR_16,
      VAR_17);
 FUNC_3(VAR_21, VAR_9,
    FUNC_1(VAR_21, VAR_9) | VAR_10);

 VAR_48 = FUNC_5(VAR_21, VAR_9,
          VAR_10,
          0, VAR_0);
 if (!VAR_48) {
  FUNC_6(VAR_23, VAR_18,
   "AGC cal without offset cal failed to complete in 1ms");
  return 0;
 }






 FUNC_2(VAR_21, VAR_9,
      VAR_12);
 FUNC_0(VAR_21, VAR_14,
      VAR_15);
 FUNC_0(VAR_21, VAR_9,
      VAR_11);
 FUNC_0(VAR_21, VAR_9,
      VAR_13);

 VAR_24 = 0;
 VAR_32 = 0;
 VAR_40 = 0;

 while ((VAR_24 == 0) || (VAR_32 == 0) || (VAR_40 == 0)) {
  VAR_25 = (FUNC_1(VAR_21, VAR_1) >> 30) & 0x3;
  VAR_33 = (FUNC_1(VAR_21, VAR_3) >> 30) & 0x3;
  VAR_41 = (FUNC_1(VAR_21, VAR_5) >> 30) & 0x3;

  FUNC_2(VAR_21, VAR_7, VAR_8);

  FUNC_3(VAR_21, VAR_9,
     FUNC_1(VAR_21, VAR_9) | VAR_10);

  VAR_48 = FUNC_5(VAR_21, VAR_9,
           VAR_10,
           0, VAR_0);
  if (!VAR_48) {
   FUNC_6(VAR_23, VAR_18,
    "DC offset cal failed to complete in 1ms");
   return 0;
  }

  FUNC_0(VAR_21, VAR_7, VAR_8);




  FUNC_3(VAR_21, VAR_2,
     ((FUNC_1(VAR_21, VAR_2) & 0xfffffcff) | (1 << 8)));
  FUNC_3(VAR_21, VAR_4,
     ((FUNC_1(VAR_21, VAR_4) & 0xfffffcff) | (1 << 8)));
  FUNC_3(VAR_21, VAR_6,
     ((FUNC_1(VAR_21, VAR_6) & 0xfffffcff) | (1 << 8)));

  VAR_49 = FUNC_1(VAR_21, VAR_2);
  VAR_26 = (VAR_49 >> 26) & 0x1f;
  VAR_27 = (VAR_49 >> 21) & 0x1f;

  VAR_49 = FUNC_1(VAR_21, VAR_4);
  VAR_34 = (VAR_49 >> 26) & 0x1f;
  VAR_35 = (VAR_49 >> 21) & 0x1f;

  VAR_49 = FUNC_1(VAR_21, VAR_6);
  VAR_42 = (VAR_49 >> 26) & 0x1f;
  VAR_43 = (VAR_49 >> 21) & 0x1f;




  FUNC_3(VAR_21, VAR_2,
     ((FUNC_1(VAR_21, VAR_2) & 0xfffffcff) | (2 << 8)));
  FUNC_3(VAR_21, VAR_4,
     ((FUNC_1(VAR_21, VAR_4) & 0xfffffcff) | (2 << 8)));
  FUNC_3(VAR_21, VAR_6,
     ((FUNC_1(VAR_21, VAR_6) & 0xfffffcff) | (2 << 8)));

  VAR_49 = FUNC_1(VAR_21, VAR_2);
  VAR_28 = (VAR_49 >> 26) & 0x1f;
  VAR_29 = (VAR_49 >> 21) & 0x1f;

  VAR_49 = FUNC_1(VAR_21, VAR_4);
  VAR_36 = (VAR_49 >> 26) & 0x1f;
  VAR_37 = (VAR_49 >> 21) & 0x1f;

  VAR_49 = FUNC_1(VAR_21, VAR_6);
  VAR_44 = (VAR_49 >> 26) & 0x1f;
  VAR_45 = (VAR_49 >> 21) & 0x1f;




  FUNC_3(VAR_21, VAR_2,
     ((FUNC_1(VAR_21, VAR_2) & 0xfffffcff) | (3 << 8)));
  FUNC_3(VAR_21, VAR_4,
     ((FUNC_1(VAR_21, VAR_4) & 0xfffffcff) | (3 << 8)));
  FUNC_3(VAR_21, VAR_6,
     ((FUNC_1(VAR_21, VAR_6) & 0xfffffcff) | (3 << 8)));

  VAR_49 = FUNC_1(VAR_21, VAR_2);
  VAR_30 = (VAR_49 >> 26) & 0x1f;
  VAR_31 = (VAR_49 >> 21) & 0x1f;

  VAR_49 = FUNC_1(VAR_21, VAR_4);
  VAR_38 = (VAR_49 >> 26) & 0x1f;
  VAR_39 = (VAR_49 >> 21) & 0x1f;

  VAR_49 = FUNC_1(VAR_21, VAR_6);
  VAR_46 = (VAR_49 >> 26) & 0x1f;
  VAR_47 = (VAR_49 >> 21) & 0x1f;

  if ((VAR_26 > VAR_20) || (VAR_26 < VAR_19) ||
      (VAR_28 > VAR_20) || (VAR_28 < VAR_19) ||
      (VAR_30 > VAR_20) || (VAR_30 < VAR_19) ||
      (VAR_27 > VAR_20) || (VAR_27 < VAR_19) ||
      (VAR_29 > VAR_20) || (VAR_29 < VAR_19) ||
      (VAR_31 > VAR_20) || (VAR_31 < VAR_19)) {
   if (VAR_25 == 3) {
    VAR_24 = 1;
   } else {
    VAR_25++;

    VAR_50 = FUNC_1(VAR_21, VAR_1) & 0x3fffffff;
    VAR_50 |= (VAR_25 << 30);
    FUNC_3(VAR_21, VAR_1, VAR_50);

    VAR_24 = 0;
   }
  } else {
   VAR_24 = 1;
  }

  if ((VAR_34 > VAR_20) || (VAR_34 < VAR_19) ||
      (VAR_36 > VAR_20) || (VAR_36 < VAR_19) ||
      (VAR_38 > VAR_20) || (VAR_38 < VAR_19) ||
      (VAR_35 > VAR_20) || (VAR_35 < VAR_19) ||
      (VAR_37 > VAR_20) || (VAR_37 < VAR_19) ||
      (VAR_39 > VAR_20) || (VAR_39 < VAR_19)) {
   if (VAR_33 == 3) {
    VAR_32 = 1;
   } else {
    VAR_33++;

    VAR_50 = FUNC_1(VAR_21, VAR_3) & 0x3fffffff;
    VAR_50 |= (VAR_33 << 30);
    FUNC_3(VAR_21, VAR_3, VAR_50);

    VAR_32 = 0;
   }
  } else {
   VAR_32 = 1;
  }

  if ((VAR_42 > VAR_20) || (VAR_42 < VAR_19) ||
      (VAR_44 > VAR_20) || (VAR_44 < VAR_19) ||
      (VAR_46 > VAR_20) || (VAR_46 < VAR_19) ||
      (VAR_43 > VAR_20) || (VAR_43 < VAR_19) ||
      (VAR_45 > VAR_20) || (VAR_45 < VAR_19) ||
      (VAR_47 > VAR_20) || (VAR_47 < VAR_19)) {
   if (VAR_41 == 3) {
    VAR_40 = 1;
   } else {
    VAR_41++;

    VAR_50 = FUNC_1(VAR_21, VAR_5) & 0x3fffffff;
    VAR_50 |= (VAR_41 << 30);
    FUNC_3(VAR_21, VAR_5, VAR_50);

    VAR_40 = 0;
   }
  } else {
   VAR_40 = 1;
  }
 }

 FUNC_0(VAR_21, VAR_9,
      VAR_12);
 FUNC_2(VAR_21, VAR_7, VAR_8);





 FUNC_2(VAR_21, VAR_16,
      VAR_17);

 return 1;
}
