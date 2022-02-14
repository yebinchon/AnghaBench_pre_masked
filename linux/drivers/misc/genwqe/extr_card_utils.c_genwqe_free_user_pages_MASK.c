
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct page **VAR_0,
   unsigned int VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] != ((void*)0)) {
   if (VAR_2)
    FUNC_1(VAR_0[VAR_3]);
   FUNC_0(VAR_0[VAR_3]);
  }
 }
 return 0;
}
