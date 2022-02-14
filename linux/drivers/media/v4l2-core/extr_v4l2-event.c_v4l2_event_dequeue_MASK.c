
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {scalar_t__ navailable; TYPE_1__* vdev; int wait; } ;
struct v4l2_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct v4l2_fh *VAR_1, struct v4l2_event *VAR_2,
         int VAR_3)
{
 int VAR_4;

 if (VAR_3)
  return FUNC_0(VAR_1, VAR_2);


 if (VAR_1->vdev->lock)
  FUNC_2(VAR_1->vdev->lock);

 do {
  VAR_4 = FUNC_3(VAR_1->wait,
            VAR_1->navailable != 0);
  if (VAR_4 < 0)
   break;

  VAR_4 = FUNC_0(VAR_1, VAR_2);
 } while (VAR_4 == -VAR_0);

 if (VAR_1->vdev->lock)
  FUNC_1(VAR_1->vdev->lock);

 return VAR_4;
}
