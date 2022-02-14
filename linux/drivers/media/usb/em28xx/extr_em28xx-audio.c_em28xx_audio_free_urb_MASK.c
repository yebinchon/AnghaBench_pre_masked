
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {int transfer_dma; int transfer_buffer_length; } ;
struct TYPE_2__ {int num_urb; struct urb** transfer_buffer; struct urb** urb; } ;
struct em28xx {TYPE_1__ adev; int intf; } ;


 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct urb**) ;
 int FUNC_2 (struct usb_device*,int ,struct urb*,int ) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static void FUNC_4(struct em28xx *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_0(VAR_0->intf);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->adev.num_urb; VAR_2++) {
  struct urb *VAR_3 = VAR_0->adev.urb[VAR_2];

  if (!VAR_3)
   continue;

  FUNC_2(VAR_1, VAR_3->transfer_buffer_length,
      VAR_0->adev.transfer_buffer[VAR_2],
      VAR_3->transfer_dma);

  FUNC_3(VAR_3);
 }
 FUNC_1(VAR_0->adev.urb);
 FUNC_1(VAR_0->adev.transfer_buffer);
 VAR_0->adev.num_urb = 0;
}
