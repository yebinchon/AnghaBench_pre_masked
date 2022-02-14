
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1, u32 VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 u8 VAR_7 = 0;

 do {

  VAR_5 = VAR_0 + FUNC_0(VAR_3[VAR_7], 8);


  if (VAR_1 < VAR_4 + VAR_5 + VAR_6)
   break;

  VAR_4 += VAR_5;
 } while (++VAR_7 < VAR_2);

 return VAR_4 + VAR_6;
}
