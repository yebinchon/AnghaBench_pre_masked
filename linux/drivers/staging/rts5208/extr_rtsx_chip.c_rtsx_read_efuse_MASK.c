
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_chip*,int ,int*) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct rtsx_chip *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 int VAR_7;
 int VAR_8;
 u8 VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_4, VAR_0, 0xFF, 0x80 | VAR_5);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_9);
  if (VAR_7)
   return VAR_7;
  if (!(VAR_9 & 0x80))
   break;
  FUNC_2(1);
 }

 if (VAR_9 & 0x80)
  return VAR_3;

 VAR_7 = FUNC_0(VAR_4, VAR_1, &VAR_9);
 if (VAR_7)
  return VAR_7;
 if (VAR_6)
  *VAR_6 = VAR_9;

 return VAR_2;
}
