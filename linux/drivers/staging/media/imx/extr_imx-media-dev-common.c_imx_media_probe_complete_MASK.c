
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_notifier {int dummy; } ;
struct imx_media_dev {int md; int mutex; int v4l2_dev; } ;


 int FUNC_0 (struct v4l2_async_notifier*) ;
 int FUNC_1 (struct imx_media_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct imx_media_dev* FUNC_5 (struct v4l2_async_notifier*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct v4l2_async_notifier *VAR_0)
{
 struct imx_media_dev *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_3(&VAR_1->mutex);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto unlock;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto unlock;

 VAR_2 = FUNC_6(&VAR_1->v4l2_dev);
unlock:
 FUNC_4(&VAR_1->mutex);
 if (VAR_2)
  return VAR_2;

 return FUNC_2(&VAR_1->md);
}
