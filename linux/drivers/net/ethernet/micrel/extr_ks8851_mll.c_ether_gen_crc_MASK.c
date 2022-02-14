
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(int VAR_1, u8 *VAR_2)
{
 long VAR_3 = -1;
 while (--VAR_1 >= 0) {
  u8 VAR_4 = *VAR_2++;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++, VAR_4 >>= 1) {
   VAR_3 = (VAR_3 << 1) ^
    ((VAR_3 < 0) ^ (VAR_4 & 1) ?
   VAR_0 : 0);
  }
 }
 return (unsigned long)VAR_3;
}
