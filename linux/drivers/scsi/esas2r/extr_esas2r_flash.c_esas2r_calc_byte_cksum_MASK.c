
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;



__attribute__((used)) static u8 FUNC_0(void *VAR_0, u32 VAR_1, u8 VAR_2)
{
 u8 *VAR_3 = (u8 *)VAR_0;
 u8 VAR_4 = VAR_2;

 while (VAR_1--)
  VAR_4 = VAR_4 + VAR_3[VAR_1];
 return VAR_4;
}
