
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; struct address_space* mapping; } ;
struct address_space {int i_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct page *VAR_2)
{
 struct address_space *VAR_3 = VAR_2->mapping;

 if (VAR_3) {
  FUNC_5(&VAR_3->i_pages);
  if (FUNC_4(VAR_1, &VAR_2->flags)) {
   FUNC_1(&VAR_3->i_pages, FUNC_3(VAR_2),
          VAR_0);
   FUNC_6(&VAR_3->i_pages);
   return FUNC_2(VAR_2);
  }
  FUNC_6(&VAR_3->i_pages);
  return 0;
 }
 return FUNC_0(VAR_2);
}
