
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int colorspace; int sizeimage; int bytesperline; int field; int height; int width; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_3__ fmt; } ;
struct TYPE_4__ {int dwMaxVideoFrameSize; } ;
struct uvc_streaming {scalar_t__ type; int mutex; TYPE_1__ ctrl; struct uvc_frame* cur_frame; struct uvc_format* cur_format; } ;
struct uvc_frame {int wHeight; int wWidth; } ;
struct uvc_format {int colorspace; int fcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvc_format*,struct uvc_frame*) ;

__attribute__((used)) static int FUNC_3(struct uvc_streaming *VAR_2,
 struct v4l2_format *VAR_3)
{
 struct uvc_format *VAR_4;
 struct uvc_frame *VAR_5;
 int VAR_6 = 0;

 if (VAR_3->type != VAR_2->type)
  return -VAR_0;

 FUNC_0(&VAR_2->mutex);
 VAR_4 = VAR_2->cur_format;
 VAR_5 = VAR_2->cur_frame;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_3->fmt.pix.pixelformat = VAR_4->fcc;
 VAR_3->fmt.pix.width = VAR_5->wWidth;
 VAR_3->fmt.pix.height = VAR_5->wHeight;
 VAR_3->fmt.pix.field = VAR_1;
 VAR_3->fmt.pix.bytesperline = FUNC_2(VAR_4, VAR_5);
 VAR_3->fmt.pix.sizeimage = VAR_2->ctrl.dwMaxVideoFrameSize;
 VAR_3->fmt.pix.colorspace = VAR_4->colorspace;

done:
 FUNC_1(&VAR_2->mutex);
 return VAR_6;
}
