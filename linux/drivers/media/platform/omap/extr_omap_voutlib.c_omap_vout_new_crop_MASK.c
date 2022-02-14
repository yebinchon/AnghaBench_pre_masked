
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; scalar_t__ top; int width; scalar_t__ left; } ;
struct v4l2_window {TYPE_2__ w; } ;
struct v4l2_rect {scalar_t__ left; scalar_t__ width; scalar_t__ top; int height; } ;
struct v4l2_pix_format {scalar_t__ width; int height; } ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(struct v4l2_pix_format *VAR_1,
       struct v4l2_rect *VAR_2, struct v4l2_window *VAR_3,
       struct v4l2_framebuffer *VAR_4, const struct v4l2_rect *VAR_5)
{
 struct v4l2_rect VAR_6;
 unsigned long VAR_7, VAR_8;


 VAR_6 = *VAR_5;


 if (VAR_6.left < 0) {
  VAR_6.width += VAR_6.left;
  VAR_6.left = 0;
 }
 if (VAR_6.top < 0) {
  VAR_6.height += VAR_6.top;
  VAR_6.top = 0;
 }
 VAR_6.width = (VAR_6.width < VAR_1->width) ?
  VAR_6.width : VAR_1->width;
 VAR_6.height = (VAR_6.height < VAR_1->height) ?
  VAR_6.height : VAR_1->height;
 if (VAR_6.left + VAR_6.width > VAR_1->width)
  VAR_6.width = VAR_1->width - VAR_6.left;
 if (VAR_6.top + VAR_6.height > VAR_1->height)
  VAR_6.height = VAR_1->height - VAR_6.top;

 VAR_6.width &= ~1;
 VAR_6.height &= ~1;

 if (VAR_6.width <= 0 || VAR_6.height <= 0)
  return -VAR_0;

 if (FUNC_0()) {
  if (VAR_6.height != VAR_3->w.height) {



   if (VAR_6.width > 768)
    VAR_6.width = 768;
  }
 }

 VAR_7 = (1024 * VAR_6.height) / VAR_3->w.height;
 if (FUNC_0() && (VAR_7 > 2048))
  VAR_7 = 2048;
 else if (FUNC_1() && (VAR_7 > 4096))
  VAR_7 = 4096;

 VAR_3->w.height = ((1024 * VAR_6.height) / VAR_7) & ~1;
 if (VAR_3->w.height == 0)
  VAR_3->w.height = 2;
 if (VAR_3->w.height + VAR_3->w.top > VAR_4->fmt.height) {




  VAR_3->w.height = (VAR_4->fmt.height - VAR_3->w.top) & ~1;
  if (VAR_6.height == 0)
   VAR_6.height = 2;
 }

 VAR_8 = (1024 * VAR_6.width) / VAR_3->w.width;
 if (FUNC_0() && (VAR_8 > 2048))
  VAR_8 = 2048;
 else if (FUNC_1() && (VAR_8 > 4096))
  VAR_8 = 4096;

 VAR_3->w.width = ((1024 * VAR_6.width) / VAR_8) & ~1;
 if (VAR_3->w.width == 0)
  VAR_3->w.width = 2;
 if (VAR_3->w.width + VAR_3->w.left > VAR_4->fmt.width) {




  VAR_3->w.width = (VAR_4->fmt.width - VAR_3->w.left) & ~1;
  if (VAR_6.width == 0)
   VAR_6.width = 2;
 }
 if (FUNC_0()) {
  if ((VAR_6.height/VAR_3->w.height) >= 2)
   VAR_6.height = VAR_3->w.height * 2;

  if ((VAR_6.width/VAR_3->w.width) >= 2)
   VAR_6.width = VAR_3->w.width * 2;

  if (VAR_6.width > 768) {




   if (VAR_6.height != VAR_3->w.height)
    VAR_6.width = 768;
  }
 } else if (FUNC_1()) {
  if ((VAR_6.height/VAR_3->w.height) >= 4)
   VAR_6.height = VAR_3->w.height * 4;

  if ((VAR_6.width/VAR_3->w.width) >= 4)
   VAR_6.width = VAR_3->w.width * 4;
 }

 *VAR_2 = VAR_6;
 return 0;
}
