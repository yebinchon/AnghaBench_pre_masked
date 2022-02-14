
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ actual_length; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; int transfer_buffer_length; struct flexcop_usb* context; } ;
struct flexcop_usb {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ actual_length; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (struct flexcop_usb*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct flexcop_usb *VAR_2 = VAR_1->context;
 int VAR_3;

 if (VAR_1->actual_length > 0)
  FUNC_0("urb completed, bufsize: %d actlen; %d\n",
   VAR_1->transfer_buffer_length, VAR_1->actual_length);

 for (VAR_3 = 0; VAR_3 < VAR_1->number_of_packets; VAR_3++) {
  if (VAR_1->iso_frame_desc[VAR_3].status < 0) {
   FUNC_1("iso frame descriptor %d has an error: %d\n", VAR_3,
    VAR_1->iso_frame_desc[VAR_3].status);
  } else
   if (VAR_1->iso_frame_desc[VAR_3].actual_length > 0) {
    FUNC_0("passed %d bytes to the demux\n",
     VAR_1->iso_frame_desc[VAR_3].actual_length);

    FUNC_2(VAR_2,
     VAR_1->transfer_buffer +
      VAR_1->iso_frame_desc[VAR_3].offset,
     VAR_1->iso_frame_desc[VAR_3].actual_length);
   }
  VAR_1->iso_frame_desc[VAR_3].status = 0;
  VAR_1->iso_frame_desc[VAR_3].actual_length = 0;
 }
 FUNC_3(VAR_1,VAR_0);
}
