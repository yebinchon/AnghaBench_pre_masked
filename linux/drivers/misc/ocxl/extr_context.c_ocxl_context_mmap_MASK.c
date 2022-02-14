
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_flags; int * vm_ops; int vm_page_prot; } ;
struct ocxl_context {TYPE_1__* afu; } ;
struct TYPE_2__ {int irq_base_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocxl_context*,struct vm_area_struct*) ;
 int FUNC_1 (struct ocxl_context*,struct vm_area_struct*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

int FUNC_3(struct ocxl_context *VAR_4, struct vm_area_struct *VAR_5)
{
 int VAR_6;

 if ((VAR_5->vm_pgoff << VAR_0) < VAR_4->afu->irq_base_offset)
  VAR_6 = FUNC_1(VAR_4, VAR_5);
 else
  VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->vm_flags |= VAR_1 | VAR_2;
 VAR_5->vm_page_prot = FUNC_2(VAR_5->vm_page_prot);
 VAR_5->vm_ops = &VAR_3;
 return 0;
}
