
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct v4l2_fh {TYPE_1__* vdev; } ;
struct v4l2_event {int dummy; } ;
struct TYPE_2__ {int fh_lock; } ;


 int FUNC_0 (struct v4l2_fh*,struct v4l2_event const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct v4l2_fh *VAR_0, const struct v4l2_event *VAR_1)
{
 unsigned long VAR_2;
 u64 VAR_3 = FUNC_1();

 FUNC_2(&VAR_0->vdev->fh_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_3(&VAR_0->vdev->fh_lock, VAR_2);
}
