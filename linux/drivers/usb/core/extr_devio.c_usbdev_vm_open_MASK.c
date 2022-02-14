
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct usb_memory* vm_private_data; } ;
struct usb_memory {TYPE_1__* ps; int vma_use_count; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct usb_memory *VAR_1 = VAR_0->vm_private_data;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->ps->lock, VAR_2);
 ++VAR_1->vma_use_count;
 FUNC_1(&VAR_1->ps->lock, VAR_2);
}
