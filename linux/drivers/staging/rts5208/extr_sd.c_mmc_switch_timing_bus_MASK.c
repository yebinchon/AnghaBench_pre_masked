
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd_info {int sd_addr; int capacity; int sd_lock_status; int sd_clock; } ;
struct rtsx_chip {int* card_bus_width; size_t* card2lun; struct sd_info sd_card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 int FUNC_1 (struct sd_info*) ;
 int FUNC_2 (struct sd_info*) ;
 int FUNC_3 (struct sd_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
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
 int FUNC_4 (struct sd_info*) ;
 int FUNC_5 (struct sd_info*) ;
 int FUNC_6 (struct sd_info*) ;
 int FUNC_7 (struct sd_info*) ;
 int FUNC_8 (struct sd_info*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct rtsx_chip*,int ) ;
 int FUNC_11 (struct rtsx_chip*,int ,scalar_t__,int,int) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int* FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*,size_t,int) ;
 int FUNC_17 (struct rtsx_chip*) ;
 int FUNC_18 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_19 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_20(struct rtsx_chip *VAR_41, bool VAR_42)
{
 struct sd_info *VAR_43 = &VAR_41->sd_card;
 int VAR_44;
 u8 *VAR_45, VAR_46, VAR_47 = 0;

 FUNC_3(VAR_43);

 FUNC_9(FUNC_13(VAR_41), "SD/MMC CMD %d\n", VAR_33);

 FUNC_15(VAR_41);

 FUNC_11(VAR_41, VAR_40, VAR_14, 0xFF,
       0x40 | VAR_33);
 FUNC_11(VAR_41, VAR_40, VAR_15, 0xFF, 0);
 FUNC_11(VAR_41, VAR_40, VAR_16, 0xFF, 0);
 FUNC_11(VAR_41, VAR_40, VAR_17, 0xFF, 0);
 FUNC_11(VAR_41, VAR_40, VAR_18, 0xFF, 0);

 FUNC_11(VAR_41, VAR_40, VAR_12, 0xFF, 0);
 FUNC_11(VAR_41, VAR_40, VAR_11, 0xFF, 2);
 FUNC_11(VAR_41, VAR_40, VAR_10, 0xFF, 1);
 FUNC_11(VAR_41, VAR_40, VAR_9, 0xFF, 0);

 FUNC_11(VAR_41, VAR_40, VAR_13, 0xFF,
       VAR_20 | VAR_22 | VAR_25 |
       VAR_23 | VAR_26);
 FUNC_11(VAR_41, VAR_40, VAR_0, 0x01,
       VAR_6);
 FUNC_11(VAR_41, VAR_40, VAR_19, 0xFF,
       VAR_29 | VAR_32);
 FUNC_11(VAR_41, VAR_1, VAR_19, VAR_30,
       VAR_30);

 FUNC_11(VAR_41, VAR_8, VAR_7 + 196, 0xFF, 0);
 FUNC_11(VAR_41, VAR_8, VAR_7 + 212, 0xFF, 0);
 FUNC_11(VAR_41, VAR_8, VAR_7 + 213, 0xFF, 0);
 FUNC_11(VAR_41, VAR_8, VAR_7 + 214, 0xFF, 0);
 FUNC_11(VAR_41, VAR_8, VAR_7 + 215, 0xFF, 0);

 VAR_44 = FUNC_16(VAR_41, VAR_21, 1000);
 if (VAR_44 < 0) {
  if (VAR_44 == -VAR_2) {
   FUNC_12(VAR_41);
   FUNC_18(VAR_41, VAR_34, VAR_43->sd_addr,
         VAR_27, ((void*)0), 0);
  }
  return VAR_35;
 }

 VAR_45 = FUNC_14(VAR_41);
 if (VAR_45[0] & VAR_31) {
  FUNC_18(VAR_41, VAR_34, VAR_43->sd_addr,
        VAR_27, ((void*)0), 0);
  return VAR_35;
 }

 if (FUNC_0(VAR_43)) {
  VAR_43->capacity = ((u32)VAR_45[5] << 24) | ((u32)VAR_45[4] << 16) |
   ((u32)VAR_45[3] << 8) | ((u32)VAR_45[2]);
 }

 VAR_47 = 0x03;
 VAR_46 = VAR_45[1] & VAR_47;
 if (VAR_46) {
  u8 VAR_48[5];

  if (VAR_46 & 0x04) {
   if (VAR_42)
    FUNC_8(VAR_43);
   else
    FUNC_6(VAR_43);
  } else if (VAR_46 & 0x02) {
   FUNC_6(VAR_43);
  } else {
   FUNC_4(VAR_43);
  }

  VAR_44 = FUNC_18(VAR_41, VAR_37, 0x03B90100,
          VAR_28, VAR_48, 5);
  if ((VAR_44 != VAR_36) || (VAR_48[4] & VAR_5))
   FUNC_3(VAR_43);
 }

 FUNC_17(VAR_41);
 VAR_44 = FUNC_19(VAR_41, VAR_43->sd_clock);
 if (VAR_44 != VAR_36)
  return VAR_35;


 VAR_44 = FUNC_10(VAR_41, VAR_4);
 if (VAR_44 == VAR_39) {
  FUNC_7(VAR_43);
  VAR_41->card_bus_width[VAR_41->card2lun[VAR_21]] = 8;



 } else if (VAR_44 == VAR_38) {
  VAR_44 = FUNC_10(VAR_41, VAR_3);
  if (VAR_44 == VAR_39) {
   FUNC_5(VAR_43);
   VAR_41->card_bus_width[VAR_41->card2lun[VAR_21]] = 4;



  } else if (VAR_44 == VAR_38) {
   FUNC_2(VAR_43);
   FUNC_1(VAR_43);
  } else {
   return VAR_35;
  }
 } else {
  return VAR_35;
 }

 return VAR_36;
}
