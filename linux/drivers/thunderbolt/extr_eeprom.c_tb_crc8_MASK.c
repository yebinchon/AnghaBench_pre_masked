
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 u8 VAR_4 = 0xff;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_4 ^= VAR_0[VAR_2];
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   VAR_4 = (VAR_4 << 1) ^ ((VAR_4 & 0x80) ? 7 : 0);
 }
 return VAR_4;
}
