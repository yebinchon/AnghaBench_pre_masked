
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ bytesperline; scalar_t__ pixelformat; scalar_t__ height; scalar_t__ width; scalar_t__ sizeimage; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct TYPE_4__ {scalar_t__ pixelformat; scalar_t__ height; scalar_t__ width; scalar_t__ bytesperline; scalar_t__ sizeimage; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct iss_video_fh {TYPE_3__ format; } ;
struct iss_video {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iss_video*,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (struct iss_video*,struct v4l2_mbus_framefmt*,struct v4l2_pix_format*) ;

__attribute__((used)) static int
FUNC_2(struct iss_video *VAR_1, struct iss_video_fh *VAR_2)
{
 struct v4l2_mbus_framefmt VAR_3;
 struct v4l2_pix_format VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4.bytesperline = 0;
 VAR_5 = FUNC_1(VAR_1, &VAR_3, &VAR_4);

 if (VAR_2->format.fmt.pix.pixelformat != VAR_4.pixelformat ||
     VAR_2->format.fmt.pix.height != VAR_4.height ||
     VAR_2->format.fmt.pix.width != VAR_4.width ||
     VAR_2->format.fmt.pix.bytesperline != VAR_4.bytesperline ||
     VAR_2->format.fmt.pix.sizeimage != VAR_4.sizeimage)
  return -VAR_0;

 return VAR_5;
}
