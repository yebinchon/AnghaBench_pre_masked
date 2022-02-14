
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_iso_packet_descriptor {int dummy; } ;
struct urb {int number_of_packets; int * iso_frame_desc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct usbip_iso_packet_descriptor* FUNC_0 (int,int ) ;
 int FUNC_1 (struct usbip_iso_packet_descriptor*,int) ;
 int FUNC_2 (struct usbip_iso_packet_descriptor*,int *,int) ;

struct usbip_iso_packet_descriptor*
FUNC_3(struct urb *VAR_1, ssize_t *VAR_2)
{
 struct usbip_iso_packet_descriptor *VAR_3;
 int VAR_4 = VAR_1->number_of_packets;
 ssize_t VAR_5 = VAR_4 * sizeof(*VAR_3);
 int VAR_6;

 VAR_3 = FUNC_0(VAR_5, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_2(&VAR_3[VAR_6], &VAR_1->iso_frame_desc[VAR_6], 1);
  FUNC_1(&VAR_3[VAR_6], 1);
 }

 *VAR_2 = VAR_5;

 return VAR_3;
}
