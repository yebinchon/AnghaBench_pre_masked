
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct page*) ;

__attribute__((used)) static inline bool FUNC_2(struct page *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2))
  return 1;

 if (VAR_2 == 3 || VAR_2 == 4 + VAR_0 ||
   VAR_2 == 5 + 2 * VAR_0)
  return 0;
 if (VAR_2 >= 6 + 2 * VAR_0) {
  VAR_2 -= 6 + 2 * VAR_0;
  if (!((long int)VAR_2 % (VAR_0 + 1)))
   return 0;
 }
 return 1;
}
