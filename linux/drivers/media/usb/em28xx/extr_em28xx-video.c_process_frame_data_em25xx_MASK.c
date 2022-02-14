
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_v4l2 {int top_field; } ;
struct em28xx_dmaqueue {int dummy; } ;
struct em28xx_buffer {int dummy; } ;
struct TYPE_2__ {struct em28xx_buffer* vid_buf; } ;
struct em28xx {TYPE_1__ usb_ctl; scalar_t__ analog_xfer_bulk; struct em28xx_v4l2* v4l2; struct em28xx_dmaqueue vidq; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct em28xx*,struct em28xx_buffer*,unsigned char*,unsigned int) ;
 struct em28xx_buffer* FUNC_1 (struct em28xx*,struct em28xx_buffer*,struct em28xx_dmaqueue*) ;

__attribute__((used)) static inline void FUNC_2(struct em28xx *VAR_4,
          unsigned char *VAR_5,
          unsigned int VAR_6)
{
 struct em28xx_buffer *VAR_7 = VAR_4->usb_ctl.vid_buf;
 struct em28xx_dmaqueue *VAR_8 = &VAR_4->vidq;
 struct em28xx_v4l2 *VAR_9 = VAR_4->v4l2;
 bool VAR_10 = 0;






 if (VAR_6 >= 2) {
  if ((VAR_5[0] == VAR_0) &&
      ((VAR_5[1] & ~VAR_3) == 0x00)) {
   VAR_9->top_field = !(VAR_5[1] &
        VAR_2);
   VAR_10 = VAR_5[1] &
        VAR_1;
   VAR_5 += 2;
   VAR_6 -= 2;
  }


  if (VAR_4->analog_xfer_bulk && VAR_10) {
   VAR_7 = FUNC_1(VAR_4, VAR_7, VAR_8);
   VAR_4->usb_ctl.vid_buf = VAR_7;
  }





 }


 if (VAR_7 && VAR_6 > 0)
  FUNC_0(VAR_4, VAR_7, VAR_5, VAR_6);


 if (!VAR_4->analog_xfer_bulk && VAR_10) {
  VAR_7 = FUNC_1(VAR_4, VAR_7, VAR_8);
  VAR_4->usb_ctl.vid_buf = VAR_7;
 }
}
