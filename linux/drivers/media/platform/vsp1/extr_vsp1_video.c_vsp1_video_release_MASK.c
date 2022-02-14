
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct v4l2_fh* owner; } ;
struct vsp1_video {int vsp1; int lock; TYPE_1__ queue; } ;
struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct vsp1_video* FUNC_4 (struct file*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct vsp1_video *VAR_1 = FUNC_4(VAR_0);
 struct v4l2_fh *VAR_2 = VAR_0->private_data;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->queue.owner == VAR_2) {
  FUNC_3(&VAR_1->queue);
  VAR_1->queue.owner = ((void*)0);
 }
 FUNC_1(&VAR_1->lock);

 FUNC_5(VAR_1->vsp1);

 FUNC_2(VAR_0);

 VAR_0->private_data = ((void*)0);

 return 0;
}
