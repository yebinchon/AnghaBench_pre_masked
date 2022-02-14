
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct iss_csi2_device {int video_out; int subdev; } ;


 int FUNC_0 (struct iss_csi2_device*) ;
 int FUNC_1 (int *,struct v4l2_device*) ;
 int FUNC_2 (struct v4l2_device*,int *) ;

int FUNC_3(struct iss_csi2_device *VAR_0,
        struct v4l2_device *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_1, &VAR_0->subdev);
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
