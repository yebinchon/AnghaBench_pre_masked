
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct sq_threshold_params {scalar_t__* upper_threshold; } ;
typedef scalar_t__ s16 ;



__attribute__((used)) static u8 FUNC_0(s16 VAR_0,
      struct sq_threshold_params *VAR_1,
      u32 VAR_2)
{
 u32 VAR_3;
 u8 VAR_4 = (u8) VAR_1->upper_threshold[VAR_2 - 1];


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0 < VAR_1->upper_threshold[VAR_3]) {
   VAR_4 = (u8) VAR_1->upper_threshold[VAR_3];
   break;
  }
 }

 return VAR_4;
}
