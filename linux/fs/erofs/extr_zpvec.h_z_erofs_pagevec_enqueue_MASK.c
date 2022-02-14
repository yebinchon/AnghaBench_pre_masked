
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pagevec_ctor {scalar_t__ index; scalar_t__ nr; int * pages; struct page* next; } ;
struct page {int dummy; } ;
typedef enum z_erofs_page_type { ____Placeholder_z_erofs_page_type } z_erofs_page_type ;


 uintptr_t VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,struct page*,int) ;
 int FUNC_2 (struct z_erofs_pagevec_ctor*,int) ;

__attribute__((used)) static inline bool FUNC_3(struct z_erofs_pagevec_ctor *VAR_2,
        struct page *VAR_3,
        enum z_erofs_page_type VAR_4,
        bool *VAR_5)
{
 *VAR_5 = 0;
 if (!VAR_2->next && VAR_4)
  if (VAR_2->index + 1 == VAR_2->nr)
   return 0;

 if (VAR_2->index >= VAR_2->nr)
  FUNC_2(VAR_2, 0);


 if (VAR_0 != (uintptr_t)((void*)0))
  FUNC_0();


 if (VAR_4 == (uintptr_t)VAR_2->next) {
  VAR_2->next = VAR_3;
  *VAR_5 = 1;
 }
 VAR_2->pages[VAR_2->index++] = FUNC_1(VAR_1, VAR_3, VAR_4);
 return 1;
}
