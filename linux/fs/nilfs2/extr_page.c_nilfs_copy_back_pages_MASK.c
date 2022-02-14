
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {struct address_space* mapping; int index; } ;
struct address_space {int i_pages; int nrpages; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 struct page* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct page* FUNC_4 (int *,int ,struct page*,int ) ;
 int FUNC_5 () ;
 struct page* FUNC_6 (struct address_space*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,struct page*,int ) ;
 unsigned int FUNC_9 (struct pagevec*) ;
 int FUNC_10 (struct pagevec*) ;
 unsigned int FUNC_11 (struct pagevec*,struct address_space*,int *) ;
 int FUNC_12 (struct pagevec*) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct address_space *VAR_2,
      struct address_space *VAR_3)
{
 struct pagevec VAR_4;
 unsigned int VAR_5, VAR_6;
 pgoff_t VAR_7 = 0;

 FUNC_10(&VAR_4);
repeat:
 VAR_6 = FUNC_11(&VAR_4, VAR_3, &VAR_7);
 if (!VAR_6)
  return;

 for (VAR_5 = 0; VAR_5 < FUNC_9(&VAR_4); VAR_5++) {
  struct page *VAR_8 = VAR_4.pages[VAR_5], *VAR_9;
  pgoff_t VAR_10 = VAR_8->index;

  FUNC_7(VAR_8);
  VAR_9 = FUNC_6(VAR_2, VAR_10);
  if (VAR_9) {

   FUNC_1(FUNC_0(VAR_9));
   FUNC_8(VAR_9, VAR_8, 0);
   FUNC_15(VAR_9);
   FUNC_13(VAR_9);

  } else {
   struct page *VAR_11;


   FUNC_16(&VAR_3->i_pages);
   VAR_11 = FUNC_2(&VAR_3->i_pages, VAR_10);
   FUNC_1(VAR_8 != VAR_11);
   VAR_3->nrpages--;
   FUNC_17(&VAR_3->i_pages);

   FUNC_16(&VAR_2->i_pages);
   VAR_11 = FUNC_4(&VAR_2->i_pages, VAR_10, VAR_8, VAR_0);
   if (FUNC_14(VAR_11)) {

    VAR_8->mapping = ((void*)0);
    FUNC_13(VAR_8);
   } else {
    VAR_8->mapping = VAR_2;
    VAR_2->nrpages++;
    if (FUNC_0(VAR_8))
     FUNC_3(&VAR_2->i_pages, VAR_10,
       VAR_1);
   }
   FUNC_17(&VAR_2->i_pages);
  }
  FUNC_15(VAR_8);
 }
 FUNC_12(&VAR_4);
 FUNC_5();

 goto repeat;
}
