
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int bus; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,size_t,void*,int ) ;

void FUNC_1(struct usb_device *VAR_0, size_t VAR_1, void *VAR_2,
         dma_addr_t VAR_3)
{
 if (!VAR_0 || !VAR_0->bus)
  return;
 if (!VAR_2)
  return;
 FUNC_0(VAR_0->bus, VAR_1, VAR_2, VAR_3);
}
