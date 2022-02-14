
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_pcr {int dummy; } ;


 int FUNC_0 (struct rtsx_pcr*,int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rtsx_pcr*,char*,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;
 int FUNC_5 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct rtsx_pcr *VAR_8, u8 VAR_9)
{
 int VAR_10;
 u16 VAR_11;

 switch (VAR_9) {
 case 128:
  VAR_10 = FUNC_5(VAR_8, VAR_3, VAR_7,
   VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
  break;
 case 129:
  VAR_11 = VAR_5;
  if (FUNC_0(VAR_8, 0x5249)) {
   VAR_10 = FUNC_5(VAR_8, VAR_1,
    VAR_2, 0);
   if (VAR_10 < 0)
    return VAR_10;
   VAR_11 = VAR_4;
  }

  VAR_10 = FUNC_5(VAR_8, VAR_3, VAR_7,
   VAR_11);
  if (VAR_10 < 0)
   return VAR_10;
  break;
 default:
  FUNC_1(VAR_8, "unknown output voltage %d\n", VAR_9);
  return -VAR_0;
 }


 FUNC_3(VAR_8);
 FUNC_2(VAR_8, VAR_9);
 return FUNC_4(VAR_8, 100);
}
