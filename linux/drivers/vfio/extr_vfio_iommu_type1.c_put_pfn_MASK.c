
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long) ;
 struct page* FUNC_2 (unsigned long) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1, int VAR_2)
{
 if (!FUNC_1(VAR_1)) {
  struct page *VAR_3 = FUNC_2(VAR_1);
  if (VAR_2 & VAR_0)
   FUNC_0(VAR_3);
  FUNC_3(VAR_3);
  return 1;
 }
 return 0;
}
