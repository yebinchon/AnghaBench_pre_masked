
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int ,int ) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int) ;

int FUNC_5(struct rtsx_chip *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10;
 u16 VAR_11;
 u8 *VAR_12;

 if (!VAR_6)
  return VAR_2;

 VAR_12 = VAR_6;
 VAR_11 = VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_7 / 256; VAR_9++) {
  FUNC_3(VAR_5);

  for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
   FUNC_1(VAR_5, VAR_1, VAR_11++, 0, 0);

  VAR_8 = FUNC_4(VAR_5, 0, 250);
  if (VAR_8 < 0)
   return VAR_3;

  FUNC_0(VAR_12, FUNC_2(VAR_5), 256);
  VAR_12 += 256;
 }

 if (VAR_7 % 256) {
  FUNC_3(VAR_5);

  for (VAR_10 = 0; VAR_10 < VAR_7 % 256; VAR_10++)
   FUNC_1(VAR_5, VAR_1, VAR_11++, 0, 0);

  VAR_8 = FUNC_4(VAR_5, 0, 250);
  if (VAR_8 < 0)
   return VAR_3;
 }

 FUNC_0(VAR_12, FUNC_2(VAR_5), VAR_7 % 256);

 return VAR_4;
}
