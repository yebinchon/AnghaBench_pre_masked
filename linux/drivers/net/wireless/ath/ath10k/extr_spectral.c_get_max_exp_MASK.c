
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u16 ;
typedef int s8 ;



__attribute__((used)) static uint8_t FUNC_0(s8 VAR_0, u16 VAR_1, size_t VAR_2,
      u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = VAR_2 / 2;


 if (VAR_4 < VAR_0 || -VAR_4 >= VAR_0)
  return 0;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if (VAR_3[VAR_4 + VAR_0] == (VAR_1 >> VAR_5))
   break;
 }


 if (VAR_3[VAR_4 + VAR_0] != (VAR_1 >> VAR_5))
  return 0;

 return VAR_5;
}
