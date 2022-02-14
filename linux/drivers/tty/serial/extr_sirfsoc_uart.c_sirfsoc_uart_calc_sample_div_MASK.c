
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned int VAR_4 ;
 unsigned short VAR_5 ;

__attribute__((used)) static unsigned int
FUNC_0(unsigned long VAR_6,
   unsigned long VAR_7, unsigned long *VAR_8)
{
 unsigned long VAR_9 = ~0UL;
 unsigned short VAR_10;
 unsigned int VAR_11 = 0;
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 for (VAR_10 = VAR_3;
   VAR_10 <= VAR_2; VAR_10++) {
  VAR_12 = (VAR_7 / (VAR_6 * (VAR_10 + 1))) - 1;
  if (VAR_12 > VAR_1)
   continue;
  VAR_13 = VAR_7 / ((VAR_12 + 1) * (VAR_10 + 1));
  VAR_14 = VAR_13 - VAR_6;
  VAR_14 = (VAR_14 > 0) ? VAR_14 : -VAR_14;
  if (VAR_14 < VAR_9) {
   VAR_11 = VAR_11 & (~VAR_0);
   VAR_11 = VAR_11 | VAR_12;
   VAR_11 = VAR_11 & (~VAR_4);
   VAR_11 = VAR_11 | (VAR_10 << VAR_5);
   VAR_9 = VAR_14;
   *VAR_8 = VAR_13;
  }
 }
 return VAR_11;
}
