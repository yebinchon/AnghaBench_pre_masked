
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct sun6i_video {int lock; int csi; TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int) ;
 struct sun6i_video* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1)
{
 struct sun6i_video *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;

 if (FUNC_0(&VAR_2->lock))
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  goto unlock;

 VAR_3 = FUNC_6(&VAR_2->vdev.entity, 1);
 if (VAR_3 < 0)
  goto fh_release;


 if (!FUNC_3(VAR_1))
  goto unlock;

 VAR_3 = FUNC_2(VAR_2->csi, 1);
 if (VAR_3 < 0)
  goto fh_release;

 FUNC_1(&VAR_2->lock);
 return 0;

fh_release:
 FUNC_5(VAR_1);
unlock:
 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
