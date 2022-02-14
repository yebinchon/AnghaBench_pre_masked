
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_3__ {int width; int bytesperline; scalar_t__ priv; int colorspace; int sizeimage; int field; int height; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct uvc_video {int width; int bpp; int imagesize; int height; int fcc; } ;
struct uvc_device {struct uvc_video video; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct uvc_device* FUNC_1 (struct video_device*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct video_device *VAR_5 = FUNC_0(VAR_2);
 struct uvc_device *VAR_6 = FUNC_1(VAR_5);
 struct uvc_video *VAR_7 = &VAR_6->video;

 VAR_4->fmt.pix.pixelformat = VAR_7->fcc;
 VAR_4->fmt.pix.width = VAR_7->width;
 VAR_4->fmt.pix.height = VAR_7->height;
 VAR_4->fmt.pix.field = VAR_1;
 VAR_4->fmt.pix.bytesperline = VAR_7->bpp * VAR_7->width / 8;
 VAR_4->fmt.pix.sizeimage = VAR_7->imagesize;
 VAR_4->fmt.pix.colorspace = VAR_0;
 VAR_4->fmt.pix.priv = 0;

 return 0;
}
