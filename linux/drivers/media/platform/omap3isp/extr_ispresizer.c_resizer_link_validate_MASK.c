
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int entity; } ;
struct media_link {int dummy; } ;
struct isp_res_device {int dummy; } ;
struct isp_pipeline {int max_rate; } ;


 int FUNC_0 (struct isp_res_device*,int *) ;
 struct isp_pipeline* FUNC_1 (int *) ;
 struct isp_res_device* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,struct media_link*,struct v4l2_subdev_format*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
     struct media_link *VAR_1,
     struct v4l2_subdev_format *VAR_2,
     struct v4l2_subdev_format *VAR_3)
{
 struct isp_res_device *VAR_4 = FUNC_2(VAR_0);
 struct isp_pipeline *VAR_5 = FUNC_1(&VAR_0->entity);

 FUNC_0(VAR_4, &VAR_5->max_rate);

 return FUNC_3(VAR_0, VAR_1,
       VAR_2, VAR_3);
}
