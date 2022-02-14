
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sd_info {int sd_clock; int capacity; int raw_csd; int sd_addr; } ;
struct rtsx_chip {int card_wp; scalar_t__ asic_code; struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 int FUNC_1 (struct sd_info*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ,int ,int*,int) ;
 int FUNC_7 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_10, char VAR_11)
{
 struct sd_info *VAR_12 = &VAR_10->sd_card;
 int VAR_13;
 int VAR_14;
 u8 VAR_15, VAR_16;
 u8 VAR_17[16];

 for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
  if (FUNC_2(VAR_10, VAR_4) != VAR_9) {
   FUNC_7(VAR_10, VAR_5);
   return VAR_8;
  }

  VAR_13 = FUNC_6(VAR_10, VAR_7, VAR_12->sd_addr,
          VAR_6, VAR_17, 16);
  if (VAR_13 == VAR_9)
   break;
 }

 if (VAR_14 == 6)
  return VAR_8;

 FUNC_4(VAR_12->raw_csd, VAR_17 + 1, 15);

 FUNC_3(FUNC_5(VAR_10), "CSD Response:\n");
 FUNC_3(FUNC_5(VAR_10), "%*ph\n", 16, VAR_12->raw_csd);

 VAR_15 = (VAR_17[1] & 0xc0) >> 6;
 FUNC_3(FUNC_5(VAR_10), "csd_ver = %d\n", VAR_15);

 VAR_16 = VAR_17[4];
 if ((VAR_16 & 0x07) == 0x02) {
  if ((VAR_16 & 0xf8) >= 0x30) {
   if (VAR_10->asic_code)
    VAR_12->sd_clock = 47;
   else
    VAR_12->sd_clock = VAR_3;

  } else if ((VAR_16 & 0xf8) == 0x28) {
   if (VAR_10->asic_code)
    VAR_12->sd_clock = 39;
   else
    VAR_12->sd_clock = VAR_2;

  } else if ((VAR_16 & 0xf8) == 0x20) {
   if (VAR_10->asic_code)
    VAR_12->sd_clock = 29;
   else
    VAR_12->sd_clock = VAR_1;

  } else if ((VAR_16 & 0xf8) >= 0x10) {
   if (VAR_10->asic_code)
    VAR_12->sd_clock = 23;
   else
    VAR_12->sd_clock = VAR_0;

  } else if ((VAR_16 & 0x08) >= 0x08) {
   if (VAR_10->asic_code)
    VAR_12->sd_clock = 19;
   else
    VAR_12->sd_clock = VAR_0;
  } else {
   return VAR_8;
  }
 } else {
  return VAR_8;
 }

 if (FUNC_0(VAR_12)) {
  VAR_12->capacity = 0;
 } else {
  if ((!FUNC_1(VAR_12)) || (VAR_15 == 0)) {
   u8 VAR_18, VAR_19;
   u16 VAR_20;

   VAR_18 = VAR_17[6] & 0x0F;
   VAR_20 = ((u16)(VAR_17[7] & 0x03) << 10)
     + ((u16)VAR_17[8] << 2)
     + ((u16)(VAR_17[9] & 0xC0) >> 6);
   VAR_19 = (u8)((VAR_17[10] & 0x03) << 1);
   VAR_19 += (VAR_17[11] & 0x80) >> 7;
   VAR_12->capacity = (((u32)(VAR_20 + 1)) *
     (1 << (VAR_19 + 2)))
    << (VAR_18 - 9);
  } else {
   u32 VAR_21 = 0;

   VAR_21 = (((u32)VAR_17[8] & 0x3f) << 16) |
    ((u32)VAR_17[9] << 8) | (u32)VAR_17[10];
   VAR_12->capacity = (VAR_21 + 1) << 10;
  }
 }

 if (VAR_11) {
  if (VAR_17[15] & 0x30)
   VAR_10->card_wp |= VAR_4;

  FUNC_3(FUNC_5(VAR_10), "CSD WP Status: 0x%x\n", VAR_17[15]);
 }

 return VAR_9;
}
