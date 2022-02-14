
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int last_isoc_frame_num; int compr_level; int last_compr_level; int request_intra; scalar_t__ isoc_measure_bandwidth_count; scalar_t__ isoc_urb_count; scalar_t__ isoc_skip_count; scalar_t__ isoc_packet_count; scalar_t__ isoc_data_count; } ;



__attribute__((used)) static int FUNC_0(struct usb_usbvision *VAR_0)
{
 VAR_0->last_isoc_frame_num = -1;
 VAR_0->isoc_data_count = 0;
 VAR_0->isoc_packet_count = 0;
 VAR_0->isoc_skip_count = 0;
 VAR_0->compr_level = 50;
 VAR_0->last_compr_level = -1;
 VAR_0->isoc_urb_count = 0;
 VAR_0->request_intra = 1;
 VAR_0->isoc_measure_bandwidth_count = 0;

 return 0;
}
