
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct TYPE_4__ {int device_caps; struct v4l2_device* v4l2_dev; } ;
struct iss_video {scalar_t__ type; TYPE_1__* iss; TYPE_2__ video; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

int FUNC_2(struct iss_video *VAR_5, struct v4l2_device *VAR_6)
{
 int VAR_7;

 VAR_5->video.v4l2_dev = VAR_6;
 if (VAR_5->type == VAR_0)
  VAR_5->video.device_caps = VAR_2;
 else
  VAR_5->video.device_caps = VAR_3;
 VAR_5->video.device_caps |= VAR_1;

 VAR_7 = FUNC_1(&VAR_5->video, VAR_4, -1);
 if (VAR_7 < 0)
  FUNC_0(VAR_5->iss->dev,
   "could not register video device (%d)\n", VAR_7);

 return VAR_7;
}
