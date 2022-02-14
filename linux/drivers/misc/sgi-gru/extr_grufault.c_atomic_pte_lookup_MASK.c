
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct vm_area_struct *VAR_2, unsigned long VAR_3,
 int VAR_4, unsigned long *VAR_5, int *VAR_6)
{
 pgd_t *VAR_7;
 p4d_t *VAR_8;
 pud_t *VAR_9;
 pmd_t *VAR_10;
 pte_t VAR_11;

 VAR_7 = FUNC_4(VAR_2->vm_mm, VAR_3);
 if (FUNC_15(FUNC_3(*VAR_7)))
  goto err;

 VAR_8 = FUNC_2(VAR_7, VAR_3);
 if (FUNC_15(FUNC_1(*VAR_8)))
  goto err;

 VAR_9 = FUNC_14(VAR_8, VAR_3);
 if (FUNC_15(FUNC_13(*VAR_9)))
  goto err;

 VAR_10 = FUNC_7(VAR_9, VAR_3);
 if (FUNC_15(FUNC_6(*VAR_10)))
  goto err;





  VAR_11 = *FUNC_9(VAR_10, VAR_3);

 if (FUNC_15(!FUNC_11(VAR_11) ||
       (VAR_4 && (!FUNC_12(VAR_11) || !FUNC_8(VAR_11)))))
  return 1;

 *VAR_5 = FUNC_10(VAR_11) << VAR_1;



 *VAR_6 = VAR_1;

 return 0;

err:
 return 1;
}
