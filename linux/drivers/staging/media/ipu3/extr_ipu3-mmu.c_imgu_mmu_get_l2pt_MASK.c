
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct imgu_mmu {size_t** l2pts; size_t* l1pt; int lock; int dev; int dummy_page_pteval; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t*,size_t) ;
 size_t* FUNC_2 (int ) ;
 int FUNC_3 (size_t*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (size_t*) ;

__attribute__((used)) static u32 *FUNC_7(struct imgu_mmu *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 *VAR_3, *VAR_4;
 u32 VAR_5;

 FUNC_4(&VAR_0->lock, VAR_2);

 VAR_3 = VAR_0->l2pts[VAR_1];
 if (VAR_3)
  goto done;

 FUNC_5(&VAR_0->lock, VAR_2);

 VAR_4 = FUNC_2(VAR_0->dummy_page_pteval);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_0->lock, VAR_2);

 FUNC_1(VAR_0->dev, "allocated page table %p for l1pt_idx %u\n",
  VAR_4, VAR_1);

 VAR_3 = VAR_0->l2pts[VAR_1];
 if (VAR_3) {
  FUNC_3(VAR_4);
  goto done;
 }

 VAR_3 = VAR_4;
 VAR_0->l2pts[VAR_1] = VAR_4;

 VAR_5 = FUNC_0(FUNC_6(VAR_4));
 VAR_0->l1pt[VAR_1] = VAR_5;

done:
 FUNC_5(&VAR_0->lock, VAR_2);
 return VAR_3;
}
