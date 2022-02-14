
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct page*) ;

void FUNC_4(int VAR_0, struct page **VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_1(VAR_1[VAR_2])) {

   FUNC_2((void *)FUNC_3(VAR_1[VAR_2]));

   FUNC_0(VAR_1[VAR_2]);
  }
 }
}
