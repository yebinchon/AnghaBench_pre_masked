
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 VAR_1)

{
 long VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  *VAR_0++ = (u8) (VAR_1 & 0xff);
  VAR_1 >>= 8;
 }
}
