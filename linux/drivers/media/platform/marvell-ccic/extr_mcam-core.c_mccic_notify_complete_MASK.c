
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_async_notifier {int dummy; } ;
struct TYPE_2__ {int * ctrl_handler; } ;
struct mcam_camera {int ctrl_handler; TYPE_1__ v4l2_dev; } ;


 struct mcam_camera* FUNC_0 (struct v4l2_async_notifier*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_async_notifier *VAR_0)
{
 struct mcam_camera *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;




 VAR_2 = FUNC_1(&VAR_1->ctrl_handler, 10);
 if (!VAR_2)
  VAR_1->v4l2_dev.ctrl_handler = &VAR_1->ctrl_handler;

 return VAR_2;
}
