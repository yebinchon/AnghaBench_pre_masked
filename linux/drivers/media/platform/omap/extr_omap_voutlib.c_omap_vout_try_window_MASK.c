
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ left; scalar_t__ width; scalar_t__ top; int height; } ;
struct v4l2_window {int * bitmap; scalar_t__ clipcount; int * clips; int field; struct v4l2_rect w; } ;
struct TYPE_2__ {scalar_t__ width; int height; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct v4l2_framebuffer *VAR_2,
   struct v4l2_window *VAR_3)
{
 struct v4l2_rect VAR_4;


 VAR_4 = VAR_3->w;




 if (VAR_4.left < 0) {
  VAR_4.width += VAR_4.left;
  VAR_4.left = 0;
 }
 if (VAR_4.top < 0) {
  VAR_4.height += VAR_4.top;
  VAR_4.top = 0;
 }
 VAR_4.width = (VAR_4.width < VAR_2->fmt.width) ?
  VAR_4.width : VAR_2->fmt.width;
 VAR_4.height = (VAR_4.height < VAR_2->fmt.height) ?
  VAR_4.height : VAR_2->fmt.height;
 if (VAR_4.left + VAR_4.width > VAR_2->fmt.width)
  VAR_4.width = VAR_2->fmt.width - VAR_4.left;
 if (VAR_4.top + VAR_4.height > VAR_2->fmt.height)
  VAR_4.height = VAR_2->fmt.height - VAR_4.top;
 VAR_4.width &= ~1;
 VAR_4.height &= ~1;

 if (VAR_4.width <= 0 || VAR_4.height <= 0)
  return -VAR_0;


 VAR_3->w = VAR_4;
 VAR_3->field = VAR_1;
 VAR_3->clips = ((void*)0);
 VAR_3->clipcount = 0;
 VAR_3->bitmap = ((void*)0);

 return 0;
}
