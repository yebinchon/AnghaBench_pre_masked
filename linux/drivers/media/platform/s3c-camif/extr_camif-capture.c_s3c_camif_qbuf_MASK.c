
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* v4l2_dev; } ;
struct camif_vp {void* owner; TYPE_2__ vdev; int vb_queue; int id; } ;
struct TYPE_3__ {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ,struct v4l2_buffer*) ;
 struct camif_vp* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_buffer *VAR_3)
{
 struct camif_vp *VAR_4 = FUNC_2(VAR_1);

 FUNC_0("[vp%d]\n", VAR_4->id);

 if (VAR_4->owner && VAR_4->owner != VAR_2)
  return -VAR_0;

 return FUNC_1(&VAR_4->vb_queue, VAR_4->vdev.v4l2_dev->mdev, VAR_3);
}
