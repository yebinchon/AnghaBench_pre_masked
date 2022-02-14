
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vma_pvt {int ref; int ep; } ;
struct vm_area_struct {int vm_end; int vm_start; struct vma_pvt* vm_private_data; } ;
struct TYPE_3__ {int this_device; } ;
struct TYPE_4__ {TYPE_1__ mdev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_1)
{
 struct vma_pvt *VAR_2 = VAR_1->vm_private_data;

 FUNC_0(VAR_0.mdev.this_device,
  "SCIFAPI vma open: vma_start 0x%lx vma_end 0x%lx\n",
  VAR_1->vm_start, VAR_1->vm_end);
 FUNC_2(VAR_2->ep, VAR_1);
 FUNC_1(&VAR_2->ref);
}
