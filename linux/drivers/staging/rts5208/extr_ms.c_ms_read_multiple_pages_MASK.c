
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ms_info {int dummy; } ;
struct rtsx_chip {int card_wp; int srb; int ms_timeout; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ms_info*) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_1 (struct rtsx_chip*,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int,int*,int) ;
 int FUNC_3 (struct rtsx_chip*,int,int,int*,int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*,int ) ;
 int FUNC_7 (int,int ,int*,int) ;
 int FUNC_8 (struct rtsx_chip*,int ,int,int ,int) ;
 int FUNC_9 (struct rtsx_chip*,int ,int,int,int*,int) ;
 int FUNC_10 (struct rtsx_chip*,int,int,int*,int) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*,int ,int*) ;
 int FUNC_16 (struct rtsx_chip*) ;
 int FUNC_17 (struct rtsx_chip*,int,int*,int,scalar_t__,unsigned int*,unsigned int*,int ,int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_41 ;
 int FUNC_19 (int ,struct rtsx_chip*,int,int ) ;

__attribute__((used)) static int FUNC_20(struct rtsx_chip *VAR_42, u16 VAR_43,
      u16 VAR_44, u8 VAR_45, u8 VAR_46,
      u8 *VAR_47, unsigned int *VAR_48,
      unsigned int *VAR_49)
{
 struct ms_info *VAR_50 = &VAR_42->ms_card;
 int VAR_51, VAR_52;
 u8 VAR_53[VAR_17], VAR_54, VAR_55, VAR_56, VAR_57[6];
 u8 *VAR_58;

 VAR_51 = FUNC_3(VAR_42, VAR_43, VAR_45,
        VAR_53, VAR_17);
 if (VAR_51 == VAR_35) {
  if ((VAR_53[1] & 0x30) != 0x30) {
   FUNC_6(VAR_42, VAR_18);
   return VAR_34;
  }
 }

 VAR_51 = FUNC_8(VAR_42, VAR_31, VAR_17,
        VAR_37, 6);
 if (VAR_51 != VAR_35)
  return VAR_34;

 if (FUNC_0(VAR_50))
  VAR_57[0] = 0x88;
 else
  VAR_57[0] = 0x80;

 VAR_57[1] = 0;
 VAR_57[2] = (u8)(VAR_43 >> 8);
 VAR_57[3] = (u8)VAR_43;
 VAR_57[4] = 0;
 VAR_57[5] = VAR_45;

 for (VAR_52 = 0; VAR_52 < VAR_19; VAR_52++) {
  VAR_51 = FUNC_9(VAR_42, VAR_39, 6, VAR_30,
     VAR_57, 6);
  if (VAR_51 == VAR_35)
   break;
 }
 if (VAR_52 == VAR_19)
  return VAR_34;

 FUNC_6(VAR_42, VAR_21);

 VAR_51 = FUNC_5(VAR_42, VAR_1, VAR_38);
 if (VAR_51 != VAR_35)
  return VAR_34;

 VAR_58 = VAR_47;

 for (VAR_54 = VAR_45; VAR_54 < VAR_46; VAR_54++) {
  FUNC_6(VAR_42, VAR_21);

  if (FUNC_1(VAR_42, VAR_13) != VAR_35) {
   FUNC_6(VAR_42, VAR_20);
   return VAR_34;
  }

  VAR_51 = FUNC_2(VAR_42, VAR_7, 1, VAR_30, &VAR_55, 1);
  if (VAR_51 != VAR_35)
   return VAR_34;

  if (VAR_55 & VAR_10) {
   FUNC_6(VAR_42, VAR_14);
   return VAR_34;
  }
  if (VAR_55 & VAR_11) {
   if (VAR_55 & VAR_8) {
    VAR_51 = FUNC_4(VAR_42);
    if (VAR_51 != VAR_35) {
     if (!(VAR_42->card_wp & VAR_13)) {
      FUNC_11(VAR_42);
      FUNC_7
       (VAR_44, VAR_41,
        VAR_53,
        VAR_17);
      FUNC_10
       (VAR_42, VAR_43,
        VAR_54, VAR_53,
        VAR_17);
     }
     FUNC_6(VAR_42,
       VAR_18);
     return VAR_34;
    }
   } else {
    FUNC_6(VAR_42, VAR_18);
    return VAR_34;
   }
  } else {
   if (!(VAR_55 & VAR_8)) {
    FUNC_6(VAR_42, VAR_12);
    return VAR_34;
   }
  }

  if (VAR_54 == (VAR_46 - 1)) {
   if (!(VAR_55 & VAR_9)) {
    VAR_51 = FUNC_5(VAR_42, VAR_0, VAR_38);
    if (VAR_51 != VAR_35)
     return VAR_34;
   }

   VAR_51 = FUNC_2(VAR_42, VAR_7, 1, VAR_30,
            &VAR_55, 1);
   if (VAR_51 != VAR_35)
    return VAR_34;

   if (!(VAR_55 & VAR_9)) {
    FUNC_6(VAR_42, VAR_18);
    return VAR_34;
   }

   VAR_56 = VAR_30;
  } else {
   VAR_56 = VAR_38;
  }

  FUNC_14(VAR_42);

  FUNC_12(VAR_42, VAR_40, VAR_25, 0xFF, VAR_32);
  FUNC_12(VAR_42, VAR_40, VAR_29,
        0xFF, VAR_56);
  FUNC_12(VAR_42, VAR_40, VAR_2,
        0x01, VAR_33);

  FUNC_19(VAR_5, VAR_42, 512, VAR_4);

  FUNC_12(VAR_42, VAR_40, VAR_26, 0xFF,
        VAR_28 | VAR_23);
  FUNC_12(VAR_42, VAR_3, VAR_26,
        VAR_27, VAR_27);

  FUNC_16(VAR_42);

  VAR_51 = FUNC_17(VAR_42, VAR_13, VAR_58, 512,
          FUNC_18(VAR_42->srb),
          VAR_48, VAR_49,
          VAR_5,
          VAR_42->ms_timeout);
  if (VAR_51 < 0) {
   if (VAR_51 == -VAR_6) {
    FUNC_6(VAR_42, VAR_24);
    FUNC_13(VAR_42);
    return VAR_36;
   }

   VAR_51 = FUNC_15(VAR_42, VAR_29, &VAR_55);
   if (VAR_51 != VAR_35) {
    FUNC_6(VAR_42, VAR_24);
    FUNC_13(VAR_42);
    return VAR_36;
   }
   if (VAR_55 & (VAR_15 | VAR_22)) {
    FUNC_6(VAR_42, VAR_16);
    FUNC_13(VAR_42);
    return VAR_34;
   }
  }

  if (FUNC_18(VAR_42->srb) == 0)
   VAR_58 += 512;
 }

 return VAR_35;
}
