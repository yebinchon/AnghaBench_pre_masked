
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd_info {int sd_lock_status; int sd_addr; int* raw_csd; int mmc_dont_switch_bus; scalar_t__ capacity; } ;
struct rtsx_chip {int* card_bus_width; size_t* card2lun; size_t card_wp; struct sd_info sd_card; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 int FUNC_2 (struct sd_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
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
 int FUNC_3 (struct sd_info*) ;
 int FUNC_4 (struct sd_info*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (struct rtsx_chip*,size_t) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;
 int FUNC_9 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_10 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_11 (struct rtsx_chip*,int ) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*,int) ;
 int FUNC_17 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_18 (struct rtsx_chip*,int ) ;
 int FUNC_19 (struct rtsx_chip*,int ) ;
 int FUNC_20 (struct rtsx_chip*) ;
 int FUNC_21 (struct rtsx_chip*) ;
 int FUNC_22 (struct rtsx_chip*,int,int,int) ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct rtsx_chip *VAR_23)
{
 struct sd_info *VAR_24 = &VAR_23->sd_card;
 int VAR_25, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
 bool VAR_29 = 1;
 u8 VAR_30[16];
 u8 VAR_31 = 0;
 u32 VAR_32;






switch_fail:
 VAR_25 = FUNC_14(VAR_23);
 if (VAR_25 != VAR_21)
  return VAR_25;

 FUNC_3(VAR_24);

RTY_MMC_RST:
 VAR_25 = FUNC_17(VAR_23, VAR_1, 0, VAR_9,
         ((void*)0), 0);
 if (VAR_25 != VAR_21)
  return VAR_20;

 do {
  if (FUNC_5(VAR_23, VAR_6) != VAR_21) {
   FUNC_19(VAR_23, VAR_8);
   return VAR_20;
  }

  VAR_25 = FUNC_17(VAR_23, VAR_17,
          (VAR_22 | 0x40000000),
          VAR_12, VAR_30, 5);
  if (VAR_25 != VAR_21) {
   if (FUNC_11(VAR_23, VAR_5) ||
       FUNC_11(VAR_23, VAR_14)) {
    VAR_28++;
    if (VAR_28 < 20) {
     FUNC_12(VAR_23);
     goto RTY_MMC_RST;
    } else {
     return VAR_20;
    }
   } else {
    VAR_27++;
    if (VAR_27 < 100) {
     FUNC_12(VAR_23);
     goto RTY_MMC_RST;
    } else {
     return VAR_20;
    }
   }
  }

  FUNC_23(20);
  VAR_26++;
 } while (!(VAR_30[1] & 0x80) && (VAR_26 < 255));

 if (VAR_26 == 255)
  return VAR_20;

 if ((VAR_30[1] & 0x60) == 0x40)
  FUNC_4(VAR_24);
 else
  FUNC_2(VAR_24);

 VAR_25 = FUNC_17(VAR_23, VAR_0, 0, VAR_11,
         ((void*)0), 0);
 if (VAR_25 != VAR_21)
  return VAR_20;

 VAR_24->sd_addr = 0x00100000;
 VAR_25 = FUNC_17(VAR_23, VAR_19, VAR_24->sd_addr,
         VAR_13, VAR_30, 5);
 if (VAR_25 != VAR_21)
  return VAR_20;

 VAR_25 = FUNC_10(VAR_23, 1);
 if (VAR_25 != VAR_21)
  return VAR_20;

 VAR_31 = (VAR_24->raw_csd[0] & 0x3C) >> 2;

 VAR_25 = FUNC_16(VAR_23, 1);
 if (VAR_25 != VAR_21)
  return VAR_20;

 VAR_25 = FUNC_17(VAR_23, VAR_18, 0x200, VAR_10,
         ((void*)0), 0);
 if (VAR_25 != VAR_21)
  return VAR_20;
 VAR_25 = FUNC_18(VAR_23, VAR_7);
 if (VAR_25 != VAR_21)
  return VAR_20;

 VAR_23->card_bus_width[VAR_23->card2lun[VAR_6]] = 1;

 if (!VAR_24->mmc_dont_switch_bus) {
  if (VAR_31 == 4) {

   VAR_25 = FUNC_7(VAR_23, VAR_29);
   if (VAR_25 != VAR_21) {
    VAR_25 = FUNC_13(VAR_23);
    if (VAR_25 != VAR_21)
     return VAR_20;
    VAR_24->mmc_dont_switch_bus = 1;
    goto switch_fail;
   }
  }

  if (FUNC_1(VAR_24) && (VAR_24->capacity == 0))
   return VAR_20;

  if (VAR_29 && FUNC_0(VAR_24)) {
   VAR_25 = FUNC_20(VAR_23);
   if (VAR_25 != VAR_21)
    return VAR_20;

   VAR_25 = FUNC_6(VAR_23);
   if (VAR_25 != VAR_21) {
    VAR_25 = FUNC_13(VAR_23);
    if (VAR_25 != VAR_21)
     return VAR_20;

    VAR_29 = 0;
    goto switch_fail;
   }

   VAR_25 = FUNC_22(VAR_23, 0x08, 1, 1000);
   if (VAR_25 == VAR_21) {
    VAR_25 = FUNC_15(VAR_23);
    if (VAR_25 != VAR_21) {
     VAR_25 = FUNC_13(VAR_23);
     if (VAR_25 != VAR_21)
      return VAR_20;

     VAR_29 = 0;
     goto switch_fail;
    }
   }
  }
 }
 VAR_32 = FUNC_8(VAR_23, VAR_4);
 if (VAR_32 & VAR_16)
  VAR_23->card_wp |= VAR_6;

 return VAR_21;
}
