
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_usb {int dma_addr; int * iso_buffer; int buffer_size; int udev; int ** iso_urb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct flexcop_usb *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->iso_urb[VAR_2] != ((void*)0)) {
   FUNC_0("unlinking/killing urb no. %d\n",VAR_2);
   FUNC_3(VAR_1->iso_urb[VAR_2]);
   FUNC_2(VAR_1->iso_urb[VAR_2]);
  }

 if (VAR_1->iso_buffer != ((void*)0))
  FUNC_1(VAR_1->udev,
   VAR_1->buffer_size, VAR_1->iso_buffer,
   VAR_1->dma_addr);
}
