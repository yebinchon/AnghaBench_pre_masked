
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u8 FUNC_0(u8 *VAR_0, u32 VAR_1, u8 VAR_2)
{
 u32 VAR_3 = VAR_2;
 u8 *VAR_4 = (u8 *)&VAR_3;

 while (VAR_1) {
  if (((uintptr_t)VAR_0 & 3) == 0)
   break;

  VAR_3 = VAR_3 ^ *VAR_0;
  VAR_0++;
  VAR_1--;
 }
 while (VAR_1 >= sizeof(u32)) {
  VAR_3 = VAR_3 ^ *(u32 *)VAR_0;
  VAR_0 += 4;
  VAR_1 -= 4;
 }
 while (VAR_1--) {
  VAR_3 = VAR_3 ^ *VAR_0;
  VAR_0++;
 }
 return VAR_4[0] ^ VAR_4[1] ^ VAR_4[2] ^ VAR_4[3];
}
