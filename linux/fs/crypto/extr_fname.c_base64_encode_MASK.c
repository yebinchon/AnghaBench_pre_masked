
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 void** VAR_0 ;

__attribute__((used)) static int FUNC_0(const u8 *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 char *VAR_7 = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_6 += VAR_1[VAR_4] << VAR_5;
  VAR_5 += 8;
  do {
   *VAR_7++ = VAR_0[VAR_6 & 0x3f];
   VAR_6 >>= 6;
   VAR_5 -= 6;
  } while (VAR_5 >= 6);
 }
 if (VAR_5)
  *VAR_7++ = VAR_0[VAR_6 & 0x3f];
 return VAR_7 - VAR_3;
}
