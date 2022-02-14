
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {size_t vm_pgoff; struct tcmu_dev* vm_private_data; } ;
struct uio_info {TYPE_1__* mem; } ;
struct tcmu_dev {struct uio_info uio_info; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vm_area_struct *VAR_1)
{
 struct tcmu_dev *VAR_2 = VAR_1->vm_private_data;
 struct uio_info *VAR_3 = &VAR_2->uio_info;

 if (VAR_1->vm_pgoff < VAR_0) {
  if (VAR_3->mem[VAR_1->vm_pgoff].size == 0)
   return -1;
  return (int)VAR_1->vm_pgoff;
 }
 return -1;
}
