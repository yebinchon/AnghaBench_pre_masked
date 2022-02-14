
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_interrupt {int lock; int * buffer; int buffer_dma; struct urb* urb; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct urb*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct usb_device*,int ,void*,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct zd_usb*) ;
 struct usb_device* FUNC_7 (struct zd_usb*) ;

void FUNC_8(struct zd_usb *VAR_1)
{
 unsigned long VAR_2;
 struct usb_device *VAR_3 = FUNC_7(VAR_1);
 struct zd_usb_interrupt *VAR_4 = &VAR_1->intr;
 struct urb *VAR_5;
 void *VAR_6;
 dma_addr_t VAR_7;

 FUNC_1(&VAR_4->lock, VAR_2);
 VAR_5 = VAR_4->urb;
 if (!VAR_5) {
  FUNC_2(&VAR_4->lock, VAR_2);
  return;
 }
 VAR_4->urb = ((void*)0);
 VAR_6 = VAR_4->buffer;
 VAR_7 = VAR_4->buffer_dma;
 VAR_4->buffer = ((void*)0);
 FUNC_2(&VAR_4->lock, VAR_2);

 FUNC_5(VAR_5);
 FUNC_0(FUNC_6(VAR_1), "urb %p killed\n", VAR_5);
 FUNC_4(VAR_5);

 if (VAR_6)
  FUNC_3(VAR_3, VAR_0,
      VAR_6, VAR_7);
}
