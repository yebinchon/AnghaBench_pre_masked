
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0,
         const unsigned char *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
  VAR_3 = FUNC_0((unsigned int)VAR_1[VAR_4] * VAR_2, 100);
  if (VAR_3 <= 0)
   VAR_3 = 1;
  if (VAR_3 > 255)
   VAR_3 = 255;
  VAR_0[VAR_4] = (unsigned char)VAR_3;
 }
}
