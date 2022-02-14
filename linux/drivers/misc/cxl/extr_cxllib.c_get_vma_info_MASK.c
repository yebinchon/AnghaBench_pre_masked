
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vm_area_struct {int vm_end; int vm_start; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,int ) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_1, u64 VAR_2,
   u64 *VAR_3, u64 *VAR_4,
   unsigned long *VAR_5)
{
 struct vm_area_struct *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_0(&VAR_1->mmap_sem);

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }
 *VAR_5 = FUNC_3(VAR_6);
 *VAR_3 = VAR_6->vm_start;
 *VAR_4 = VAR_6->vm_end;
out:
 FUNC_2(&VAR_1->mmap_sem);
 return VAR_7;
}
