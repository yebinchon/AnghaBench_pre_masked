
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int*) ;
 int FUNC_3 (struct rtsx_pcr*,int) ;

int FUNC_4(struct rtsx_pcr *VAR_6, u8 VAR_7, u16 VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 u8 VAR_12;

 FUNC_1(VAR_6);

 FUNC_0(VAR_6, VAR_5, VAR_2, 0xFF, (u8)VAR_8);
 FUNC_0(VAR_6, VAR_5, VAR_3, 0xFF, (u8)(VAR_8 >> 8));
 FUNC_0(VAR_6, VAR_5, VAR_1, 0xFF, VAR_7);
 FUNC_0(VAR_6, VAR_5, VAR_4, 0xFF, 0x81);

 VAR_9 = FUNC_3(VAR_6, 100);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < 100000; VAR_10++) {
  VAR_9 = FUNC_2(VAR_6, VAR_4, &VAR_12);
  if (VAR_9 < 0)
   return VAR_9;

  if (!(VAR_12 & 0x80)) {
   VAR_11 = 1;
   break;
  }
 }

 if (!VAR_11)
  return -VAR_0;

 return 0;
}
