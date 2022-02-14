
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int sd; } ;
struct mipid02_dev {int * s_subdev; } ;


 struct mipid02_dev* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_async_notifier *VAR_0,
     struct v4l2_subdev *VAR_1,
     struct v4l2_async_subdev *VAR_2)
{
 struct mipid02_dev *VAR_3 = FUNC_0(VAR_0->sd);

 VAR_3->s_subdev = ((void*)0);
}
