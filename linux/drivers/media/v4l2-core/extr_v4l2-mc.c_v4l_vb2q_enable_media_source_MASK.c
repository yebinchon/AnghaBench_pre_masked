
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct v4l2_fh* owner; } ;
struct v4l2_fh {scalar_t__ vdev; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct vb2_queue *VAR_0)
{
 struct v4l2_fh *VAR_1 = VAR_0->owner;

 if (VAR_1 && VAR_1->vdev)
  return FUNC_0(VAR_1->vdev);
 return 0;
}
