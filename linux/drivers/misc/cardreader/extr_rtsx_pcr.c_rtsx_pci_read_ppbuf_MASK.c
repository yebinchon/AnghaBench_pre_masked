
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int ,int ) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;

int FUNC_5(struct rtsx_pcr *VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;
 u16 VAR_8;
 u8 *VAR_9;

 if (VAR_4 > 512)
  VAR_4 = 512;

 VAR_9 = VAR_3;
 VAR_8 = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4 / 256; VAR_6++) {
  FUNC_3(VAR_2);

  for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
   FUNC_1(VAR_2, VAR_1, VAR_8++, 0, 0);

  VAR_5 = FUNC_4(VAR_2, 250);
  if (VAR_5 < 0)
   return VAR_5;

  FUNC_0(VAR_9, FUNC_2(VAR_2), 256);
  VAR_9 += 256;
 }

 if (VAR_4 % 256) {
  FUNC_3(VAR_2);

  for (VAR_7 = 0; VAR_7 < VAR_4 % 256; VAR_7++)
   FUNC_1(VAR_2, VAR_1, VAR_8++, 0, 0);

  VAR_5 = FUNC_4(VAR_2, 250);
  if (VAR_5 < 0)
   return VAR_5;
 }

 FUNC_0(VAR_9, FUNC_2(VAR_2), VAR_4 % 256);

 return 0;
}
