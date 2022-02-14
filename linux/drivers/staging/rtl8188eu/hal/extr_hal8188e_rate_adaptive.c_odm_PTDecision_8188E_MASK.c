
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct odm_ra_info {int TOTAL; int* RTY; int PTStage; int PTSmoothFactor; int DROP; } ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct odm_ra_info *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u8 VAR_6;

 VAR_4 = 0;
 VAR_5 = VAR_1->TOTAL * VAR_0[5];
 for (VAR_2 = 0; VAR_2 <= 4; VAR_2++) {
  VAR_4 += VAR_1->RTY[VAR_2] * VAR_0[VAR_2];
  if (VAR_4 > VAR_5)
   break;
 }

 VAR_2 >>= 1;
 VAR_3 = (VAR_1->PTStage + 1) >> 1;
 if (VAR_3 > VAR_2)
  VAR_6 = VAR_3 - VAR_2;
 else
  VAR_6 = 0;

 VAR_1->PTSmoothFactor = (VAR_1->PTSmoothFactor >> 1) +
      (VAR_1->PTSmoothFactor >> 2) +
      VAR_6 * 16 + 2;
 if (VAR_1->PTSmoothFactor > 192)
  VAR_1->PTSmoothFactor = 192;
 VAR_6 = VAR_1->PTSmoothFactor >> 6;
 VAR_3 = VAR_6 * 2;
 if (VAR_3 != 0)
  VAR_3 -= 1;
 if (VAR_1->DROP > 3)
  VAR_3 = 0;
 VAR_1->PTStage = VAR_3;
}
