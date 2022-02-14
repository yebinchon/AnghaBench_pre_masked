
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
struct cxl_context {int pid; } ;
struct copro_slb {scalar_t__ esid; int vsid; } ;


 int FUNC_0 (struct mm_struct*,scalar_t__,struct copro_slb*) ;
 int FUNC_1 (struct cxl_context*,struct copro_slb*) ;
 int FUNC_2 (int *) ;
 struct mm_struct* FUNC_3 (struct cxl_context*) ;
 int FUNC_4 (struct mm_struct*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct cxl_context *VAR_0)
{
 u64 VAR_1, VAR_2 = 0;
 struct copro_slb VAR_3;
 struct vm_area_struct *VAR_4;
 int VAR_5;
 struct mm_struct *VAR_6;

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_7("cxl_prefault_vm unable to get mm %i\n",
    FUNC_6(VAR_0->pid));
  return;
 }

 FUNC_2(&VAR_6->mmap_sem);
 for (VAR_4 = VAR_6->mmap; VAR_4; VAR_4 = VAR_4->vm_next) {
  for (VAR_1 = VAR_4->vm_start; VAR_1 < VAR_4->vm_end;
    VAR_1 = FUNC_5(VAR_1, VAR_3.vsid)) {
   VAR_5 = FUNC_0(VAR_6, VAR_1, &VAR_3);
   if (VAR_5)
    continue;

   if (VAR_2 == VAR_3.esid)
    continue;

   FUNC_1(VAR_0, &VAR_3);
   VAR_2 = VAR_3.esid;
  }
 }
 FUNC_8(&VAR_6->mmap_sem);

 FUNC_4(VAR_6);
}
