
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_flags; struct ocxl_afu* vm_private_data; int * vm_ops; int vm_page_prot; } ;
struct TYPE_2__ {int global_mmio_size; } ;
struct ocxl_afu {TYPE_1__ config; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (int ) ;
 struct ocxl_afu* FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, struct kobject *VAR_6,
   struct bin_attribute *VAR_7,
   struct vm_area_struct *VAR_8)
{
 struct ocxl_afu *VAR_9 = FUNC_2(FUNC_0(VAR_6));

 if ((FUNC_3(VAR_8) + VAR_8->vm_pgoff) >
  (VAR_9->config.global_mmio_size >> VAR_1))
  return -VAR_0;

 VAR_8->vm_flags |= VAR_2 | VAR_3;
 VAR_8->vm_page_prot = FUNC_1(VAR_8->vm_page_prot);
 VAR_8->vm_ops = &VAR_4;
 VAR_8->vm_private_data = VAR_9;
 return 0;
}
