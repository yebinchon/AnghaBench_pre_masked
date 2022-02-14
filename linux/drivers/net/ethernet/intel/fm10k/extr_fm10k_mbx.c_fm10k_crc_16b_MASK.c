
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int* VAR_0 ;

__attribute__((used)) static u16 FUNC_0(const u32 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u32 VAR_4 = VAR_2;

 while (VAR_3--) {
  VAR_4 ^= *(VAR_1++);
  VAR_4 = (VAR_4 >> 8) ^ VAR_0[VAR_4 & 0xFF];
  VAR_4 = (VAR_4 >> 8) ^ VAR_0[VAR_4 & 0xFF];

  if (!(VAR_3--))
   break;

  VAR_4 = (VAR_4 >> 8) ^ VAR_0[VAR_4 & 0xFF];
  VAR_4 = (VAR_4 >> 8) ^ VAR_0[VAR_4 & 0xFF];
 }

 return (u16)VAR_4;
}
