
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dax_ctx {struct page*** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct dax_ctx *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_4; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   struct page *VAR_7 = VAR_2->pages[VAR_5][VAR_6];

   if (VAR_7) {
    FUNC_0("freeing page %p", VAR_7);
    if (VAR_6 == VAR_1)
     FUNC_2(VAR_7);
    FUNC_1(VAR_7);
    VAR_2->pages[VAR_5][VAR_6] = ((void*)0);
   }
  }
 }
}
