
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned char*) ;

__attribute__((used)) static unsigned long FUNC_3(const unsigned long *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3)
{
 const unsigned long *VAR_4 = VAR_1 + FUNC_0(VAR_3);
 unsigned long VAR_5 = VAR_2;
 unsigned long VAR_6;

 if (VAR_3 >= VAR_2)
  return VAR_2;

 VAR_2 -= (VAR_3 & ~(VAR_0 - 1));
 VAR_3 %= VAR_0;

 while (1) {
  if (*VAR_4 == 0)
   goto pass;

  VAR_6 = FUNC_2((unsigned char *)VAR_4);

  VAR_6 &= ~0UL >> VAR_3;
  if (VAR_2 < VAR_0)
   VAR_6 &= (~0UL << (VAR_0 - VAR_2));
  if (VAR_6)
   goto found;
pass:
  if (VAR_2 <= VAR_0)
   break;
  VAR_2 -= VAR_0;
  VAR_3 = 0;
  VAR_4++;
 }
 return VAR_5;
found:
 return VAR_5 - VAR_2 + FUNC_1(VAR_6);
}
