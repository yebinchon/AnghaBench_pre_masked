
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pagevec_ctor {unsigned int nr; int * pages; struct page* next; } ;
struct page {int dummy; } ;
typedef int erofs_vtptr_t ;


 int FUNC_0 (int) ;
 unsigned int const VAR_0 ;
 struct page* FUNC_1 (int const) ;
 unsigned int FUNC_2 (int const) ;

__attribute__((used)) static inline struct page *
FUNC_3(struct z_erofs_pagevec_ctor *VAR_1,
          unsigned int VAR_2)
{
 unsigned int VAR_3;


 if (VAR_1->next)
  return VAR_1->next;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  const erofs_vtptr_t VAR_4 = VAR_1->pages[VAR_3];
  const unsigned int VAR_5 = FUNC_2(VAR_4);

  if (VAR_5 == VAR_0)
   return FUNC_1(VAR_4);
 }
 FUNC_0(VAR_2 >= VAR_1->nr);
 return ((void*)0);
}
