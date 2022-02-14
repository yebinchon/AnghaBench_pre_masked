
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sd_info {int dummy; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
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
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct rtsx_chip*,int ,scalar_t__,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 scalar_t__* FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int ,int) ;
 int FUNC_8 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_9 (struct rtsx_chip*,int ,int,int ,scalar_t__*,int) ;
 int FUNC_10 (struct rtsx_chip*,int ,int *,int ,int,int,scalar_t__,scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_11(struct rtsx_chip *VAR_36, u8 VAR_37)
{
 struct sd_info *VAR_38 = &VAR_36->sd_card;
 int VAR_39;
 u8 VAR_40[8] = {0}, VAR_41, *VAR_42;
 u16 VAR_43;
 int VAR_44;

 VAR_39 = FUNC_9(VAR_36, VAR_1, 0, VAR_24, ((void*)0),
         0);
 if (VAR_39 != VAR_30)
  return VAR_33;

 if (VAR_37 == VAR_4) {
  VAR_40[0] = 0x55;
  VAR_40[1] = 0xAA;
  VAR_44 = 8;
  VAR_43 = 8;
  VAR_41 = VAR_17;
 } else {
  VAR_40[0] = 0x5A;
  VAR_44 = 4;
  VAR_43 = 4;
  VAR_41 = VAR_16;
 }

 VAR_39 = FUNC_8(VAR_36, VAR_13, 0x02, 0x02);
 if (VAR_39 != VAR_30)
  return VAR_32;

 VAR_39 = FUNC_10(VAR_36, VAR_26, ((void*)0), 0, VAR_43, 1,
          VAR_41, VAR_40, VAR_44, 100);
 if (VAR_39 != VAR_30) {
  FUNC_3(VAR_36);
  FUNC_8(VAR_36, VAR_13, 0x02, 0);
  return VAR_32;
 }

 VAR_39 = FUNC_8(VAR_36, VAR_13, 0x02, 0);
 if (VAR_39 != VAR_30)
  return VAR_32;

 FUNC_1(FUNC_4(VAR_36), "SD/MMC CMD %d\n", VAR_0);

 FUNC_6(VAR_36);

 FUNC_2(VAR_36, VAR_35, VAR_14, 0xFF, 0x40 | VAR_0);

 if (VAR_37 == VAR_4)
  FUNC_2(VAR_36, VAR_35, VAR_11,
        0xFF, 0x08);
 else
  FUNC_2(VAR_36, VAR_35, VAR_11,
        0xFF, 0x04);

 FUNC_2(VAR_36, VAR_35, VAR_10, 0xFF, 1);
 FUNC_2(VAR_36, VAR_35, VAR_9, 0xFF, 0);

 FUNC_2(VAR_36, VAR_35, VAR_12, 0xFF, VAR_18 |
       VAR_21 | VAR_22 |
       VAR_20 | VAR_23);
 FUNC_2(VAR_36, VAR_35, VAR_2, 0x01,
       VAR_6);
 FUNC_2(VAR_36, VAR_35, VAR_15, 0xFF,
       VAR_27 | VAR_29);
 FUNC_2(VAR_36, VAR_3, VAR_15, VAR_28,
       VAR_28);

 FUNC_2(VAR_36, VAR_8, VAR_7, 0, 0);
 if (VAR_37 == VAR_4)
  FUNC_2(VAR_36, VAR_8, VAR_7 + 1, 0, 0);

 VAR_39 = FUNC_7(VAR_36, VAR_19, 100);
 if (VAR_39 < 0) {
  FUNC_3(VAR_36);
  return VAR_32;
 }

 VAR_42 = FUNC_5(VAR_36) + 1;

 if (VAR_37 == VAR_4) {
  FUNC_1(FUNC_4(VAR_36), "BUSTEST_R [8bits]: 0x%02x 0x%02x\n",
   VAR_42[0], VAR_42[1]);
  if ((VAR_42[0] == 0xAA) && (VAR_42[1] == 0x55)) {
   u8 VAR_45[5];
   u32 VAR_46;

   if (FUNC_0(VAR_38))
    VAR_46 = 0x03B70600;
   else
    VAR_46 = 0x03B70200;

   VAR_39 = FUNC_9(VAR_36, VAR_31, VAR_46,
           VAR_25, VAR_45, 5);
   if ((VAR_39 == VAR_30) &&
       !(VAR_45[4] & VAR_5))
    return VAR_34;
  }
 } else {
  FUNC_1(FUNC_4(VAR_36), "BUSTEST_R [4bits]: 0x%02x\n", VAR_42[0]);
  if (VAR_42[0] == 0xA5) {
   u8 VAR_47[5];
   u32 VAR_48;

   if (FUNC_0(VAR_38))
    VAR_48 = 0x03B70500;
   else
    VAR_48 = 0x03B70100;

   VAR_39 = FUNC_9(VAR_36, VAR_31, VAR_48,
           VAR_25, VAR_47, 5);
   if ((VAR_39 == VAR_30) &&
       !(VAR_47[4] & VAR_5))
    return VAR_34;
  }
 }

 return VAR_33;
}
