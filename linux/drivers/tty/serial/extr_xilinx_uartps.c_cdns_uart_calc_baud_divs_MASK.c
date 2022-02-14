
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3,
  unsigned int VAR_4, u32 *VAR_5, u32 *VAR_6, int *VAR_7)
{
 u32 VAR_8, VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;
 unsigned int VAR_13 = ~0;

 if (VAR_4 < VAR_3 / ((VAR_0 + 1) * VAR_2)) {
  *VAR_7 = 1;
  VAR_3 /= 8;
 } else {
  *VAR_7 = 0;
 }

 for (VAR_9 = VAR_1; VAR_9 <= VAR_0; VAR_9++) {
  VAR_8 = FUNC_0(VAR_3, VAR_4 * (VAR_9 + 1));
  if (VAR_8 < 1 || VAR_8 > VAR_2)
   continue;

  VAR_10 = VAR_3 / (VAR_8 * (VAR_9 + 1));

  if (VAR_4 > VAR_10)
   VAR_12 = VAR_4 - VAR_10;
  else
   VAR_12 = VAR_10 - VAR_4;

  if (VAR_13 > VAR_12) {
   *VAR_5 = VAR_9;
   *VAR_6 = VAR_8;
   VAR_11 = VAR_10;
   VAR_13 = VAR_12;
  }
 }

 if (((VAR_13 * 100) / VAR_4) < 3)
  VAR_11 = VAR_4;

 return VAR_11;
}
