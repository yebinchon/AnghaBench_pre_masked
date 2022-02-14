
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct em28xx_v4l2 {int width; int height; } ;
struct em28xx {int alt; scalar_t__ num_alt; unsigned int* alt_max_pkt_size_isoc; int max_pkt_size; TYPE_1__* intf; int ifnum; int packet_multiplier; scalar_t__ analog_xfer_bulk; struct em28xx_v4l2* v4l2; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (char*,unsigned int,...) ;
 struct usb_device* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct usb_device*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_3)
{
 struct em28xx_v4l2 *VAR_4 = VAR_3->v4l2;
 struct usb_device *VAR_5 = FUNC_2(VAR_3->intf);
 int VAR_6;
 int VAR_7;
 unsigned int VAR_8 = VAR_4->width * 2 + 4;





 VAR_3->alt = 0;
 if (VAR_2 > 0 && VAR_2 < VAR_3->num_alt) {
  FUNC_1("alternate forced to %d\n", VAR_3->alt);
  VAR_3->alt = VAR_2;
  goto set_alt;
 }
 if (VAR_3->analog_xfer_bulk)
  goto set_alt;






 if (VAR_4->width * 2 * VAR_4->height > 720 * 240 * 2)
  VAR_8 *= 2;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_alt; VAR_7++) {

  if (VAR_3->alt_max_pkt_size_isoc[VAR_7] >= VAR_8) {
   VAR_3->alt = VAR_7;
   break;





  } else if (VAR_3->alt_max_pkt_size_isoc[VAR_7] >
      VAR_3->alt_max_pkt_size_isoc[VAR_3->alt])
   VAR_3->alt = VAR_7;
 }

set_alt:





 if (VAR_3->analog_xfer_bulk) {
  VAR_3->max_pkt_size = 512;
  VAR_3->packet_multiplier = VAR_0;
 } else {
  FUNC_1("minimum isoc packet size: %u (alt=%d)\n",
    VAR_8, VAR_3->alt);
  VAR_3->max_pkt_size =
      VAR_3->alt_max_pkt_size_isoc[VAR_3->alt];
  VAR_3->packet_multiplier = VAR_1;
 }
 FUNC_1("setting alternate %d with wMaxPacketSize=%u\n",
   VAR_3->alt, VAR_3->max_pkt_size);
 VAR_6 = FUNC_3(VAR_5, VAR_3->ifnum, VAR_3->alt);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->intf->dev,
   "cannot change alternate number to %d (error=%i)\n",
   VAR_3->alt, VAR_6);
  return VAR_6;
 }
 return 0;
}
