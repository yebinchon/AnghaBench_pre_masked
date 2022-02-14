
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 char** VAR_4 ;

__attribute__((used)) static void FUNC_0(u32 VAR_5, u32 VAR_6, int VAR_7,
         int VAR_8, signed short *VAR_9,
         signed short VAR_10, signed short VAR_11)
{
 u16 VAR_12, VAR_13;


 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12)

  for (VAR_13 = 0; VAR_13 < VAR_1; ++VAR_13) {
   signed short *VAR_14;
   signed char VAR_15;


   if (VAR_7 + VAR_12 < 0 || VAR_7 + VAR_12 >= VAR_5 || VAR_8 + VAR_13 >= VAR_6)
    continue;
   VAR_14 = &VAR_9[(VAR_8 + VAR_13) * VAR_5 + VAR_7 + VAR_12];
   VAR_15 = VAR_4[VAR_12][VAR_13];
   if (-1 == VAR_15) {

    *VAR_14 = VAR_10;
   } else {
    signed short VAR_16 = *VAR_14 + VAR_11 * VAR_15;

    if (VAR_16 > VAR_3)
     VAR_16 = VAR_3;
    if (VAR_16 < VAR_0)
     VAR_16 = VAR_0;
    *VAR_14 = VAR_16;
   }
  }
}
