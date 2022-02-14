
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static u8 FUNC_0(u64 VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u32 VAR_5;

 if (VAR_2 >= VAR_1[11][7])
  return 96;

 for (VAR_3 = 0; VAR_3 < 12; VAR_3++) {
  if (VAR_3 <= 2 && (VAR_2 << VAR_0) <= VAR_1[VAR_3][7])
   break;
  else if (VAR_3 > 2 && VAR_2 <= VAR_1[VAR_3][7])
   break;
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (VAR_3 <= 2 && (VAR_2 << VAR_0) <= VAR_1[VAR_3][VAR_4])
   break;
  else if (VAR_3 > 2 && VAR_2 <= VAR_1[VAR_3][VAR_4])
   break;
 }

 if (VAR_4 == 0 && VAR_3 == 0)
  goto end;

 if (VAR_4 == 0) {
  if (VAR_3 != 3) {
   if (VAR_1[VAR_3][0] - VAR_2 >
       VAR_2 - VAR_1[VAR_3 - 1][7]) {
    VAR_3 = VAR_3 - 1;
    VAR_4 = 7;
   }
  } else {
   if (VAR_1[3][0] - VAR_2 >
       VAR_2 - VAR_1[2][7]) {
    VAR_3 = 2;
    VAR_4 = 7;
   }
  }
 } else {
  if (VAR_1[VAR_3][VAR_4] - VAR_2 >
      VAR_2 - VAR_1[VAR_3][VAR_4 - 1]) {
   VAR_4 = VAR_4 - 1;
  }
 }
end:
 VAR_5 = (VAR_3 << 3) + VAR_4 + 1;

 return VAR_5;
}
