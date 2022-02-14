
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_0(unsigned long VAR_3,
  unsigned long VAR_4, unsigned long *VAR_5)
{
 unsigned long VAR_6 = ~0UL;
 unsigned short VAR_7;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9;

 for (VAR_7 = VAR_2;
   VAR_7 <= VAR_1; VAR_7++) {
  VAR_9 = VAR_4 -
  (VAR_4 + (VAR_3 * VAR_7) / 2)
  / (VAR_3 * VAR_7) * VAR_3 * VAR_7;

  VAR_9 = (VAR_9 > 0) ? VAR_9 : -VAR_9;
  if (VAR_9 < VAR_6) {
   VAR_8 = (2 * VAR_4 /
    (VAR_3 * VAR_7) + 1) / 2 - 1;
   if (VAR_8 > VAR_0)
    continue;
   VAR_6 = VAR_9;
   *VAR_5 = VAR_7;
   if (!VAR_9)
    break;
  }
 }
 return VAR_8;
}
