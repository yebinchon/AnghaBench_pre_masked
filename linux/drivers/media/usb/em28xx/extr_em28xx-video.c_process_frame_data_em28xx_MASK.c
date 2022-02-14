
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_v4l2 {int capture_type; unsigned int vbi_read; int top_field; int vbi_width; int vbi_height; } ;
struct em28xx_dmaqueue {int dummy; } ;
struct em28xx_buffer {int dummy; } ;
struct TYPE_2__ {struct em28xx_buffer* vid_buf; struct em28xx_buffer* vbi_buf; } ;
struct em28xx {TYPE_1__ usb_ctl; struct em28xx_dmaqueue vbiq; struct em28xx_dmaqueue vidq; struct em28xx_v4l2* v4l2; } ;


 int FUNC_0 (struct em28xx*,struct em28xx_buffer*,unsigned char*,int) ;
 int FUNC_1 (struct em28xx*,struct em28xx_buffer*,unsigned char*,unsigned int) ;
 int FUNC_2 (char*) ;
 struct em28xx_buffer* FUNC_3 (struct em28xx*,struct em28xx_buffer*,struct em28xx_dmaqueue*) ;

__attribute__((used)) static inline void FUNC_4(struct em28xx *VAR_0,
          unsigned char *VAR_1,
          unsigned int VAR_2)
{
 struct em28xx_v4l2 *VAR_3 = VAR_0->v4l2;
 struct em28xx_buffer *VAR_4 = VAR_0->usb_ctl.vid_buf;
 struct em28xx_buffer *VAR_5 = VAR_0->usb_ctl.vbi_buf;
 struct em28xx_dmaqueue *VAR_6 = &VAR_0->vidq;
 struct em28xx_dmaqueue *VAR_7 = &VAR_0->vbiq;







 if (VAR_2 >= 4) {




  if (VAR_1[0] == 0x88 && VAR_1[1] == 0x88 &&
      VAR_1[2] == 0x88 && VAR_1[3] == 0x88) {

   VAR_1 += 4;
   VAR_2 -= 4;
  } else if (VAR_1[0] == 0x33 && VAR_1[1] == 0x95) {

   VAR_3->capture_type = 0;
   VAR_3->vbi_read = 0;
   FUNC_2("VBI START HEADER !!!\n");
   VAR_3->top_field = !(VAR_1[2] & 1);
   VAR_1 += 4;
   VAR_2 -= 4;
  } else if (VAR_1[0] == 0x22 && VAR_1[1] == 0x5a) {

   VAR_3->capture_type = 2;
   FUNC_2("VIDEO START HEADER !!!\n");
   VAR_3->top_field = !(VAR_1[2] & 1);
   VAR_1 += 4;
   VAR_2 -= 4;
  }
 }





 if (VAR_3->capture_type == 0) {
  VAR_5 = FUNC_3(VAR_0, VAR_5, VAR_7);
  VAR_0->usb_ctl.vbi_buf = VAR_5;
  VAR_3->capture_type = 1;
 }

 if (VAR_3->capture_type == 1) {
  int VAR_8 = VAR_3->vbi_width * VAR_3->vbi_height;
  int VAR_9 = ((VAR_3->vbi_read + VAR_2) > VAR_8) ?
       (VAR_8 - VAR_3->vbi_read) : VAR_2;


  if (VAR_5)
   FUNC_0(VAR_0, VAR_5, VAR_1, VAR_9);
  VAR_3->vbi_read += VAR_9;

  if (VAR_9 < VAR_2) {

   VAR_3->capture_type = 2;
   VAR_1 += VAR_9;
   VAR_2 -= VAR_9;
  }
 }

 if (VAR_3->capture_type == 2) {
  VAR_4 = FUNC_3(VAR_0, VAR_4, VAR_6);
  VAR_0->usb_ctl.vid_buf = VAR_4;
  VAR_3->capture_type = 3;
 }

 if (VAR_3->capture_type == 3 && VAR_4 && VAR_2 > 0)
  FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2);
}
