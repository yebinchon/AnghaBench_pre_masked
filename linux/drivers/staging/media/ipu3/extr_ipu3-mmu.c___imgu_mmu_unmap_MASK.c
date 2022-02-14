
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct imgu_mmu {size_t** l2pts; size_t dummy_page_pteval; int lock; } ;


 int FUNC_0 (unsigned long,size_t*,size_t*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static size_t FUNC_3(struct imgu_mmu *VAR_0,
          unsigned long VAR_1, size_t VAR_2)
{
 u32 VAR_3, VAR_4;
 unsigned long VAR_5;
 size_t VAR_6 = VAR_2;
 u32 *VAR_7;

 if (!VAR_0)
  return 0;

 FUNC_0(VAR_1, &VAR_3, &VAR_4);

 FUNC_1(&VAR_0->lock, VAR_5);

 VAR_7 = VAR_0->l2pts[VAR_3];
 if (!VAR_7) {
  FUNC_2(&VAR_0->lock, VAR_5);
  return 0;
 }

 if (VAR_7[VAR_4] == VAR_0->dummy_page_pteval)
  VAR_6 = 0;

 VAR_7[VAR_4] = VAR_0->dummy_page_pteval;

 FUNC_2(&VAR_0->lock, VAR_5);

 return VAR_6;
}
