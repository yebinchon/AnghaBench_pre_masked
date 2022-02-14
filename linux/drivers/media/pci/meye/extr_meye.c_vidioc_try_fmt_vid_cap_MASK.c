
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; scalar_t__ field; int width; int height; int bytesperline; int sizeimage; scalar_t__ colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_5, void *VAR_6,
    struct v4l2_format *VAR_7)
{
 if (VAR_7->fmt.pix.pixelformat != VAR_4 &&
     VAR_7->fmt.pix.pixelformat != VAR_3)
  return -VAR_0;

 if (VAR_7->fmt.pix.field != VAR_1 &&
     VAR_7->fmt.pix.field != VAR_2)
  return -VAR_0;

 VAR_7->fmt.pix.field = VAR_2;

 if (VAR_7->fmt.pix.width <= 320) {
  VAR_7->fmt.pix.width = 320;
  VAR_7->fmt.pix.height = 240;
 } else {
  VAR_7->fmt.pix.width = 640;
  VAR_7->fmt.pix.height = 480;
 }

 VAR_7->fmt.pix.bytesperline = VAR_7->fmt.pix.width * 2;
 VAR_7->fmt.pix.sizeimage = VAR_7->fmt.pix.height *
          VAR_7->fmt.pix.bytesperline;
 VAR_7->fmt.pix.colorspace = 0;

 return 0;
}
