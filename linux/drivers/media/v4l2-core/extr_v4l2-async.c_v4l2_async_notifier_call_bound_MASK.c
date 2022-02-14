
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* bound ) (struct v4l2_async_notifier*,struct v4l2_subdev*,struct v4l2_async_subdev*) ;} ;


 int FUNC_0 (struct v4l2_async_notifier*,struct v4l2_subdev*,struct v4l2_async_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_async_notifier *VAR_0,
       struct v4l2_subdev *VAR_1,
       struct v4l2_async_subdev *VAR_2)
{
 if (!VAR_0->ops || !VAR_0->ops->bound)
  return 0;

 return VAR_0->ops->bound(VAR_0, VAR_1, VAR_2);
}
