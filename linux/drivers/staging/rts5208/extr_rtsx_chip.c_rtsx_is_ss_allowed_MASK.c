
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_chip {int ss_en; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int,int,int*) ;

__attribute__((used)) static bool FUNC_4(struct rtsx_chip *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0->ss_en || FUNC_0(VAR_0, 0x5288))
  return 0;

 if (FUNC_1(VAR_0) && !FUNC_2(VAR_0)) {
  FUNC_3(VAR_0, 1, 0x04, &VAR_1);
  if (VAR_1 & 0x07)
   return 0;
 }

 return 1;
}
