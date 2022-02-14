
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {unsigned int actual_length; unsigned int offset; } ;
struct urb {struct usb_iso_packet_descriptor* iso_frame_desc; } ;
struct mon_reader_bin {int dummy; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct mon_reader_bin *VAR_0,
    struct urb *VAR_1, unsigned int VAR_2)
{
 struct usb_iso_packet_descriptor *VAR_3;
 unsigned int VAR_4;

 VAR_4 = 0;
 VAR_3 = VAR_1->iso_frame_desc;
 while (VAR_2-- != 0) {
  if (VAR_3->actual_length != 0) {
   if (VAR_3->offset + VAR_3->actual_length > VAR_4)
    VAR_4 = VAR_3->offset + VAR_3->actual_length;
  }
  VAR_3++;
 }
 return VAR_4;
}
