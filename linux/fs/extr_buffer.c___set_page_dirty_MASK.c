
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct address_space {int i_pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct page*,struct address_space*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct page *VAR_1, struct address_space *VAR_2,
        int VAR_3)
{
 unsigned long VAR_4;

 FUNC_5(&VAR_2->i_pages, VAR_4);
 if (VAR_1->mapping) {
  FUNC_1(VAR_3 && !FUNC_0(VAR_1));
  FUNC_3(VAR_1, VAR_2);
  FUNC_2(&VAR_2->i_pages, FUNC_4(VAR_1),
    VAR_0);
 }
 FUNC_6(&VAR_2->i_pages, VAR_4);
}
