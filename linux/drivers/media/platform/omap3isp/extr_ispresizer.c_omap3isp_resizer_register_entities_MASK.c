
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_device {TYPE_1__* mdev; } ;
struct TYPE_4__ {int dev; } ;
struct isp_res_device {int video_out; int video_in; TYPE_2__ subdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct isp_res_device*) ;
 int FUNC_1 (int *,struct v4l2_device*) ;
 int FUNC_2 (struct v4l2_device*,TYPE_2__*) ;

int FUNC_3(struct isp_res_device *VAR_0,
           struct v4l2_device *VAR_1)
{
 int VAR_2;


 VAR_0->subdev.dev = VAR_1->mdev->dev;
 VAR_2 = FUNC_2(VAR_1, &VAR_0->subdev);
 if (VAR_2 < 0)
  goto error;

 VAR_2 = FUNC_1(&VAR_0->video_in, VAR_1);
 if (VAR_2 < 0)
  goto error;

 VAR_2 = FUNC_1(&VAR_0->video_out, VAR_1);
 if (VAR_2 < 0)
  goto error;

 return 0;

error:
 FUNC_0(VAR_0);
 return VAR_2;
}
