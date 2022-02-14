
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;


 unsigned int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(u8 VAR_3, u8 VAR_4)
{
 unsigned int VAR_5;


 u16 VAR_6 = VAR_1[VAR_3];
 u16 VAR_7 = VAR_1[VAR_4];





 u8 VAR_8 = 128;


 if (VAR_7 <= VAR_6)
  if (VAR_6) {
   VAR_8 = VAR_7 * 128 / VAR_6;


   VAR_5 = ((VAR_6 - VAR_7) * VAR_2[VAR_8]) / 256;
  } else
   VAR_5 = 0;
 else
  return 0;


 return VAR_5 > VAR_0 ? VAR_0 : VAR_5;
}
