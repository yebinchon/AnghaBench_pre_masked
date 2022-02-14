
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsibk_pend {unsigned int n_grants; scalar_t__* grant_handles; struct page** pages; scalar_t__ n_sg; int * sgl; } ;
struct page {int dummy; } ;
struct gnttab_unmap_grant_ref {int dummy; } ;
typedef scalar_t__ grant_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gnttab_unmap_grant_ref*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,int *,struct page**,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page**,unsigned int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct vscsibk_pend*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct vscsibk_pend *VAR_3)
{
 struct gnttab_unmap_grant_ref VAR_4[VAR_2];
 struct page *VAR_5[VAR_2];
 unsigned int VAR_6, VAR_7 = 0;
 grant_handle_t VAR_8;
 int VAR_9;

 FUNC_3(VAR_3->sgl);
 VAR_3->sgl = ((void*)0);
 VAR_3->n_sg = 0;

 if (!VAR_3->n_grants)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_3->n_grants; VAR_6++) {
  VAR_8 = VAR_3->grant_handles[VAR_6];
  if (VAR_8 == VAR_1)
   continue;
  FUNC_1(&VAR_4[VAR_7], FUNC_6(VAR_3, VAR_6),
        VAR_0, VAR_8);
  VAR_3->grant_handles[VAR_6] = VAR_1;
  VAR_5[VAR_7] = VAR_3->pages[VAR_6];
  FUNC_5(VAR_5[VAR_7]);
  VAR_7++;
  if (VAR_7 < VAR_2)
   continue;
  VAR_9 = FUNC_2(VAR_4, ((void*)0), VAR_5, VAR_7);
  FUNC_0(VAR_9);
  VAR_7 = 0;
 }

 if (VAR_7) {
  VAR_9 = FUNC_2(VAR_4, ((void*)0), VAR_5, VAR_7);
  FUNC_0(VAR_9);
 }

 FUNC_4(VAR_3->pages, VAR_3->n_grants);
 VAR_3->n_grants = 0;
}
