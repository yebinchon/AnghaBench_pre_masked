
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pll_values {int div_r0; int div_f0; int div_q0; int div_r1; int div_f1; int div_q1; void* range1; void* range0; } ;


 int FUNC_0 (int const) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const u32 VAR_0, struct pll_values *VAR_1)
{
 const u32 VAR_2 = 25000000;
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = VAR_0;

 for (VAR_3 = 1; VAR_3 <= 32; VAR_3++) {
  u32 VAR_10 = VAR_2 / VAR_3;
  if (VAR_10 < 5000000)
   break;

  if (VAR_10 > 200000000)
   continue;

  for (VAR_4 = 1; VAR_4 <= 256; VAR_4++) {
   u32 VAR_11 = VAR_10 * VAR_4;

   if (VAR_11 < 350000000)
    continue;

   if (VAR_11 > 700000000)
    break;

   for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
    u32 VAR_12 = VAR_11 / (1 << VAR_5);

    if (VAR_12 < 5000000)
     break;

    if (VAR_12 > 200000000)
     continue;

    for (VAR_6 = 1; VAR_6 <= 32; VAR_6++) {
     u32 VAR_13 = VAR_12 / VAR_6;

     if (VAR_13 < 5000000)
      break;

     for (VAR_7 = 1; VAR_7 <= 256; VAR_7++) {
      u32 VAR_14 = VAR_13 * VAR_7;

      if (VAR_14 < 350000000)
       continue;

      if (VAR_14 > 700000000)
       break;

      for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
       u32 VAR_15 = VAR_14 / (1 << VAR_8);
       int VAR_16 = FUNC_0(VAR_15 - VAR_0);

       if (VAR_15 < 5000000)
        break;

       if (VAR_15 > 700000000)
        continue;

       if (VAR_16 < VAR_9) {
        VAR_9 = VAR_16;



        VAR_1->div_r0 = VAR_3 - 1;
        VAR_1->div_f0 = VAR_4 - 1;
        VAR_1->div_q0 = VAR_5;
        VAR_1->div_r1 = VAR_6 - 1;
        VAR_1->div_f1 = VAR_7 - 1;
        VAR_1->div_q1 = VAR_8;

        VAR_1->range0 = FUNC_1(VAR_10);
        VAR_1->range1 = FUNC_1(VAR_13);

        if (VAR_9 == 0)
         return;
       }
      }
     }
    }
   }
  }
 }
}
