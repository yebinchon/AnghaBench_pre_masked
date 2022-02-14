
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int width; int height; TYPE_1__* format; } ;
struct TYPE_4__ {int depth; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_3;
 struct cx231xx *VAR_6 = VAR_5->dev;

 VAR_4->fmt.pix.width = VAR_6->width;
 VAR_4->fmt.pix.height = VAR_6->height;
 VAR_4->fmt.pix.pixelformat = VAR_6->format->fourcc;
 VAR_4->fmt.pix.bytesperline = (VAR_6->width * VAR_6->format->depth + 7) >> 3;
 VAR_4->fmt.pix.sizeimage = VAR_4->fmt.pix.bytesperline * VAR_6->height;
 VAR_4->fmt.pix.colorspace = VAR_0;

 VAR_4->fmt.pix.field = VAR_1;

 return 0;
}
