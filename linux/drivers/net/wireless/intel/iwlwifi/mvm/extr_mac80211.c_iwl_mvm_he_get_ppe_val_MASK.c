
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static u8 FUNC_1(u8 *VAR_1, u8 VAR_2)
{
 u8 VAR_3 = VAR_2 / 8;
 u8 VAR_4 = VAR_2 % 8;
 u8 VAR_5;
 u8 VAR_6;

 if (VAR_4 <= 5)
  return (VAR_1[VAR_3] >> VAR_4) &
         (FUNC_0(VAR_0) - 1);







 VAR_5 = 8 - VAR_4;

 VAR_6 = (VAR_1[VAR_3 + 1] &
        (FUNC_0(VAR_0 - VAR_5) - 1)) <<
       VAR_5;
 VAR_6 += (VAR_1[VAR_3] >> VAR_4) & (FUNC_0(VAR_5) - 1);

 return VAR_6;
}
