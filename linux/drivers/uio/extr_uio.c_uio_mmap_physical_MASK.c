
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; int * vm_ops; struct uio_device* vm_private_data; } ;
struct uio_mem {int addr; scalar_t__ size; scalar_t__ memtype; } ;
struct uio_device {TYPE_1__* info; } ;
struct TYPE_2__ {struct uio_mem* mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_6)
{
 struct uio_device *VAR_7 = VAR_6->vm_private_data;
 int VAR_8 = FUNC_2(VAR_6);
 struct uio_mem *VAR_9;

 if (VAR_8 < 0)
  return -VAR_0;
 VAR_9 = VAR_7->info->mem + VAR_8;

 if (VAR_9->addr & ~VAR_2)
  return -VAR_1;
 if (VAR_6->vm_end - VAR_6->vm_start > VAR_9->size)
  return -VAR_0;

 VAR_6->vm_ops = &VAR_5;
 if (VAR_7->info->mem[VAR_8].memtype == VAR_4)
  VAR_6->vm_page_prot = FUNC_0(VAR_6->vm_page_prot);
 return FUNC_1(VAR_6,
          VAR_6->vm_start,
          VAR_9->addr >> VAR_3,
          VAR_6->vm_end - VAR_6->vm_start,
          VAR_6->vm_page_prot);
}
