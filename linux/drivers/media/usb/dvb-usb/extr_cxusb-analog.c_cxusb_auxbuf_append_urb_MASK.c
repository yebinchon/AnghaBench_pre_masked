
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; } ;
struct dvb_usb_device {int dummy; } ;
struct cxusb_medion_auxbuf {scalar_t__ paylen; scalar_t__ buf; } ;
struct TYPE_2__ {unsigned int actual_length; scalar_t__ offset; } ;


 int FUNC_0 (struct dvb_usb_device*,struct cxusb_medion_auxbuf*,unsigned long) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct dvb_usb_device *VAR_0,
        struct cxusb_medion_auxbuf *VAR_1,
        struct urb *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 bool VAR_5;

 for (VAR_4 = 0, VAR_3 = 0; VAR_4 < VAR_2->number_of_packets; VAR_4++)
  VAR_3 += VAR_2->iso_frame_desc[VAR_4].actual_length;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2->number_of_packets; VAR_4++) {
  unsigned int VAR_6;

  VAR_6 = VAR_2->iso_frame_desc[VAR_4].actual_length;

  FUNC_1(VAR_1->buf + VAR_1->paylen, VAR_2->transfer_buffer +
         VAR_2->iso_frame_desc[VAR_4].offset, VAR_6);

  VAR_1->paylen += VAR_6;
 }

 return VAR_5;
}
