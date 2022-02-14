
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_usb_sdmmc {unsigned char power_mode; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtsx_usb_sdmmc*) ;
 int FUNC_3 (struct rtsx_usb_sdmmc*) ;
 int FUNC_4 (struct rtsx_usb_sdmmc*) ;

__attribute__((used)) static int FUNC_5(struct rtsx_usb_sdmmc *VAR_2,
  unsigned char VAR_3)
{
 int VAR_4;

 if (VAR_3 != VAR_0)
  VAR_3 = VAR_1;

 if (VAR_3 == VAR_2->power_mode)
  return 0;

 if (VAR_3 == VAR_0) {
  VAR_4 = FUNC_2(VAR_2);
  FUNC_1(FUNC_4(VAR_2));
 } else {
  FUNC_0(FUNC_4(VAR_2));
  VAR_4 = FUNC_3(VAR_2);
 }

 if (!VAR_4)
  VAR_2->power_mode = VAR_3;

 return VAR_4;
}
