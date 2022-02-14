
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct iss_ipipe_device {int subdev; } ;


 int FUNC_0 (struct iss_ipipe_device*) ;
 int FUNC_1 (struct v4l2_device*,int *) ;

int FUNC_2(struct iss_ipipe_device *VAR_0,
         struct v4l2_device *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, &VAR_0->subdev);
 if (VAR_2 < 0)
  goto error;

 return 0;

error:
 FUNC_0(VAR_0);
 return VAR_2;
}
