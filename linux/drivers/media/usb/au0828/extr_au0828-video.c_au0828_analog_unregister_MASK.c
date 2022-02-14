
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct au0828_dev {int v4l2_dev; int vbi_dev; int vdev; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct au0828_dev *VAR_2)
{
 FUNC_1(1, "au0828_analog_unregister called\n");


 if (FUNC_0(0).type == VAR_0)
  return 0;

 FUNC_2(&VAR_1);
 FUNC_6(&VAR_2->vdev);
 FUNC_6(&VAR_2->vbi_dev);
 FUNC_3(&VAR_1);

 FUNC_4(&VAR_2->v4l2_dev);
 FUNC_5(&VAR_2->v4l2_dev);

 return 1;
}
