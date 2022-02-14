
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int entity; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct video_device* vfd; } ;
struct capture_priv {int mutex; int src_sd; TYPE_1__ vdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int *,int) ;
 struct capture_priv* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1)
{
 struct capture_priv *VAR_2 = FUNC_6(VAR_1);
 struct video_device *VAR_3 = VAR_2->vdev.vfd;
 int VAR_4;

 if (FUNC_0(&VAR_2->mutex))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  FUNC_2(VAR_2->src_sd, "v4l2_fh_open failed\n");

 VAR_4 = FUNC_5(&VAR_3->entity, 1);
 if (VAR_4)
  FUNC_4(VAR_1);

 FUNC_1(&VAR_2->mutex);
 return VAR_4;
}
