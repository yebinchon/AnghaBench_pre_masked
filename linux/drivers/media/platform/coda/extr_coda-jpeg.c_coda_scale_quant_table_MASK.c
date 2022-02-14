
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
  VAR_2 = FUNC_0((unsigned int)VAR_0[VAR_3] * VAR_1, 100);
  if (VAR_2 <= 0)
   VAR_2 = 1;
  if (VAR_2 > 255)
   VAR_2 = 255;
  VAR_0[VAR_3] = (unsigned char)VAR_2;
 }
}
