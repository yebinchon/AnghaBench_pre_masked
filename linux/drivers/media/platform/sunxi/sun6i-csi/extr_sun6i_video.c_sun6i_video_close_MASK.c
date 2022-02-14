
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct sun6i_video {int lock; int csi; TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int *,int ) ;
 struct sun6i_video* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct sun6i_video *VAR_1 = FUNC_6(VAR_0);
 bool VAR_2;

 FUNC_1(&VAR_1->lock);

 VAR_2 = FUNC_4(VAR_0);

 FUNC_0(VAR_0, ((void*)0));

 FUNC_5(&VAR_1->vdev.entity, 0);

 if (VAR_2)
  FUNC_3(VAR_1->csi, 0);

 FUNC_2(&VAR_1->lock);

 return 0;
}
