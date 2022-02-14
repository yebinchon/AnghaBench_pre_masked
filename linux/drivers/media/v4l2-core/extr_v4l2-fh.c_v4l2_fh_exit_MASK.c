
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int * vdev; int subscribe_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct v4l2_fh*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct v4l2_fh *VAR_0)
{
 if (VAR_0->vdev == ((void*)0))
  return;
 FUNC_2(VAR_0->vdev);
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->subscribe_lock);
 VAR_0->vdev = ((void*)0);
}
