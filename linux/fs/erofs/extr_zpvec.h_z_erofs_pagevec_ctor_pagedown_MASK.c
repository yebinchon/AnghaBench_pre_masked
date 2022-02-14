
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pagevec_ctor {int nr; scalar_t__ index; struct page* curr; int pages; int * next; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct z_erofs_pagevec_ctor*,int) ;
 struct page* FUNC_3 (struct z_erofs_pagevec_ctor*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct z_erofs_pagevec_ctor *VAR_1,
         bool VAR_2)
{
 struct page *VAR_3 = FUNC_3(VAR_1, VAR_1->nr);

 FUNC_2(VAR_1, VAR_2);

 VAR_1->curr = VAR_3;
 VAR_1->next = ((void*)0);
 VAR_1->pages = VAR_2 ?
  FUNC_1(VAR_1->curr) : FUNC_0(VAR_1->curr);

 VAR_1->nr = VAR_0 / sizeof(struct page *);
 VAR_1->index = 0;
}
