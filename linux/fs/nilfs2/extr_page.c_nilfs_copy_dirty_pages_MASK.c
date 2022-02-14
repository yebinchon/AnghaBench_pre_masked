
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int index; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (struct address_space*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,struct page*,int) ;
 int FUNC_8 (struct page*) ;
 unsigned int FUNC_9 (struct pagevec*) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct pagevec*,struct address_space*,int *,int ) ;
 int FUNC_12 (struct pagevec*) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct page*) ;

int FUNC_16(struct address_space *VAR_2,
      struct address_space *VAR_3)
{
 struct pagevec VAR_4;
 unsigned int VAR_5;
 pgoff_t VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_10(&VAR_4);
repeat:
 if (!FUNC_11(&VAR_4, VAR_3, &VAR_6, VAR_1))
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_9(&VAR_4); VAR_5++) {
  struct page *VAR_8 = VAR_4.pages[VAR_5], *VAR_9;

  FUNC_6(VAR_8);
  if (FUNC_14(!FUNC_1(VAR_8)))
   FUNC_0(VAR_8, "inconsistent dirty state");

  VAR_9 = FUNC_4(VAR_2, VAR_8->index);
  if (FUNC_14(!VAR_9)) {

   VAR_7 = -VAR_0;
   FUNC_15(VAR_8);
   break;
  }
  if (FUNC_14(!FUNC_8(VAR_8)))
   FUNC_0(VAR_8,
           "found empty page in dat page cache");

  FUNC_7(VAR_9, VAR_8, 1);
  FUNC_2(VAR_9);

  FUNC_15(VAR_9);
  FUNC_13(VAR_9);
  FUNC_15(VAR_8);
 }
 FUNC_12(&VAR_4);
 FUNC_3();

 if (FUNC_5(!VAR_7))
  goto repeat;
 return VAR_7;
}
