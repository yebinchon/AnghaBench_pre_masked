
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
typedef unsigned long uint32_t ;
struct vm_fault {int pgoff; struct page* page; TYPE_2__* vma; } ;
struct uio_info {TYPE_1__* mem; } ;
struct tcmu_dev {unsigned long data_off; struct uio_info uio_info; } ;
struct page {int dummy; } ;
struct TYPE_4__ {struct tcmu_dev* vm_private_data; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct page* FUNC_2 (struct tcmu_dev*,unsigned long) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_4(struct vm_fault *VAR_3)
{
 struct tcmu_dev *VAR_4 = VAR_3->vma->vm_private_data;
 struct uio_info *VAR_5 = &VAR_4->uio_info;
 struct page *VAR_6;
 unsigned long VAR_7;
 void *VAR_8;

 int VAR_9 = FUNC_1(VAR_3->vma);
 if (VAR_9 < 0)
  return VAR_2;





 VAR_7 = (VAR_3->pgoff - VAR_9) << VAR_1;

 if (VAR_7 < VAR_4->data_off) {

  VAR_8 = (void *)(unsigned long)VAR_5->mem[VAR_9].addr + VAR_7;
  VAR_6 = FUNC_3(VAR_8);
 } else {
  uint32_t VAR_10;


  VAR_10 = (VAR_7 - VAR_4->data_off) / VAR_0;
  VAR_6 = FUNC_2(VAR_4, VAR_10);
  if (!VAR_6)
   return VAR_2;
 }

 FUNC_0(VAR_6);
 VAR_3->page = VAR_6;
 return 0;
}
