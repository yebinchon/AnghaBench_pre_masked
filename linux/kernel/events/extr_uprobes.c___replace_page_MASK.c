
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; struct mm_struct* vm_mm; } ;
struct page_vma_mapped_walk {unsigned long address; int * pte; struct vm_area_struct* vma; int page; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct page*) ;
 int VAR_5 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct mm_struct*,int ) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct mm_struct*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,struct vm_area_struct*) ;
 int FUNC_9 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_10 (struct page*,struct mem_cgroup*,int,int) ;
 int FUNC_11 (struct page*,struct mm_struct*,int ,struct mem_cgroup**,int) ;
 int FUNC_12 (struct page*,int ) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct mmu_notifier_range*) ;
 int FUNC_15 (struct mmu_notifier_range*) ;
 int FUNC_16 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*,int) ;
 int FUNC_21 (struct page_vma_mapped_walk*) ;
 int FUNC_22 (struct page_vma_mapped_walk*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct page*) ;

__attribute__((used)) static int FUNC_29(struct vm_area_struct *VAR_6, unsigned long VAR_7,
    struct page *VAR_8, struct page *VAR_9)
{
 struct mm_struct *VAR_10 = VAR_6->vm_mm;
 struct page_vma_mapped_walk VAR_11 = {
  .page = FUNC_2(VAR_8),
  .vma = VAR_6,
  .address = VAR_7,
 };
 int VAR_12;
 struct mmu_notifier_range VAR_13;
 struct mem_cgroup *VAR_14;

 FUNC_16(&VAR_13, VAR_2, 0, VAR_6, VAR_10, VAR_7,
    VAR_7 + VAR_4);

 if (VAR_9) {
  VAR_12 = FUNC_11(VAR_9, VAR_6->vm_mm, VAR_1,
         &VAR_14, 0);
  if (VAR_12)
   return VAR_12;
 }


 FUNC_7(VAR_8);

 FUNC_15(&VAR_13);
 VAR_12 = -VAR_0;
 if (!FUNC_21(&VAR_11)) {
  if (VAR_9)
   FUNC_9(VAR_9, VAR_14, 0);
  goto unlock;
 }
 FUNC_1(VAR_7 != VAR_11.address, VAR_8);

 if (VAR_9) {
  FUNC_5(VAR_9);
  FUNC_18(VAR_9, VAR_6, VAR_7, 0);
  FUNC_10(VAR_9, VAR_14, 0, 0);
  FUNC_8(VAR_9, VAR_6);
 } else

  FUNC_3(VAR_10, VAR_3);

 if (!FUNC_0(VAR_8)) {
  FUNC_3(VAR_10, FUNC_13(VAR_8));
  FUNC_6(VAR_10, VAR_3);
 }

 FUNC_4(VAR_6, VAR_7, FUNC_23(*VAR_11.pte));
 FUNC_24(VAR_6, VAR_7, VAR_11.pte);
 if (VAR_9)
  FUNC_26(VAR_10, VAR_7, VAR_11.pte,
      FUNC_12(VAR_9, VAR_6->vm_page_prot));

 FUNC_20(VAR_8, 0);
 if (!FUNC_19(VAR_8))
  FUNC_27(VAR_8);
 FUNC_22(&VAR_11);

 if (VAR_6->vm_flags & VAR_5)
  FUNC_17(VAR_8);
 FUNC_25(VAR_8);

 VAR_12 = 0;
 unlock:
 FUNC_14(&VAR_13);
 FUNC_28(VAR_8);
 return VAR_12;
}
