
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; int v4l2_dev; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_async_notifier *VAR_0,
      struct v4l2_subdev *VAR_1,
      struct v4l2_async_subdev *VAR_2)
{
 FUNC_0(VAR_1->v4l2_dev, "subdev %s bound\n", VAR_1->name);

 return 0;
}
