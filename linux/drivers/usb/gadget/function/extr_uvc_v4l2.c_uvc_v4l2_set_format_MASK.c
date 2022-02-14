
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_3__ {int width; unsigned int height; unsigned int sizeimage; unsigned int bytesperline; scalar_t__ priv; int colorspace; int field; scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct uvc_video {int bpp; int width; unsigned int height; unsigned int imagesize; scalar_t__ fcc; } ;
struct uvc_format {int bpp; scalar_t__ fcc; } ;
struct uvc_device {int func; struct uvc_video video; } ;
struct file {int dummy; } ;


 unsigned int FUNC_0 (struct uvc_format*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uvc_format* VAR_3 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 struct video_device* FUNC_2 (struct file*) ;
 struct uvc_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct video_device *VAR_7 = FUNC_2(VAR_4);
 struct uvc_device *VAR_8 = FUNC_3(VAR_7);
 struct uvc_video *VAR_9 = &VAR_8->video;
 struct uvc_format *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); ++VAR_13) {
  VAR_10 = &VAR_3[VAR_13];
  if (VAR_10->fcc == VAR_6->fmt.pix.pixelformat)
   break;
 }

 if (VAR_13 == FUNC_0(VAR_3)) {
  FUNC_1(&VAR_8->func, "Unsupported format 0x%08x.\n",
     VAR_6->fmt.pix.pixelformat);
  return -VAR_0;
 }

 VAR_12 = VAR_10->bpp * VAR_6->fmt.pix.width / 8;
 VAR_11 = VAR_12 ? VAR_12 * VAR_6->fmt.pix.height : VAR_6->fmt.pix.sizeimage;

 VAR_9->fcc = VAR_10->fcc;
 VAR_9->bpp = VAR_10->bpp;
 VAR_9->width = VAR_6->fmt.pix.width;
 VAR_9->height = VAR_6->fmt.pix.height;
 VAR_9->imagesize = VAR_11;

 VAR_6->fmt.pix.field = VAR_2;
 VAR_6->fmt.pix.bytesperline = VAR_12;
 VAR_6->fmt.pix.sizeimage = VAR_11;
 VAR_6->fmt.pix.colorspace = VAR_1;
 VAR_6->fmt.pix.priv = 0;

 return 0;
}
