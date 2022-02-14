
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u8 FUNC_0(u32 VAR_0)
{
 u8 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 32; VAR_2 += 4)
  VAR_1 ^= ((VAR_0 >> VAR_2) & 0xF);

 return (VAR_1 & 0xF);
}
