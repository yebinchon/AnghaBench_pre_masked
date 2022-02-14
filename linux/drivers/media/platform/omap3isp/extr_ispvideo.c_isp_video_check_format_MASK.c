
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pixelformat; scalar_t__ height; scalar_t__ width; scalar_t__ bytesperline; scalar_t__ sizeimage; scalar_t__ field; } ;
struct TYPE_9__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct TYPE_6__ {scalar_t__ pixelformat; scalar_t__ height; scalar_t__ width; scalar_t__ bytesperline; scalar_t__ sizeimage; scalar_t__ field; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_10__ {TYPE_2__ fmt; } ;
struct isp_video_fh {TYPE_5__ format; } ;
struct isp_video {int dummy; } ;
typedef int format ;


 int VAR_0 ;
 int FUNC_0 (struct isp_video*,struct v4l2_format*) ;
 int FUNC_1 (struct v4l2_format*,TYPE_5__*,int) ;

__attribute__((used)) static int
FUNC_2(struct isp_video *VAR_1, struct isp_video_fh *VAR_2)
{
 struct v4l2_format VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, &VAR_2->format, sizeof(VAR_3));
 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2->format.fmt.pix.pixelformat != VAR_3.fmt.pix.pixelformat ||
     VAR_2->format.fmt.pix.height != VAR_3.fmt.pix.height ||
     VAR_2->format.fmt.pix.width != VAR_3.fmt.pix.width ||
     VAR_2->format.fmt.pix.bytesperline != VAR_3.fmt.pix.bytesperline ||
     VAR_2->format.fmt.pix.sizeimage != VAR_3.fmt.pix.sizeimage ||
     VAR_2->format.fmt.pix.field != VAR_3.fmt.pix.field)
  return -VAR_0;

 return 0;
}
