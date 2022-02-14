
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  if (VAR_0 <= VAR_1[VAR_3 + 1])
   break;
 }

 return FUNC_0(VAR_0, VAR_1[VAR_3], VAR_2[VAR_3],
  VAR_1[VAR_3 + 1], VAR_2[VAR_3 + 1]);
}
