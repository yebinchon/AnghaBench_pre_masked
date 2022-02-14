
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userfaultfd_ctx {struct mm_struct* mm; } ;
struct mm_struct {int mmap_sem; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static inline bool FUNC_16(struct userfaultfd_ctx *VAR_0,
      unsigned long VAR_1,
      unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct mm_struct *VAR_4 = VAR_0->mm;
 pgd_t *VAR_5;
 p4d_t *VAR_6;
 pud_t *VAR_7;
 pmd_t *VAR_8, VAR_9;
 pte_t *VAR_10;
 bool VAR_11 = 1;

 FUNC_1(!FUNC_15(&VAR_4->mmap_sem));

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (!FUNC_5(*VAR_5))
  goto out;
 VAR_6 = FUNC_2(VAR_5, VAR_1);
 if (!FUNC_3(*VAR_6))
  goto out;
 VAR_7 = FUNC_13(VAR_6, VAR_1);
 if (!FUNC_14(*VAR_7))
  goto out;
 VAR_8 = FUNC_7(VAR_7, VAR_1);
 VAR_9 = FUNC_0(*VAR_8);
 if (FUNC_6(VAR_9))
  goto out;

 VAR_11 = 0;
 if (!FUNC_8(VAR_9))
  goto out;

 if (FUNC_9(VAR_9))
  goto out;





 VAR_10 = FUNC_11(VAR_8, VAR_1);




 if (FUNC_10(*VAR_10))
  VAR_11 = 1;
 FUNC_12(VAR_10);

out:
 return VAR_11;
}
