
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 while (*VAR_0) {
  if (!FUNC_1(VAR_0[0]) || !FUNC_1(VAR_0[1]) || VAR_3 >= VAR_2)
   return -1;
  VAR_1[++VAR_3] = (FUNC_0(VAR_0[0]) << 4) + FUNC_0(VAR_0[1]);
  VAR_0 += 2;
 }
 VAR_1[0] = VAR_3;
 return VAR_3;
}
