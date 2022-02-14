
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvin_dev {int vdev; int v4l2_dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rvin_dev *VAR_0)
{
 if (!FUNC_2(&VAR_0->vdev))
  return;

 FUNC_0(&VAR_0->v4l2_dev, "Removing %s\n",
    FUNC_1(&VAR_0->vdev));


 FUNC_3(&VAR_0->vdev);
}
