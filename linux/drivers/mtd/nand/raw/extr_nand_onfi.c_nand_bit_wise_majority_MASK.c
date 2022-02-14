
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const void **VAR_0,
       unsigned int VAR_1,
       void *VAR_2,
       unsigned int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u8 VAR_7 = 0;

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   unsigned int VAR_8 = 0;

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    const u8 *VAR_9 = VAR_0[VAR_6];

    if (VAR_9[VAR_4] & FUNC_0(VAR_5))
     VAR_8++;
   }

   if (VAR_8 > VAR_1 / 2)
    VAR_7 |= FUNC_0(VAR_5);
  }

  ((u8 *)VAR_2)[VAR_4] = VAR_7;
 }
}
