
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {int prio; TYPE_1__* vdev; int list; } ;
struct TYPE_2__ {int prio; int fh_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct v4l2_fh *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->vdev->fh_lock, VAR_1);
 FUNC_0(&VAR_0->list);
 FUNC_2(&VAR_0->vdev->fh_lock, VAR_1);
 FUNC_3(VAR_0->vdev->prio, VAR_0->prio);
}
