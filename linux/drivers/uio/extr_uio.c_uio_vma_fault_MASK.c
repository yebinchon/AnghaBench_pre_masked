
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int pgoff; struct page* page; TYPE_3__* vma; } ;
struct uio_device {int info_lock; TYPE_2__* info; } ;
struct page {int dummy; } ;
struct TYPE_6__ {struct uio_device* vm_private_data; } ;
struct TYPE_5__ {TYPE_1__* mem; } ;
struct TYPE_4__ {scalar_t__ memtype; scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 struct page* FUNC_4 (void*) ;
 struct page* FUNC_5 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_6(struct vm_fault *VAR_3)
{
 struct uio_device *VAR_4 = VAR_3->vma->vm_private_data;
 struct page *VAR_5;
 unsigned long VAR_6;
 void *VAR_7;
 vm_fault_t VAR_8 = 0;
 int VAR_9;

 FUNC_1(&VAR_4->info_lock);
 if (!VAR_4->info) {
  VAR_8 = VAR_2;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_3->vma);
 if (VAR_9 < 0) {
  VAR_8 = VAR_2;
  goto out;
 }





 VAR_6 = (VAR_3->pgoff - VAR_9) << VAR_0;

 VAR_7 = (void *)(unsigned long)VAR_4->info->mem[VAR_9].addr + VAR_6;
 if (VAR_4->info->mem[VAR_9].memtype == VAR_1)
  VAR_5 = FUNC_4(VAR_7);
 else
  VAR_5 = FUNC_5(VAR_7);
 FUNC_0(VAR_5);
 VAR_3->page = VAR_5;

out:
 FUNC_2(&VAR_4->info_lock);

 return VAR_8;
}
