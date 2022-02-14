
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ms_info {int page_off; } ;
struct rtsx_chip {int srb; int ms_timeout; struct ms_info ms_card; } ;


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
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ,int,int ,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ,int,int ) ;
 int FUNC_7 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_8 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*,int ,int*,int,scalar_t__,unsigned int*,unsigned int*,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,struct rtsx_chip*,int,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct rtsx_chip *VAR_39, u16 VAR_40,
       u16 VAR_41, u16 VAR_42, u8 VAR_43,
    u8 VAR_44, u8 *VAR_45, unsigned int *VAR_46,
    unsigned int *VAR_47)
{
 struct ms_info *VAR_48 = &VAR_39->ms_card;
 int VAR_49, VAR_50;
 u8 VAR_51, VAR_52, VAR_53[16];
 u8 *VAR_54;

 if (!VAR_43) {
  VAR_49 = FUNC_5(VAR_39, VAR_29, VAR_15,
         VAR_34, 7);
  if (VAR_49 != VAR_32)
   return VAR_31;

  if (FUNC_0(VAR_48))
   VAR_53[0] = 0x88;
  else
   VAR_53[0] = 0x80;

  VAR_53[1] = 0;
  VAR_53[2] = (u8)(VAR_40 >> 8);
  VAR_53[3] = (u8)VAR_40;
  VAR_53[4] = 0x80;
  VAR_53[5] = 0;
  VAR_53[6] = 0xEF;
  VAR_53[7] = 0xFF;

  VAR_49 = FUNC_7(VAR_39, VAR_37, 7, VAR_28,
     VAR_53, 8);
  if (VAR_49 != VAR_32)
   return VAR_31;

  VAR_49 = FUNC_3(VAR_39, VAR_1, VAR_35);
  if (VAR_49 != VAR_32)
   return VAR_31;

  FUNC_4(VAR_39, VAR_19);
  VAR_49 = FUNC_6(VAR_39, VAR_21, VAR_7, 1,
      VAR_28);
  if (VAR_49 != VAR_32)
   return VAR_31;
 }

 VAR_49 = FUNC_5(VAR_39, VAR_29, VAR_15,
        VAR_34, (6 + VAR_15));
 if (VAR_49 != VAR_32)
  return VAR_31;

 FUNC_4(VAR_39, VAR_19);

 if (FUNC_0(VAR_48))
  VAR_53[0] = 0x88;
 else
  VAR_53[0] = 0x80;

 VAR_53[1] = 0;
 VAR_53[2] = (u8)(VAR_41 >> 8);
 VAR_53[3] = (u8)VAR_41;
 if ((VAR_44 - VAR_43) == 1)
  VAR_53[4] = 0x20;
 else
  VAR_53[4] = 0;

 VAR_53[5] = VAR_43;
 VAR_53[6] = 0xF8;
 VAR_53[7] = 0xFF;
 VAR_53[8] = (u8)(VAR_42 >> 8);
 VAR_53[9] = (u8)VAR_42;

 for (VAR_50 = 0x0A; VAR_50 < 0x10; VAR_50++)
  VAR_53[VAR_50] = 0xFF;

 for (VAR_50 = 0; VAR_50 < VAR_17; VAR_50++) {
  VAR_49 = FUNC_7(VAR_39, VAR_37, 6 + VAR_15,
     VAR_28, VAR_53, 16);
  if (VAR_49 == VAR_32)
   break;
 }
 if (VAR_50 == VAR_17)
  return VAR_31;

 for (VAR_50 = 0; VAR_50 < VAR_17; VAR_50++) {
  VAR_49 = FUNC_3(VAR_39, VAR_1, VAR_35);
  if (VAR_49 == VAR_32)
   break;
 }
 if (VAR_50 == VAR_17)
  return VAR_31;

 VAR_49 = FUNC_2(VAR_39, VAR_7, 1, VAR_28, &VAR_52, 1);
 if (VAR_49 != VAR_32)
  return VAR_31;

 VAR_54 = VAR_45;
 for (VAR_51 = VAR_43; VAR_51 < VAR_44; VAR_51++) {
  FUNC_4(VAR_39, VAR_19);

  if (FUNC_1(VAR_39, VAR_13) != VAR_32) {
   FUNC_4(VAR_39, VAR_18);
   return VAR_31;
  }

  if (VAR_52 & VAR_10) {
   FUNC_4(VAR_39, VAR_14);
   return VAR_31;
  }
  if (VAR_52 & VAR_11) {
   FUNC_4(VAR_39, VAR_16);
   return VAR_31;
  }
  if (!(VAR_52 & VAR_8)) {
   FUNC_4(VAR_39, VAR_12);
   return VAR_31;
  }

  FUNC_15(30);

  FUNC_10(VAR_39);

  FUNC_8(VAR_39, VAR_38, VAR_23,
        0xFF, VAR_36);
  FUNC_8(VAR_39, VAR_38, VAR_27,
        0xFF, VAR_35);
  FUNC_8(VAR_39, VAR_38, VAR_2,
        0x01, VAR_30);

  FUNC_14(VAR_5, VAR_39, 512, VAR_4);

  FUNC_8(VAR_39, VAR_38, VAR_24, 0xFF,
        VAR_26 | VAR_20);
  FUNC_8(VAR_39, VAR_3, VAR_24,
        VAR_25, VAR_25);

  FUNC_11(VAR_39);

  VAR_49 = FUNC_12(VAR_39, VAR_13, VAR_54, 512,
          FUNC_13(VAR_39->srb),
          VAR_46, VAR_47,
          VAR_5,
          VAR_39->ms_timeout);
  if (VAR_49 < 0) {
   FUNC_4(VAR_39, VAR_22);
   FUNC_9(VAR_39);

   if (VAR_49 == -VAR_6)
    return VAR_33;
   return VAR_31;
  }

  VAR_49 = FUNC_2(VAR_39, VAR_7, 1, VAR_28, &VAR_52, 1);
  if (VAR_49 != VAR_32)
   return VAR_31;

  if ((VAR_44 - VAR_43) == 1) {
   if (!(VAR_52 & VAR_9)) {
    FUNC_4(VAR_39, VAR_16);
    return VAR_31;
   }
  } else {
   if (VAR_51 == (VAR_44 - 1)) {
    if (!(VAR_52 & VAR_9)) {
     VAR_49 = FUNC_3(VAR_39, VAR_0,
            VAR_35);
     if (VAR_49 != VAR_32)
      return VAR_31;
    }

    VAR_49 = FUNC_2(VAR_39, VAR_7, 1,
             VAR_28, &VAR_52, 1);
    if (VAR_49 != VAR_32)
     return VAR_31;
   }

   if ((VAR_51 == (VAR_44 - 1)) ||
       (VAR_51 == VAR_48->page_off)) {
    if (!(VAR_52 & VAR_9)) {
     FUNC_4(VAR_39,
       VAR_16);
     return VAR_31;
    }
   }
  }

  if (FUNC_13(VAR_39->srb) == 0)
   VAR_54 += 512;
 }

 return VAR_32;
}
