
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes_per_pixel; } ;
struct usb_usbvision {int max_frame_size; int curwidth; int curheight; int num_frames; int fbuf_size; int stretch_width; int stretch_height; TYPE_2__* frame; scalar_t__ fbuf; TYPE_1__ palette; } ;
struct TYPE_4__ {int index; int width; int height; scalar_t__ bytes_read; scalar_t__ data; int grabstate; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct usb_usbvision *VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_2->max_frame_size = FUNC_0(VAR_2->curwidth *
      VAR_2->curheight *
      VAR_2->palette.bytes_per_pixel);


 VAR_2->num_frames = VAR_3;
 while (VAR_2->num_frames > 0) {
  VAR_2->fbuf_size = VAR_2->num_frames * VAR_2->max_frame_size;
  VAR_2->fbuf = FUNC_2(VAR_2->fbuf_size);
  if (VAR_2->fbuf)
   break;
  VAR_2->num_frames--;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->num_frames; VAR_4++) {
  VAR_2->frame[VAR_4].index = VAR_4;
  VAR_2->frame[VAR_4].grabstate = VAR_1;
  VAR_2->frame[VAR_4].data = VAR_2->fbuf +
   VAR_4 * VAR_2->max_frame_size;



  VAR_2->stretch_width = 1;
  VAR_2->stretch_height = 1;
  VAR_2->frame[VAR_4].width = VAR_2->curwidth;
  VAR_2->frame[VAR_4].height = VAR_2->curheight;
  VAR_2->frame[VAR_4].bytes_read = 0;
 }
 FUNC_1(VAR_0, "allocated %d frames (%d bytes per frame)",
   VAR_2->num_frames, VAR_2->max_frame_size);
 return VAR_2->num_frames;
}
