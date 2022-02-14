
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct rtsx_usb_sdmmc {int ucr; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int ,int,unsigned char const) ;

__attribute__((used)) static int FUNC_1(struct rtsx_usb_sdmmc *VAR_1,
  unsigned char VAR_2)
{
 int VAR_3 = 0;
 static const u8 VAR_4[] = {
  [133] = 130,
  [132] = 129,
  [131] = 128,
 };

 if (VAR_2 <= 131)
  VAR_3 = FUNC_0(VAR_1->ucr, VAR_0,
    0x03, VAR_4[VAR_2]);

 return VAR_3;
}
