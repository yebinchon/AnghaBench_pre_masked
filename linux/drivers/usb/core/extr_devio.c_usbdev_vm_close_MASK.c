
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct usb_memory* vm_private_data; } ;
struct usb_memory {int vma_use_count; } ;


 int FUNC_0 (struct usb_memory*,int *) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct usb_memory *VAR_1 = VAR_0->vm_private_data;

 FUNC_0(VAR_1, &VAR_1->vma_use_count);
}
