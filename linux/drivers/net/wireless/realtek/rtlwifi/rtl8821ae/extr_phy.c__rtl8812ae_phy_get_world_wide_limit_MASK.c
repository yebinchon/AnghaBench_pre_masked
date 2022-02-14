
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ s8 ;


 size_t VAR_0 ;

__attribute__((used)) static s8 FUNC_0(s8 *VAR_1)
{
 s8 VAR_2 = VAR_1[0];
 u8 VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_1[VAR_3] < VAR_2)
   VAR_2 = VAR_1[VAR_3];
 }
 return VAR_2;
}
