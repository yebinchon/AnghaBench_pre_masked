
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xd_info {int device_code; int block_shift; int page_off; int addr_cycle; int zone_cnt; int capacity; int cis_block; } ;
struct rtsx_chip {int ocp_stat; int* capacity; size_t* card2lun; scalar_t__ ft2_fast_mode; scalar_t__ asic_code; struct xd_info xd_card; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
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
 size_t VAR_20 ;
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
 int FUNC_1 (struct xd_info*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 (struct xd_info*) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_3 (struct rtsx_chip*,size_t) ;
 int FUNC_4 (struct rtsx_chip*,size_t) ;
 int FUNC_5 (struct rtsx_chip*,size_t) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int* FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*,size_t,int) ;
 int FUNC_12 (struct rtsx_chip*,size_t) ;
 int FUNC_13 (int) ;


 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*) ;
 int FUNC_17 (struct rtsx_chip*,int,int*,int) ;
 int FUNC_18 (struct rtsx_chip*,int ,int*,int) ;
 int FUNC_19 (struct rtsx_chip*,int,int*,int) ;
 int FUNC_20 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_21(struct rtsx_chip *VAR_42)
{
 struct xd_info *VAR_43 = &VAR_42->xd_card;
 int VAR_44, VAR_45, VAR_46;
 u8 *VAR_47, VAR_48[4], VAR_49[11];

 VAR_44 = FUNC_12(VAR_42, VAR_20);
 if (VAR_44 != VAR_17)
  return VAR_16;

 FUNC_10(VAR_42);

 FUNC_7(VAR_42, VAR_18, VAR_23, 0xFF,
       VAR_33);
 if (VAR_42->asic_code) {
  if (!FUNC_0(VAR_42, 0x5288))
   FUNC_14(VAR_42);
  else
   FUNC_16(VAR_42);
 } else {
  FUNC_7(VAR_42, VAR_18, VAR_3, 0xFF,
        (VAR_4 & VAR_6) |
        0x20);
 }

 if (!VAR_42->ft2_fast_mode)
  FUNC_7(VAR_42, VAR_18, VAR_30,
        VAR_31, 0);

 FUNC_7(VAR_42, VAR_18, VAR_1, VAR_32, 0);

 VAR_44 = FUNC_11(VAR_42, VAR_20, 100);
 if (VAR_44 < 0)
  return VAR_16;

 if (!VAR_42->ft2_fast_mode) {
  VAR_44 = FUNC_3(VAR_42, VAR_20);
  if (VAR_44 != VAR_17)
   return VAR_16;

  FUNC_13(250);

  FUNC_10(VAR_42);

  if (VAR_42->asic_code) {
   FUNC_15(VAR_42);
  } else {
   FUNC_7(VAR_42, VAR_18, VAR_3, 0xFF,
         (VAR_4 &
          VAR_5) |
         0x20);
  }

  VAR_44 = FUNC_11(VAR_42, VAR_20, 100);
  if (VAR_44 < 0)
   return VAR_16;

  VAR_44 = FUNC_4(VAR_42, VAR_20);
  if (VAR_44 != VAR_17)
   return VAR_16;
 }

 FUNC_10(VAR_42);

 if (VAR_42->ft2_fast_mode) {
  if (VAR_42->asic_code) {
   FUNC_15(VAR_42);
  } else {
   FUNC_7(VAR_42, VAR_18, VAR_3, 0xFF,
         (VAR_4 &
          VAR_5) |
         0x20);
  }
 }

 FUNC_7(VAR_42, VAR_18, VAR_1, VAR_32, VAR_32);
 FUNC_7(VAR_42, VAR_18, VAR_24, VAR_22, VAR_22);

 VAR_44 = FUNC_11(VAR_42, VAR_20, 100);
 if (VAR_44 < 0)
  return VAR_16;

 if (!VAR_42->ft2_fast_mode)
  FUNC_13(200);

 VAR_44 = FUNC_20(VAR_42);
 if (VAR_44 != VAR_17)
  return VAR_16;


 for (VAR_45 = 0; VAR_45 < 4; VAR_45++) {
  FUNC_10(VAR_42);

  FUNC_7(VAR_42, VAR_18, VAR_26, 0xFF,
        VAR_38 * 3 +
        VAR_37 * (2 + VAR_45) + VAR_36 * VAR_45);
  FUNC_7(VAR_42, VAR_18, VAR_21, 0xFF,
        VAR_38 * 3 +
        VAR_37 * (4 + VAR_45) +
        VAR_36 * (3 + VAR_45));

  FUNC_7(VAR_42, VAR_18, VAR_39, 0xFF,
        VAR_41 | VAR_35);
  FUNC_7(VAR_42, VAR_2, VAR_39,
        VAR_40, VAR_40);

  FUNC_7(VAR_42, VAR_12, VAR_25, 0, 0);
  FUNC_7(VAR_42, VAR_12, VAR_24, 0, 0);

  VAR_44 = FUNC_11(VAR_42, VAR_20, 100);
  if (VAR_44 < 0)
   return VAR_16;

  VAR_47 = FUNC_9(VAR_42) + 1;

  FUNC_6(FUNC_8(VAR_42), "XD_DAT: 0x%x, XD_CTL: 0x%x\n",
   VAR_47[0], VAR_47[1]);

  if (((VAR_47[0] & VAR_9) != VAR_10) ||
      !(VAR_47[1] & VAR_34))
   continue;

  VAR_44 = FUNC_18(VAR_42, VAR_11, VAR_48, 4);
  if (VAR_44 != VAR_17)
   return VAR_16;

  FUNC_6(FUNC_8(VAR_42), "READ_ID: 0x%x 0x%x 0x%x 0x%x\n",
   VAR_48[0], VAR_48[1], VAR_48[2], VAR_48[3]);

  VAR_43->device_code = VAR_48[1];


  switch (VAR_43->device_code) {
  case 134:
  case 133:
   VAR_43->block_shift = 4;
   VAR_43->page_off = 0x0F;
   VAR_43->addr_cycle = 3;
   VAR_43->zone_cnt = 1;
   VAR_43->capacity = 8000;
   FUNC_2(VAR_43);
   break;
  case 130:
   VAR_43->block_shift = 4;
   VAR_43->page_off = 0x0F;
   VAR_43->addr_cycle = 3;
   VAR_43->zone_cnt = 1;
   VAR_43->capacity = 16000;
   break;
  case 137:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 3;
   VAR_43->zone_cnt = 1;
   VAR_43->capacity = 32000;
   break;
  case 135:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 3;
   VAR_43->zone_cnt = 2;
   VAR_43->capacity = 64000;
   break;
  case 131:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 4;
   VAR_43->zone_cnt = 4;
   VAR_43->capacity = 128000;
   break;
  case 138:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 4;
   VAR_43->zone_cnt = 8;
   VAR_43->capacity = 256000;
   break;
  case 136:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 4;
   VAR_43->zone_cnt = 16;
   VAR_43->capacity = 512000;
   break;
  case 132:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 4;
   VAR_43->zone_cnt = 32;
   VAR_43->capacity = 1024000;
   break;
  case 129:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 4;
   VAR_43->zone_cnt = 64;
   VAR_43->capacity = 2048000;
   break;
  case 128:
   FUNC_1(VAR_43);
   VAR_43->addr_cycle = 4;
   VAR_43->zone_cnt = 128;
   VAR_43->capacity = 4096000;
   break;
  default:
   continue;
  }


  for (VAR_46 = 0; VAR_46 < 10; VAR_46++) {
   VAR_44 = FUNC_18(VAR_42, VAR_11, VAR_48, 4);
   if (VAR_44 != VAR_17)
    return VAR_16;

   if (VAR_48[1] != VAR_43->device_code)
    break;
  }

  if (VAR_46 == 10)
   break;
 }

 if (VAR_45 == 4) {
  VAR_43->block_shift = 0;
  VAR_43->page_off = 0;
  VAR_43->addr_cycle = 0;
  VAR_43->capacity = 0;

  return VAR_16;
 }

 VAR_44 = FUNC_18(VAR_42, VAR_13, VAR_48, 4);
 if (VAR_44 != VAR_17)
  return VAR_16;
 FUNC_6(FUNC_8(VAR_42), "READ_xD_ID: 0x%x 0x%x 0x%x 0x%x\n",
  VAR_48[0], VAR_48[1], VAR_48[2], VAR_48[3]);
 if (VAR_48[2] != VAR_29)
  return VAR_16;


 for (VAR_45 = 0; VAR_45 < 24; VAR_45++) {
  u32 VAR_50;

  if (FUNC_5(VAR_42, VAR_20) != VAR_17)
   return VAR_16;

  VAR_50 = (u32)VAR_45 << VAR_43->block_shift;

  for (VAR_46 = 0; VAR_46 < 3; VAR_46++) {
   VAR_44 = FUNC_19(VAR_42, VAR_50, VAR_49, 11);
   if (VAR_44 == VAR_17)
    break;
  }
  if (VAR_46 == 3)
   continue;

  if (VAR_49[VAR_0] != VAR_27)
   continue;

  VAR_46 = 0;
  if (VAR_49[VAR_7] != VAR_28) {
   for (VAR_46 = 1; VAR_46 <= 8; VAR_46++) {
    VAR_44 = FUNC_19(VAR_42, VAR_50 + VAR_46,
          VAR_49, 11);
    if (VAR_44 == VAR_17) {
     if (VAR_49[VAR_7] == VAR_28)
      break;
    }
   }

   if (VAR_46 == 9)
    break;
  }


  if ((VAR_49[VAR_0] == VAR_27) &&
      (VAR_49[VAR_8] & VAR_19)) {
   u8 VAR_51[10];

   VAR_50 += VAR_46;

   VAR_44 = FUNC_17(VAR_42, VAR_50, VAR_51, 10);
   if (VAR_44 != VAR_17)
    return VAR_16;

   if ((VAR_51[0] == 0x01) && (VAR_51[1] == 0x03) &&
       (VAR_51[2] == 0xD9) &&
       (VAR_51[3] == 0x01) && (VAR_51[4] == 0xFF) &&
       (VAR_51[5] == 0x18) && (VAR_51[6] == 0x02) &&
       (VAR_51[7] == 0xDF) && (VAR_51[8] == 0x01) &&
       (VAR_51[9] == 0x20)) {
    VAR_43->cis_block = (u16)VAR_45;
   }
  }

  break;
 }

 FUNC_6(FUNC_8(VAR_42), "CIS block: 0x%x\n", VAR_43->cis_block);
 if (VAR_43->cis_block == 0xFFFF)
  return VAR_16;

 VAR_42->capacity[VAR_42->card2lun[VAR_20]] = VAR_43->capacity;

 return VAR_17;
}
