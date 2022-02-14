
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int chip_insert_with_sdio; int sd_io; int need_reset; scalar_t__ asic_code; scalar_t__ driver_first_load; scalar_t__ sdio_in_charge; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int*) ;
 int FUNC_5 (struct rtsx_chip*,int,int,int) ;
 int FUNC_6 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_7(struct rtsx_chip *VAR_6)
{
 u8 VAR_7;
 bool VAR_8 = 0;
 int VAR_9;

 if (VAR_6->driver_first_load) {
  if (FUNC_0(VAR_6, 0x5288)) {
   VAR_9 = FUNC_4(VAR_6, 0xFE5A, &VAR_7);
   if (VAR_9)
    return VAR_9;
   if (VAR_7 & 0x08)
    VAR_8 = 1;
  } else if (FUNC_0(VAR_6, 0x5208)) {
   VAR_9 = FUNC_4(VAR_6, 0xFE70, &VAR_7);
   if (VAR_9)
    return VAR_9;
   if (VAR_7 & 0x80)
    VAR_8 = 1;
  }
 } else {
  if (VAR_6->sdio_in_charge)
   VAR_8 = 1;
 }
 FUNC_2(FUNC_3(VAR_6), "chip->sdio_in_charge = %d\n",
  VAR_6->sdio_in_charge);
 FUNC_2(FUNC_3(VAR_6), "chip->driver_first_load = %d\n",
  VAR_6->driver_first_load);
 FUNC_2(FUNC_3(VAR_6), "sw_bypass_sd = %d\n",
  VAR_8);

 if (VAR_8) {
  u8 VAR_10 = 0;

  VAR_9 = FUNC_4(VAR_6, VAR_5, &VAR_7);
  if (VAR_9)
   return VAR_9;
  VAR_10 = 0x08;

  if (VAR_7 & VAR_10) {

   if (FUNC_0(VAR_6, 0x5288)) {
    VAR_9 = FUNC_5(VAR_6, 0xFE5A,
            0x08, 0x00);
    if (VAR_9)
     return VAR_9;
   } else if (FUNC_0(VAR_6, 0x5208)) {
    VAR_9 = FUNC_5(VAR_6, 0xFE70,
            0x80, 0x00);
    if (VAR_9)
     return VAR_9;
   }

   VAR_9 = FUNC_5(VAR_6, VAR_5, 0xFF,
           VAR_7);
   if (VAR_9)
    return VAR_9;

   VAR_6->need_reset |= VAR_2;
  } else {
   FUNC_2(FUNC_3(VAR_6), "Chip inserted with SDIO!\n");

   if (VAR_6->asic_code) {
    VAR_9 = FUNC_6(VAR_6);
    if (VAR_9 != VAR_4)
     return VAR_3;
   } else {
    VAR_9 = FUNC_5
      (VAR_6, VAR_0,
       VAR_1 | 0x20,
       0);
    if (VAR_9)
     return VAR_9;
   }
   VAR_9 = FUNC_1(VAR_6, VAR_2);
   if (VAR_9 != VAR_4)
    return VAR_3;


   if (FUNC_0(VAR_6, 0x5288)) {
    VAR_9 = FUNC_5(VAR_6, 0xFE5A,
            0x08, 0x08);
    if (VAR_9)
     return VAR_9;
   } else if (FUNC_0(VAR_6, 0x5208)) {
    VAR_9 = FUNC_5(VAR_6, 0xFE70,
            0x80, 0x80);
    if (VAR_9)
     return VAR_9;
   }

   VAR_6->chip_insert_with_sdio = 1;
   VAR_6->sd_io = 1;
  }
 } else {
  VAR_9 = FUNC_5(VAR_6, VAR_5, 0x08, 0x08);
  if (VAR_9)
   return VAR_9;

  VAR_6->need_reset |= VAR_2;
 }

 return VAR_4;
}
