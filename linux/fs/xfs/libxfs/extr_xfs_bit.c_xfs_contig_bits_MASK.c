
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

int
FUNC_2(uint *VAR_2, uint VAR_3, uint VAR_4)
{
 uint * VAR_5 = ((unsigned int *) VAR_2) + (VAR_4 >> VAR_0);
 uint VAR_6 = 0;
 uint VAR_7;

 VAR_3 <<= VAR_0;

 FUNC_0(VAR_4 < VAR_3);
 VAR_3 -= VAR_4 & ~(VAR_1 - 1);
 VAR_4 &= (VAR_1 - 1);
 if (VAR_4) {
  VAR_7 = *VAR_5++;

  VAR_7 |= (~0U >> (VAR_1-VAR_4));
  if (VAR_7 != ~0U)
   goto found;
  VAR_6 += VAR_1;
  VAR_3 -= VAR_1;
 }
 while (VAR_3) {
  if ((VAR_7 = *VAR_5++) != ~0U)
   goto found;
  VAR_6 += VAR_1;
  VAR_3 -= VAR_1;
 }
 return VAR_6 - VAR_4;
found:
 return VAR_6 + FUNC_1(VAR_7) - VAR_4;
}
