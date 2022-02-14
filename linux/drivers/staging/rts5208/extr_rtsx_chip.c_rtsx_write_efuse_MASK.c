
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
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct rtsx_chip *VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 u8 VAR_10 = 0, VAR_11 = 0xFF;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  if (VAR_6 & (u8)(1 << VAR_8))
   continue;

  VAR_11 &= (~(u8)(1 << VAR_8));
  FUNC_0(FUNC_1(VAR_4), "Write 0x%x to 0x%x\n", VAR_11, VAR_5);

  VAR_7 = FUNC_3(VAR_4, VAR_1, 0xFF, VAR_11);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_3(VAR_4, VAR_0, 0xFF,
          0xA0 | VAR_5);
  if (VAR_7)
   return VAR_7;

  for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
   VAR_7 = FUNC_2(VAR_4, VAR_0, &VAR_10);
   if (VAR_7)
    return VAR_7;
   if (!(VAR_10 & 0x80))
    break;
   FUNC_4(3);
  }

  if (VAR_10 & 0x80)
   return VAR_3;

  FUNC_4(5);
 }

 return VAR_2;
}
