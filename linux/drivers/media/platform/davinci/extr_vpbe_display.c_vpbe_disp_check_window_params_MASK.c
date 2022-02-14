
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct TYPE_2__ {scalar_t__ xres; scalar_t__ yres; scalar_t__ interlaced; } ;
struct vpbe_device {TYPE_1__ current_timings; } ;
struct v4l2_rect {scalar_t__ width; scalar_t__ left; scalar_t__ height; scalar_t__ top; } ;



__attribute__((used)) static void FUNC_0(struct vpbe_display *VAR_0,
   struct v4l2_rect *VAR_1)
{
 struct vpbe_device *VAR_2 = VAR_0->vpbe_dev;

 if ((VAR_1->width == 0) ||
   ((VAR_1->width + VAR_1->left) > VAR_2->current_timings.xres))
  VAR_1->width = VAR_2->current_timings.xres - VAR_1->left;

 if ((VAR_1->height == 0) || ((VAR_1->height + VAR_1->top) >
   VAR_2->current_timings.yres))
  VAR_1->height = VAR_2->current_timings.yres - VAR_1->top;


 if (VAR_2->current_timings.interlaced)
  VAR_1->height &= (~0x01);

}
