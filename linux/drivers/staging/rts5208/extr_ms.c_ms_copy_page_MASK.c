
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ms_info {int dummy; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ms_info*) ;
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
 int FUNC_1 (struct ms_info*) ;
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
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_5 (struct rtsx_chip*,int,int,int*,int) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;
 int FUNC_9 (int,int ,int*,int) ;
 int FUNC_10 (struct rtsx_chip*,int ,int,int ,int) ;
 int FUNC_11 (struct rtsx_chip*,int ,int ,int ,int ) ;
 int FUNC_12 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_13 (struct rtsx_chip*,int,int,int*,int) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*,int ,int*) ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static int FUNC_16(struct rtsx_chip *VAR_31, u16 VAR_32, u16 VAR_33,
   u16 VAR_34, u8 VAR_35, u8 VAR_36)
{
 struct ms_info *VAR_37 = &VAR_31->ms_card;
 bool VAR_38 = 0;
 int VAR_39, VAR_40;
 u8 VAR_41[VAR_12], VAR_42, VAR_43, VAR_44, VAR_45[16];

 FUNC_3(FUNC_14(VAR_31), "Copy page from 0x%x to 0x%x, logical block is 0x%x\n",
  VAR_32, VAR_33, VAR_34);
 FUNC_3(FUNC_14(VAR_31), "start_page = %d, end_page = %d\n",
  VAR_35, VAR_36);

 VAR_39 = FUNC_5(VAR_31, VAR_33, 0, VAR_41, VAR_12);
 if (VAR_39 != VAR_24)
  return VAR_23;

 VAR_39 = FUNC_6(VAR_31);
 if (VAR_39 != VAR_24)
  return VAR_23;

 VAR_39 = FUNC_15(VAR_31, VAR_21, &VAR_42);
 if (VAR_39)
  return VAR_39;

 if (VAR_42 & VAR_2) {
  VAR_39 = FUNC_7(VAR_31, VAR_3, VAR_26);
  if (VAR_39 != VAR_24)
   return VAR_23;

  VAR_39 = FUNC_4(VAR_31, VAR_4, 1, VAR_19, &VAR_42, 1);
  if (VAR_39 != VAR_24)
   return VAR_23;

  if (!(VAR_42 & VAR_6)) {
   FUNC_8(VAR_31, VAR_13);
   return VAR_23;
  }
 }

 for (VAR_43 = VAR_35; VAR_43 < VAR_36; VAR_43++) {
  if (FUNC_2(VAR_31, VAR_10) != VAR_24) {
   FUNC_8(VAR_31, VAR_15);
   return VAR_23;
  }

  VAR_39 = FUNC_5(VAR_31, VAR_32, VAR_43, VAR_41,
         VAR_12);
  if (VAR_39 != VAR_24)
   return VAR_23;

  VAR_39 = FUNC_10(VAR_31, VAR_20,
         VAR_12, VAR_25, 6);
  if (VAR_39 != VAR_24)
   return VAR_23;

  FUNC_8(VAR_31, VAR_16);

  if (FUNC_0(VAR_37))
   VAR_45[0] = 0x88;
  else
   VAR_45[0] = 0x80;

  VAR_45[1] = 0;
  VAR_45[2] = (u8)(VAR_32 >> 8);
  VAR_45[3] = (u8)VAR_32;
  VAR_45[4] = 0x20;
  VAR_45[5] = VAR_43;

  VAR_39 = FUNC_12(VAR_31, VAR_28, 6, VAR_19,
     VAR_45, 6);
  if (VAR_39 != VAR_24)
   return VAR_23;

  VAR_39 = FUNC_7(VAR_31, VAR_0, VAR_26);
  if (VAR_39 != VAR_24)
   return VAR_23;

  FUNC_8(VAR_31, VAR_16);
  VAR_39 = FUNC_4(VAR_31, VAR_4, 1, VAR_19, &VAR_42, 1);
  if (VAR_39 != VAR_24)
   return VAR_23;

  if (VAR_42 & VAR_7) {
   FUNC_8(VAR_31, VAR_11);
   return VAR_23;
  }

  if (VAR_42 & VAR_6) {
   if (VAR_42 & VAR_8) {
    VAR_39 = FUNC_6(VAR_31);
    if (VAR_39 != VAR_24) {
     VAR_38 = 1;
     FUNC_3(FUNC_14(VAR_31), "Uncorrectable error\n");
    } else {
     VAR_38 = 0;
    }

    VAR_39 = FUNC_11(VAR_31,
        VAR_17,
        VAR_22,
        0, VAR_19);
    if (VAR_39 != VAR_24)
     return VAR_23;

    if (VAR_38) {
     FUNC_9(VAR_34, VAR_30,
          VAR_41,
          VAR_12);
     if (VAR_43 == 0)
      VAR_41[0] &= 0xEF;

     FUNC_13(VAR_31, VAR_32, VAR_43,
           VAR_41,
           VAR_12);
     FUNC_3(FUNC_14(VAR_31), "page %d : extra[0] = 0x%x\n",
      VAR_43, VAR_41[0]);
     FUNC_1(VAR_37);

     FUNC_9(VAR_34, VAR_29,
          VAR_41,
          VAR_12);
     FUNC_13(VAR_31, VAR_33, VAR_43,
           VAR_41,
           VAR_12);
     continue;
    }

    for (VAR_40 = 0; VAR_40 < VAR_14;
         VAR_40++) {
     VAR_39 = FUNC_11(
      VAR_31,
      VAR_18,
      VAR_27,
      0, VAR_19);
     if (VAR_39 == VAR_24)
      break;
    }
    if (VAR_40 == VAR_14)
     return VAR_23;
   }

   if (!(VAR_42 & VAR_5)) {
    FUNC_8(VAR_31, VAR_9);
    return VAR_23;
   }
  }

  VAR_39 = FUNC_10(VAR_31, VAR_20, VAR_12,
         VAR_25, (6 + VAR_12));

  FUNC_8(VAR_31, VAR_16);

  if (FUNC_0(VAR_37))
   VAR_45[0] = 0x88;
  else
   VAR_45[0] = 0x80;

  VAR_45[1] = 0;
  VAR_45[2] = (u8)(VAR_33 >> 8);
  VAR_45[3] = (u8)VAR_33;
  VAR_45[4] = 0x20;
  VAR_45[5] = VAR_43;

  if ((VAR_41[0] & 0x60) != 0x60)
   VAR_45[6] = VAR_41[0];
  else
   VAR_45[6] = 0xF8;

  VAR_45[6 + 1] = 0xFF;
  VAR_45[6 + 2] = (u8)(VAR_34 >> 8);
  VAR_45[6 + 3] = (u8)VAR_34;

  for (VAR_44 = 4; VAR_44 <= VAR_12; VAR_44++)
   VAR_45[6 + VAR_44] = 0xFF;

  VAR_39 = FUNC_12(VAR_31, VAR_28, (6 + VAR_12),
     VAR_19, VAR_45, 16);
  if (VAR_39 != VAR_24)
   return VAR_23;

  VAR_39 = FUNC_7(VAR_31, VAR_1, VAR_26);
  if (VAR_39 != VAR_24)
   return VAR_23;

  FUNC_8(VAR_31, VAR_16);
  VAR_39 = FUNC_4(VAR_31, VAR_4, 1, VAR_19, &VAR_42, 1);
  if (VAR_39 != VAR_24)
   return VAR_23;

  if (VAR_42 & VAR_7) {
   FUNC_8(VAR_31, VAR_11);
   return VAR_23;
  }

  if (VAR_42 & VAR_6) {
   if (VAR_42 & VAR_8) {
    FUNC_8(VAR_31, VAR_13);
    return VAR_23;
   }
  }

  if (VAR_43 == 0) {
   VAR_39 = FUNC_10(VAR_31, VAR_20,
          VAR_12, VAR_25,
          7);
   if (VAR_39 != VAR_24)
    return VAR_23;

   FUNC_8(VAR_31, VAR_16);

   if (FUNC_0(VAR_37))
    VAR_45[0] = 0x88;
   else
    VAR_45[0] = 0x80;

   VAR_45[1] = 0;
   VAR_45[2] = (u8)(VAR_32 >> 8);
   VAR_45[3] = (u8)VAR_32;
   VAR_45[4] = 0x80;
   VAR_45[5] = 0;
   VAR_45[6] = 0xEF;
   VAR_45[7] = 0xFF;

   VAR_39 = FUNC_12(VAR_31, VAR_28, 7,
      VAR_19, VAR_45, 8);
   if (VAR_39 != VAR_24)
    return VAR_23;

   VAR_39 = FUNC_7(VAR_31, VAR_1, VAR_26);
   if (VAR_39 != VAR_24)
    return VAR_23;

   FUNC_8(VAR_31, VAR_16);
   VAR_39 = FUNC_4(VAR_31, VAR_4, 1,
            VAR_19, &VAR_42, 1);
   if (VAR_39 != VAR_24)
    return VAR_23;

   if (VAR_42 & VAR_7) {
    FUNC_8(VAR_31, VAR_11);
    return VAR_23;
   }

   if (VAR_42 & VAR_6) {
    if (VAR_42 & VAR_8) {
     FUNC_8(VAR_31,
       VAR_13);
     return VAR_23;
    }
   }
  }
 }

 return VAR_24;
}
