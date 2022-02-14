
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct extent_buffer {int refs; struct page** pages; } ;
struct TYPE_2__ {int i_pages; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct extent_buffer *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct page *VAR_4;

 VAR_3 = FUNC_8(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 = VAR_1->pages[VAR_2];
  if (!FUNC_1(VAR_4))
   continue;

  FUNC_7(VAR_4);
  FUNC_3(!FUNC_2(VAR_4));

  FUNC_6(VAR_4);
  FUNC_11(&VAR_4->mapping->i_pages);
  if (!FUNC_1(VAR_4))
   FUNC_4(&VAR_4->mapping->i_pages,
     FUNC_9(VAR_4), VAR_0);
  FUNC_12(&VAR_4->mapping->i_pages);
  FUNC_0(VAR_4);
  FUNC_10(VAR_4);
 }
 FUNC_3(FUNC_5(&VAR_1->refs) == 0);
}
