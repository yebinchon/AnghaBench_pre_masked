
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*) ;
 struct page* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(unsigned long VAR_0)
{
 if (FUNC_4(VAR_0)) {
  bool VAR_1;
  struct page *VAR_2 = FUNC_3(VAR_0);
  struct page *VAR_3 = FUNC_2(VAR_2);
  VAR_1 = !!(FUNC_0(VAR_3));
  if (VAR_3 != VAR_2) {
   FUNC_5();
   if (FUNC_1(VAR_2))
    return VAR_1;
  }
  return FUNC_0(VAR_2);
 }

 return 1;
}
