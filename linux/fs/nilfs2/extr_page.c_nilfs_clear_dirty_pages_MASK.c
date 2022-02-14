
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int) ;
 unsigned int FUNC_3 (struct pagevec*) ;
 int FUNC_4 (struct pagevec*) ;
 scalar_t__ FUNC_5 (struct pagevec*,struct address_space*,int *,int ) ;
 int FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct address_space *VAR_1, bool VAR_2)
{
 struct pagevec VAR_3;
 unsigned int VAR_4;
 pgoff_t VAR_5 = 0;

 FUNC_4(&VAR_3);

 while (FUNC_5(&VAR_3, VAR_1, &VAR_5,
     VAR_0)) {
  for (VAR_4 = 0; VAR_4 < FUNC_3(&VAR_3); VAR_4++) {
   struct page *VAR_6 = VAR_3.pages[VAR_4];

   FUNC_1(VAR_6);
   FUNC_2(VAR_6, VAR_2);
   FUNC_7(VAR_6);
  }
  FUNC_6(&VAR_3);
  FUNC_0();
 }
}
