
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int) ;

bool FUNC_5(struct ath_hw *VAR_2)
{
 int VAR_3 = 50;
 u32 VAR_4, VAR_5;


 if (FUNC_2(VAR_2, VAR_0) == 0xdeadbeef)
  return 0;

 if (FUNC_1(VAR_2))
  return !FUNC_3(VAR_2);

 if (FUNC_0(VAR_2))
  return 1;

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 do {
  VAR_4 = FUNC_2(VAR_2, VAR_1);
  if (VAR_4 != VAR_5)
   return 1;

  FUNC_4(1);
  VAR_5 = VAR_4;
  if ((VAR_4 & 0x7E7FFFEF) == 0x00702400)
   continue;

  switch (VAR_4 & 0x7E000B00) {
  case 0x1E000000:
  case 0x52000B00:
  case 0x18000B00:
   continue;
  default:
   return 1;
  }
 } while (VAR_3-- > 0);

 return 0;
}
