
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {long vm_end; long vm_start; int * vm_private_data; } ;
struct hl_cb {long mmap_size; int mmap; int lock; } ;


 int FUNC_0 (struct hl_cb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct hl_cb *VAR_1 = (struct hl_cb *) VAR_0->vm_private_data;
 long VAR_2;

 VAR_2 = VAR_1->mmap_size - (VAR_0->vm_end - VAR_0->vm_start);

 if (VAR_2 > 0) {
  VAR_1->mmap_size = VAR_2;
  return;
 }

 FUNC_1(&VAR_1->lock);
 VAR_1->mmap = 0;
 FUNC_2(&VAR_1->lock);

 FUNC_0(VAR_1);
 VAR_0->vm_private_data = ((void*)0);
}
