
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {struct v4l2_async_notifier* subdev_notifier; int dev; } ;
struct v4l2_async_notifier {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_async_notifier*) ;
 struct v4l2_async_notifier* FUNC_2 (int,int ) ;
 int FUNC_3 (struct v4l2_async_notifier*) ;
 int FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (int ,struct v4l2_async_notifier*) ;
 int FUNC_6 (struct v4l2_async_notifier*) ;
 int FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*,struct v4l2_async_notifier*) ;

int FUNC_9(struct v4l2_subdev *VAR_3)
{
 struct v4l2_async_notifier *VAR_4;
 int VAR_5;

 if (FUNC_0(!VAR_3->dev))
  return -VAR_0;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 FUNC_4(VAR_4);

 VAR_5 = FUNC_5(VAR_3->dev,
            VAR_4);
 if (VAR_5 < 0)
  goto out_cleanup;

 VAR_5 = FUNC_8(VAR_3, VAR_4);
 if (VAR_5 < 0)
  goto out_cleanup;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 < 0)
  goto out_unregister;

 VAR_3->subdev_notifier = VAR_4;

 return 0;

out_unregister:
 FUNC_6(VAR_4);

out_cleanup:
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);

 return VAR_5;
}
