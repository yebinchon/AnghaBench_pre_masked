
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct extent_buffer {struct page** pages; int bflags; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct extent_buffer*) ;

void FUNC_3(struct extent_buffer *VAR_1)
{
 int VAR_2;
 struct page *VAR_3;
 int VAR_4;

 FUNC_1(VAR_0, &VAR_1->bflags);
 VAR_4 = FUNC_2(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_3 = VAR_1->pages[VAR_2];
  if (VAR_3)
   FUNC_0(VAR_3);
 }
}
