
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; } ;
struct ocxl_context {TYPE_2__* afu; } ;
struct TYPE_3__ {int pp_mmio_stride; } ;
struct TYPE_4__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct ocxl_context *VAR_2,
   struct vm_area_struct *VAR_3)
{
 if ((FUNC_0(VAR_3) + VAR_3->vm_pgoff) >
  (VAR_2->afu->config.pp_mmio_stride >> VAR_1))
  return -VAR_0;
 return 0;
}
