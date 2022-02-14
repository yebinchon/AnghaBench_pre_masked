
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 char const* VAR_0 ;
 char* FUNC_0 (char const*,char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, int VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 const char *VAR_7;
 u8 *VAR_8 = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_7 = FUNC_0(VAR_0, VAR_1[VAR_4]);
  if (VAR_7 == ((void*)0) || VAR_1[VAR_4] == 0)
   return -2;
  VAR_6 += (VAR_7 - VAR_0) << VAR_5;
  VAR_5 += 6;
  if (VAR_5 >= 8) {
   *VAR_8++ = VAR_6 & 0xff;
   VAR_6 >>= 8;
   VAR_5 -= 8;
  }
 }
 if (VAR_6)
  return -1;
 return VAR_8 - VAR_3;
}
