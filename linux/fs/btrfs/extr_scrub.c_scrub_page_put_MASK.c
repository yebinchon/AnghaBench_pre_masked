
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_page {scalar_t__ page; int refs; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct scrub_page*) ;

__attribute__((used)) static void FUNC_3(struct scrub_page *VAR_0)
{
 if (FUNC_1(&VAR_0->refs)) {
  if (VAR_0->page)
   FUNC_0(VAR_0->page);
  FUNC_2(VAR_0);
 }
}
