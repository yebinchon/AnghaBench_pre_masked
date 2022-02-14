
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_i2c_data {TYPE_3__* chip; } ;
struct v4l2_pix_format {unsigned int width; int height; unsigned int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct v4l2_frmsize_discrete {unsigned int width; int height; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int bpp; TYPE_2__* format; struct v4l2_frmsize_discrete* size; } ;
struct TYPE_5__ {int pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct video_i2c_data* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
           struct v4l2_format *VAR_4)
{
 const struct video_i2c_data *VAR_5 = FUNC_0(VAR_2);
 const struct v4l2_frmsize_discrete *VAR_6 = VAR_5->chip->size;
 struct v4l2_pix_format *VAR_7 = &VAR_4->fmt.pix;
 unsigned int VAR_8 = VAR_5->chip->bpp / 8;

 VAR_7->width = VAR_6->width;
 VAR_7->height = VAR_6->height;
 VAR_7->pixelformat = VAR_5->chip->format->pixelformat;
 VAR_7->field = VAR_1;
 VAR_7->bytesperline = VAR_7->width * VAR_8;
 VAR_7->sizeimage = VAR_7->bytesperline * VAR_7->height;
 VAR_7->colorspace = VAR_0;

 return 0;
}
