
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {size_t vm_pgoff; struct uio_device* vm_private_data; } ;
struct uio_device {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {scalar_t__ size; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vm_area_struct *VAR_1)
{
 struct uio_device *VAR_2 = VAR_1->vm_private_data;

 if (VAR_1->vm_pgoff < VAR_0) {
  if (VAR_2->info->mem[VAR_1->vm_pgoff].size == 0)
   return -1;
  return (int)VAR_1->vm_pgoff;
 }
 return -1;
}
