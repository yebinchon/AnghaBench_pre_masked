
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tg3*,int,int*) ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 VAR_6->nvram_size = VAR_0;

 if (FUNC_0(VAR_6, 0, &VAR_9) != 0)
  return;

 if ((VAR_9 != VAR_1) &&
     ((VAR_9 & VAR_3) != VAR_2) &&
     ((VAR_9 & VAR_5) != VAR_4))
  return;






 VAR_7 = 0x10;

 while (VAR_7 < VAR_6->nvram_size) {
  if (FUNC_0(VAR_6, VAR_7, &VAR_8) != 0)
   return;

  if (VAR_8 == VAR_9)
   break;

  VAR_7 <<= 1;
 }

 VAR_6->nvram_size = VAR_7;
}
