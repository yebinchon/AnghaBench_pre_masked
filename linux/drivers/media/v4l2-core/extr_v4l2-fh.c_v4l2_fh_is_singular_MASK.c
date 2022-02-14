
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {TYPE_1__* vdev; int list; } ;
struct TYPE_2__ {int fh_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct v4l2_fh *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->vdev == ((void*)0))
  return 0;
 FUNC_1(&VAR_0->vdev->fh_lock, VAR_1);
 VAR_2 = FUNC_0(&VAR_0->list);
 FUNC_2(&VAR_0->vdev->fh_lock, VAR_1);
 return VAR_2;
}
