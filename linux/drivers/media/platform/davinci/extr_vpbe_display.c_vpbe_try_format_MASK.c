
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct TYPE_2__ {int xres; int yres; scalar_t__ interlaced; } ;
struct vpbe_device {TYPE_1__ current_timings; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; scalar_t__ field; int width; int height; int bytesperline; int sizeimage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vpbe_display *VAR_4,
   struct v4l2_pix_format *VAR_5, int VAR_6)
{
 struct vpbe_device *VAR_7 = VAR_4->vpbe_dev;
 int VAR_8 = 1;
 int VAR_9 = 32;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if ((VAR_5->pixelformat != VAR_3) &&
     (VAR_5->pixelformat != VAR_2))

  VAR_5->pixelformat = VAR_3;


 if ((VAR_5->field != VAR_0) &&
  (VAR_5->field != VAR_1)) {
  if (VAR_7->current_timings.interlaced)
   VAR_5->field = VAR_0;
  else
   VAR_5->field = VAR_1;
 }

 if (VAR_5->field == VAR_0)
  VAR_8 = 2;

 if (VAR_5->pixelformat == VAR_2)
  VAR_12 = 1;
 else
  VAR_12 = 2;

 VAR_11 = VAR_7->current_timings.xres;
 VAR_10 = VAR_7->current_timings.yres;

 VAR_9 /= VAR_12;

 if (!VAR_5->width || (VAR_5->width < VAR_9) ||
  (VAR_5->width > VAR_11)) {
  VAR_5->width = VAR_7->current_timings.xres;
 }

 if (!VAR_5->height || (VAR_5->height < VAR_8) ||
  (VAR_5->height > VAR_10)) {
  VAR_5->height = VAR_7->current_timings.yres;
 }

 if (VAR_5->bytesperline < (VAR_5->width * VAR_12))
  VAR_5->bytesperline = VAR_5->width * VAR_12;


 VAR_5->bytesperline = ((VAR_5->width * VAR_12 + 31) & ~31);

 if (VAR_5->pixelformat == VAR_2)
  VAR_5->sizeimage = VAR_5->bytesperline * VAR_5->height +
    (VAR_5->bytesperline * VAR_5->height >> 1);
 else
  VAR_5->sizeimage = VAR_5->bytesperline * VAR_5->height;

 return 0;
}
