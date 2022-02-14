
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_async_notifier_operations {int dummy; } ;
struct TYPE_2__ {struct v4l2_async_notifier_operations const* ops; int asd_list; } ;
struct imx_media_dev {int v4l2_dev; TYPE_1__ notifier; } ;


 int VAR_0 ;
 struct v4l2_async_notifier_operations const VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,...) ;

int FUNC_3(struct imx_media_dev *VAR_2,
       const struct v4l2_async_notifier_operations *VAR_3)
{
 int VAR_4;


 if (FUNC_0(&VAR_2->notifier.asd_list)) {
  FUNC_2(&VAR_2->v4l2_dev, "no subdevs\n");
  return -VAR_0;
 }


 VAR_2->notifier.ops = VAR_3 ? VAR_3 : &VAR_1;
 VAR_4 = FUNC_1(&VAR_2->v4l2_dev,
        &VAR_2->notifier);
 if (VAR_4) {
  FUNC_2(&VAR_2->v4l2_dev,
    "v4l2_async_notifier_register failed with %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
