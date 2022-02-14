
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_device {int dummy; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {struct v4l2_device* v4l2_dev; } ;
struct ceu_subdev {struct v4l2_subdev* v4l2_sd; } ;
struct ceu_device {int num_sd; } ;


 struct ceu_subdev* FUNC_0 (struct v4l2_async_subdev*) ;
 struct ceu_device* FUNC_1 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_async_notifier *VAR_0,
       struct v4l2_subdev *VAR_1,
       struct v4l2_async_subdev *VAR_2)
{
 struct v4l2_device *VAR_3 = VAR_0->v4l2_dev;
 struct ceu_device *VAR_4 = FUNC_1(VAR_3);
 struct ceu_subdev *VAR_5 = FUNC_0(VAR_2);

 VAR_5->v4l2_sd = VAR_1;
 VAR_4->num_sd++;

 return 0;
}
