
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_memory {scalar_t__ urb_use_count; scalar_t__ vma_use_count; scalar_t__ size; int dma_handle; int mem; int memlist; struct usb_dev_state* ps; } ;
struct usb_dev_state {int lock; int dev; } ;


 int FUNC_0 (struct usb_memory*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct usb_memory *VAR_0, int *VAR_1)
{
 struct usb_dev_state *VAR_2 = VAR_0->ps;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 --*VAR_1;
 if (VAR_0->urb_use_count == 0 && VAR_0->vma_use_count == 0) {
  FUNC_1(&VAR_0->memlist);
  FUNC_3(&VAR_2->lock, VAR_3);

  FUNC_4(VAR_2->dev, VAR_0->size, VAR_0->mem,
    VAR_0->dma_handle);
  FUNC_5(
   VAR_0->size + sizeof(struct usb_memory));
  FUNC_0(VAR_0);
 } else {
  FUNC_3(&VAR_2->lock, VAR_3);
 }
}
