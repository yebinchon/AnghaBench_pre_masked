
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; int range_cyclic; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct cifs_writedata {struct page** pages; } ;
struct address_space {int host; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static unsigned int
FUNC_12(struct cifs_writedata *VAR_1, unsigned int VAR_2,
      struct address_space *VAR_3,
      struct writeback_control *VAR_4,
      pgoff_t VAR_5, pgoff_t *VAR_6, pgoff_t *VAR_7, bool *VAR_8)
{
 unsigned int VAR_9 = 0, VAR_10;
 struct page *VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_11 = VAR_1->pages[VAR_10];







  if (VAR_9 == 0)
   FUNC_4(VAR_11);
  else if (!FUNC_8(VAR_11))
   break;

  if (FUNC_9(VAR_11->mapping != VAR_3)) {
   FUNC_10(VAR_11);
   break;
  }

  if (!VAR_4->range_cyclic && VAR_11->index > VAR_5) {
   *VAR_8 = 1;
   FUNC_10(VAR_11);
   break;
  }

  if (*VAR_7 && (VAR_11->index != *VAR_7)) {

   FUNC_10(VAR_11);
   break;
  }

  if (VAR_4->sync_mode != VAR_0)
   FUNC_11(VAR_11);

  if (FUNC_0(VAR_11) ||
    !FUNC_1(VAR_11)) {
   FUNC_10(VAR_11);
   break;
  }





  FUNC_7(VAR_11);
  if (FUNC_5(VAR_11) >= FUNC_3(VAR_3->host)) {
   *VAR_8 = 1;
   FUNC_10(VAR_11);
   FUNC_2(VAR_11);
   break;
  }

  VAR_1->pages[VAR_10] = VAR_11;
  *VAR_7 = VAR_11->index + 1;
  ++VAR_9;
 }


 if (VAR_9 == 0)
  *VAR_6 = VAR_1->pages[0]->index + 1;


 for (VAR_10 = VAR_9; VAR_10 < VAR_2; VAR_10++) {
  FUNC_6(VAR_1->pages[VAR_10]);
  VAR_1->pages[VAR_10] = ((void*)0);
 }

 return VAR_9;
}
