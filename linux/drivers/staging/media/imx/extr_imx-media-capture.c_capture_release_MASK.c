
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int entity; } ;
struct vb2_queue {scalar_t__ owner; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {struct video_device* vfd; } ;
struct capture_priv {int mutex; struct vb2_queue q; TYPE_1__ vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct vb2_queue*) ;
 struct capture_priv* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct capture_priv *VAR_1 = FUNC_5(VAR_0);
 struct video_device *VAR_2 = VAR_1->vdev.vfd;
 struct vb2_queue *VAR_3 = &VAR_1->q;

 FUNC_0(&VAR_1->mutex);

 if (VAR_0->private_data == VAR_3->owner) {
  FUNC_4(VAR_3);
  VAR_3->owner = ((void*)0);
 }

 FUNC_3(&VAR_2->entity, 0);

 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->mutex);
 return 0;
}
