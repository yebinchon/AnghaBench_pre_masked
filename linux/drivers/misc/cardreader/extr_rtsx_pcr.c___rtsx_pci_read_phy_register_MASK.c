
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
 int VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int* FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;

int FUNC_5(struct rtsx_pcr *VAR_7, u8 VAR_8, u16 *VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 0;
 u16 VAR_13;
 u8 *VAR_14, VAR_15;

 FUNC_2(VAR_7);

 FUNC_0(VAR_7, VAR_6, VAR_1, 0xFF, VAR_8);
 FUNC_0(VAR_7, VAR_6, VAR_4, 0xFF, 0x80);

 VAR_10 = FUNC_4(VAR_7, 100);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < 100000; VAR_11++) {
  VAR_10 = FUNC_3(VAR_7, VAR_4, &VAR_15);
  if (VAR_10 < 0)
   return VAR_10;

  if (!(VAR_15 & 0x80)) {
   VAR_12 = 1;
   break;
  }
 }

 if (!VAR_12)
  return -VAR_0;

 FUNC_2(VAR_7);

 FUNC_0(VAR_7, VAR_5, VAR_2, 0, 0);
 FUNC_0(VAR_7, VAR_5, VAR_3, 0, 0);

 VAR_10 = FUNC_4(VAR_7, 100);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_14 = FUNC_1(VAR_7);
 VAR_13 = ((u16)VAR_14[1] << 8) | VAR_14[0];

 if (VAR_9)
  *VAR_9 = VAR_13;

 return 0;
}
