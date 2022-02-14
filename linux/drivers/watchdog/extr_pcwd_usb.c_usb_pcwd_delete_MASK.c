
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_pcwd_private {int intr_dma; int * intr_buffer; int intr_size; int udev; int intr_urb; } ;


 int FUNC_0 (struct usb_pcwd_private*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct usb_pcwd_private *VAR_0)
{
 FUNC_2(VAR_0->intr_urb);
 if (VAR_0->intr_buffer != ((void*)0))
  FUNC_1(VAR_0->udev, VAR_0->intr_size,
      VAR_0->intr_buffer, VAR_0->intr_dma);
 FUNC_0(VAR_0);
}
