
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int bytesperline; int width; int height; int sizeimage; int field; int colorspace; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ pixelformat; int width; int height; int field; int colorspace; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct TYPE_8__ {TYPE_3__ fmt; } ;
struct common_obj {TYPE_4__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 scalar_t__ FUNC_2 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct video_device *VAR_6 = FUNC_0(VAR_3);
 struct channel_obj *VAR_7 = FUNC_1(VAR_6);
 struct common_obj *VAR_8 = &VAR_7->common[VAR_2];
 struct v4l2_pix_format *VAR_9 = &VAR_5->fmt.pix;





 if (VAR_9->pixelformat != VAR_1)
  VAR_9->pixelformat = VAR_8->fmt.fmt.pix.pixelformat;

 if (FUNC_2(VAR_7))
  return -VAR_0;

 VAR_9->colorspace = VAR_8->fmt.fmt.pix.colorspace;
 VAR_9->field = VAR_8->fmt.fmt.pix.field;
 VAR_9->bytesperline = VAR_8->fmt.fmt.pix.width;
 VAR_9->width = VAR_8->fmt.fmt.pix.width;
 VAR_9->height = VAR_8->fmt.fmt.pix.height;
 VAR_9->sizeimage = VAR_9->bytesperline * VAR_9->height * 2;

 return 0;
}
