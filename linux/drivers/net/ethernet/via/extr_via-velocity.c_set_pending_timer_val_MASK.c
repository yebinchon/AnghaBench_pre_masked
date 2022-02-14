
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(int *VAR_0, u32 VAR_1)
{
 u8 VAR_2 = 0;
 u8 VAR_3 = 0;

 if (VAR_1 >= 0x3f) {
  VAR_2 = 1;
  VAR_3 = 2;
 }
 if (VAR_1 >= 0x3f * 4) {
  VAR_2 = 2;
  VAR_3 = 4;
 }
 if (VAR_1 >= 0x3f * 16) {
  VAR_2 = 3;
  VAR_3 = 6;
 }

 *VAR_0 = (VAR_2 << 6) | ((VAR_1 >> VAR_3) & 0x3f);
}
