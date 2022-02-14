
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtsx_usb_sdmmc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct rtsx_usb_sdmmc*) ;

__attribute__((used)) static u8 FUNC_3(struct rtsx_usb_sdmmc *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0;
 u8 VAR_7 = 0xFF;

 if (VAR_2 == 0) {
  FUNC_0(FUNC_2(VAR_1), "Phase: [map:%x]\n", VAR_2);
  return VAR_7;
 }

 while (VAR_3 < VAR_0 + 1) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_6 < VAR_4) {
   VAR_5 = VAR_3;
   VAR_6 = VAR_4;
  }
  VAR_3 += VAR_4 ? VAR_4 : 1;
 }

 VAR_7 = (VAR_5 + VAR_6 / 2) & VAR_0;
 FUNC_0(FUNC_2(VAR_1), "Phase: [map:%x] [maxlen:%d] [final:%d]\n",
  VAR_2, VAR_6, VAR_7);

 return VAR_7;
}
