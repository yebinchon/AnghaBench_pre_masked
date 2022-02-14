
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pagevec_ctor {unsigned int nr; unsigned int index; int * next; int * pages; int curr; } ;
typedef int erofs_vtptr_t ;


 int * FUNC_0 (struct z_erofs_pagevec_ctor*,unsigned int) ;
 int FUNC_1 (struct z_erofs_pagevec_ctor*,int) ;

__attribute__((used)) static inline void FUNC_2(struct z_erofs_pagevec_ctor *VAR_0,
          unsigned int VAR_1,
          erofs_vtptr_t *VAR_2,
          unsigned int VAR_3)
{
 VAR_0->nr = VAR_1;
 VAR_0->curr = *(VAR_0->next = ((void*)0));
 VAR_0->pages = VAR_2;

 if (VAR_3 >= VAR_1) {
  VAR_3 -= VAR_1;
  FUNC_1(VAR_0, 0);
  while (VAR_3 > VAR_0->nr) {
   VAR_3 -= VAR_0->nr;
   FUNC_1(VAR_0, 0);
  }
 }
 VAR_0->next = FUNC_0(VAR_0, VAR_3);
 VAR_0->index = VAR_3;
}
