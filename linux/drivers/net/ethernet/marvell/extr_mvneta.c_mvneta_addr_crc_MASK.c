
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  int VAR_4;

  VAR_2 = (VAR_2 ^ VAR_1[VAR_3]) << 8;
  for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
   if (VAR_2 & (0x100 << VAR_4))
    VAR_2 ^= 0x107 << VAR_4;
  }
 }

 return VAR_2;
}
