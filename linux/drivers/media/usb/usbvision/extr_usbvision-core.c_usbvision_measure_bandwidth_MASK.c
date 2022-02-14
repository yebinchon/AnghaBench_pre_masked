
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int isoc_measure_bandwidth_count; int isoc_packet_size; int isoc_packet_count; int used_bandwidth; int isoc_data_count; int isoc_skip_count; } ;



__attribute__((used)) static int FUNC_0(struct usb_usbvision *VAR_0)
{
 if (VAR_0->isoc_measure_bandwidth_count < 2) {
  VAR_0->isoc_measure_bandwidth_count++;
  return 0;
 }
 if ((VAR_0->isoc_packet_size > 0) && (VAR_0->isoc_packet_count > 0)) {
  VAR_0->used_bandwidth = VAR_0->isoc_data_count /
     (VAR_0->isoc_packet_count + VAR_0->isoc_skip_count) *
     100 / VAR_0->isoc_packet_size;
 }
 VAR_0->isoc_measure_bandwidth_count = 0;
 VAR_0->isoc_data_count = 0;
 VAR_0->isoc_packet_count = 0;
 VAR_0->isoc_skip_count = 0;
 return 0;
}
