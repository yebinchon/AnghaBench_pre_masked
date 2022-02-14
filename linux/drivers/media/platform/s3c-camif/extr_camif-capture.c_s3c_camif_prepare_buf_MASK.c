
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* v4l2_dev; } ;
struct camif_vp {TYPE_2__ vdev; int vb_queue; } ;
struct TYPE_3__ {int mdev; } ;


 int FUNC_0 (int *,int ,struct v4l2_buffer*) ;
 struct camif_vp* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     struct v4l2_buffer *VAR_2)
{
 struct camif_vp *VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_3->vb_queue, VAR_3->vdev.v4l2_dev->mdev, VAR_2);
}
