
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_417; } ;
struct cx231xx {int radio_ctrl_handler; int ctrl_handler; int vdev; TYPE_1__ board; int dev; int vbi_dev; int radio_dev; } ;


 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cx231xx *VAR_0)
{



 if (FUNC_4(&VAR_0->radio_dev))
  FUNC_5(&VAR_0->radio_dev);
 if (FUNC_4(&VAR_0->vbi_dev)) {
  FUNC_1(VAR_0->dev, "V4L2 device %s deregistered\n",
   FUNC_3(&VAR_0->vbi_dev));
  FUNC_5(&VAR_0->vbi_dev);
 }
 if (FUNC_4(&VAR_0->vdev)) {
  FUNC_1(VAR_0->dev, "V4L2 device %s deregistered\n",
   FUNC_3(&VAR_0->vdev));

  if (VAR_0->board.has_417)
   FUNC_0(VAR_0);

  FUNC_5(&VAR_0->vdev);
 }
 FUNC_2(&VAR_0->ctrl_handler);
 FUNC_2(&VAR_0->radio_ctrl_handler);
}
