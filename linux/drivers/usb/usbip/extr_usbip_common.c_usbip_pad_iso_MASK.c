
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_device {int dummy; } ;
struct urb {int number_of_packets; int actual_length; scalar_t__ transfer_buffer_length; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; int pipe; } ;
struct TYPE_2__ {scalar_t__ actual_length; scalar_t__ offset; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct usbip_device *VAR_0, struct urb *VAR_1)
{
 int VAR_2 = VAR_1->number_of_packets;
 int VAR_3;
 int VAR_4 = VAR_1->actual_length;

 if (!FUNC_1(VAR_1->pipe))
  return;


 if (VAR_2 == 0 || VAR_1->actual_length == 0)
  return;





 if (VAR_1->actual_length == VAR_1->transfer_buffer_length)
  return;





 for (VAR_3 = VAR_2-1; VAR_3 > 0; VAR_3--) {
  VAR_4 -= VAR_1->iso_frame_desc[VAR_3].actual_length;
  FUNC_0(VAR_1->transfer_buffer + VAR_1->iso_frame_desc[VAR_3].offset,
   VAR_1->transfer_buffer + VAR_4,
   VAR_1->iso_frame_desc[VAR_3].actual_length);
 }
}
