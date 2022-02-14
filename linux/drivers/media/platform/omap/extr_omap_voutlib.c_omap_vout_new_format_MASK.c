
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int left; int top; } ;
struct v4l2_window {TYPE_2__ w; } ;
struct v4l2_rect {int width; int height; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_3__ {int width; int height; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;


 int FUNC_0 (struct v4l2_pix_format*,struct v4l2_framebuffer*,struct v4l2_rect*) ;

void FUNC_1(struct v4l2_pix_format *VAR_0,
  struct v4l2_framebuffer *VAR_1, struct v4l2_rect *VAR_2,
  struct v4l2_window *VAR_3)
{



 FUNC_0(VAR_0, VAR_1, VAR_2);


 VAR_3->w.width = VAR_2->width;
 VAR_3->w.height = VAR_2->height;
 VAR_3->w.left = ((VAR_1->fmt.width - VAR_3->w.width) >> 1) & ~1;
 VAR_3->w.top = ((VAR_1->fmt.height - VAR_3->w.height) >> 1) & ~1;
}
