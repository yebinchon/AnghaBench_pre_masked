
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remap_pfn {size_t i; int mm; int prot; struct page** pages; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_4(pte_t *VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct remap_pfn *VAR_3 = VAR_2;
 struct page *VAR_4 = VAR_3->pages[VAR_3->i];
 pte_t VAR_5 = FUNC_2(FUNC_1(FUNC_0(VAR_4), VAR_3->prot));

 FUNC_3(VAR_3->mm, VAR_1, VAR_0, VAR_5);
 VAR_3->i++;

 return 0;
}
