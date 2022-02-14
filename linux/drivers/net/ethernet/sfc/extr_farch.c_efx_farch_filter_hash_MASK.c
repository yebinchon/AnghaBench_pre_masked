
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u32 VAR_0)
{
 u16 VAR_1;


 VAR_1 = 0x1fff ^ VAR_0 >> 16;
 VAR_1 = VAR_1 ^ VAR_1 >> 3 ^ VAR_1 >> 6;
 VAR_1 = VAR_1 ^ VAR_1 >> 9;

 VAR_1 = VAR_1 ^ VAR_1 << 13 ^ VAR_0;
 VAR_1 = VAR_1 ^ VAR_1 >> 3 ^ VAR_1 >> 6;
 return VAR_1 ^ VAR_1 >> 9;
}
