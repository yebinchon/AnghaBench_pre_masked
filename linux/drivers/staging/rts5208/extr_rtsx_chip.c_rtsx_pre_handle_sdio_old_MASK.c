
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int sd_int; int sd_io; int need_reset; scalar_t__ asic_code; scalar_t__ ignore_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*) ;
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
 int FUNC_1 (struct rtsx_chip*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_14)
{
 int VAR_15;

 if (VAR_14->ignore_sd && FUNC_0(VAR_14)) {
  if (VAR_14->asic_code) {
   VAR_15 = FUNC_1(VAR_14, VAR_0,
           0xFF,
           VAR_5 | VAR_12 |
           VAR_10 | VAR_11);
   if (VAR_15)
    return VAR_15;
  } else {
   VAR_15 = FUNC_1(VAR_14, VAR_3,
           0xFF,
           VAR_4);
   if (VAR_15)
    return VAR_15;
  }
  VAR_15 = FUNC_1(VAR_14, VAR_2, 0xFF,
          VAR_1);
  if (VAR_15)
   return VAR_15;


  VAR_15 = FUNC_1(VAR_14, 0xFF2C, 0x01, 0x01);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_1(VAR_14, VAR_8, 0xFF,
          VAR_6 | VAR_7);
  if (VAR_15)
   return VAR_15;

  VAR_14->sd_int = 1;
  VAR_14->sd_io = 1;
 } else {
  VAR_14->need_reset |= VAR_9;
 }

 return VAR_13;
}
