
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {int alt; int* alt_max_pkt_size; int max_pkt_size; } ;
struct TYPE_7__ {TYPE_2__* hs_config_info; } ;
struct cx231xx {int width; int height; scalar_t__ USE_ISO; TYPE_4__ video_mode; int dev; int udev; TYPE_3__ current_pcb_config; } ;
struct TYPE_5__ {scalar_t__ video_index; } ;
struct TYPE_6__ {TYPE_1__ interface_info; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (int ,scalar_t__,unsigned int) ;

int FUNC_3(struct cx231xx *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->video_mode.alt;
 unsigned int VAR_3 = VAR_0->width * 2 + 4;
 u32 VAR_4 = 0;





 if (VAR_0->width * 2 * VAR_0->height > 720 * 240 * 2)
  VAR_3 *= 2;

 if (VAR_0->width > 360) {

  VAR_0->video_mode.alt = 3;
 } else if (VAR_0->width > 180) {

  VAR_0->video_mode.alt = 2;
 } else if (VAR_0->width > 0) {

  VAR_0->video_mode.alt = 1;
 } else {

  VAR_0->video_mode.alt = 0;
 }

 if (VAR_0->USE_ISO == 0)
  VAR_0->video_mode.alt = 0;

 FUNC_0("dev->video_mode.alt= %d\n", VAR_0->video_mode.alt);


 VAR_4 =
     VAR_0->current_pcb_config.hs_config_info[0].interface_info.
     video_index + 1;

 if (VAR_0->video_mode.alt != VAR_2) {
  FUNC_0("minimum isoc packet size: %u (alt=%d)\n",
    VAR_3, VAR_0->video_mode.alt);

  if (VAR_0->video_mode.alt_max_pkt_size != ((void*)0))
   VAR_0->video_mode.max_pkt_size =
   VAR_0->video_mode.alt_max_pkt_size[VAR_0->video_mode.alt];
  FUNC_0("setting alternate %d with wMaxPacketSize=%u\n",
    VAR_0->video_mode.alt,
    VAR_0->video_mode.max_pkt_size);
  VAR_1 =
      FUNC_2(VAR_0->udev, VAR_4,
          VAR_0->video_mode.alt);
  if (VAR_1 < 0) {
   FUNC_1(VAR_0->dev,
    "cannot change alt number to %d (error=%i)\n",
    VAR_0->video_mode.alt, VAR_1);
   return VAR_1;
  }
 }
 return 0;
}
