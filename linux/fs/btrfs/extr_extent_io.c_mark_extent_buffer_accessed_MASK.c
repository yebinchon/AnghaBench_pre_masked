
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct extent_buffer {struct page** pages; } ;


 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct extent_buffer*) ;

__attribute__((used)) static void FUNC_3(struct extent_buffer *VAR_0,
  struct page *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct page *VAR_4 = VAR_0->pages[VAR_3];

  if (VAR_4 != VAR_1)
   FUNC_1(VAR_4);
 }
}
