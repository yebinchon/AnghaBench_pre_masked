
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;
 int FUNC_3 (struct rtsx_pcr*,int,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_pcr *VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_2) {
  VAR_5 = FUNC_3(VAR_3, 0x08, 0x57E4);
  if (VAR_5 < 0)
   return VAR_5;
 } else if (VAR_4 == VAR_1) {
  VAR_5 = FUNC_3(VAR_3, 0x11, 0x3C02);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_5 = FUNC_3(VAR_3, 0x08, 0x54A4);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  return -VAR_0;
 }


 FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_4);
 return FUNC_2(VAR_3, 100);
}
