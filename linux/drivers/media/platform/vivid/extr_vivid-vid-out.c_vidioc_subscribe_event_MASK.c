
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {TYPE_1__* vdev; } ;
struct v4l2_event_subscription {int type; } ;
struct TYPE_2__ {int vfl_dir; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event_subscription const*) ;
 int FUNC_1 (struct v4l2_fh*,struct v4l2_event_subscription const*) ;

int FUNC_2(struct v4l2_fh *VAR_2,
   const struct v4l2_event_subscription *VAR_3)
{
 switch (VAR_3->type) {
 case 128:
  if (VAR_2->vdev->vfl_dir == VAR_1)
   return FUNC_1(VAR_2, VAR_3);
  break;
 default:
  return FUNC_0(VAR_2, VAR_3);
 }
 return -VAR_0;
}
