
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx25821_dev {TYPE_1__* channels; } ;
struct TYPE_2__ {int hdl; int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cx25821_dev *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, 1);

 if (FUNC_2(&VAR_1->channels[VAR_2].vdev)) {
  FUNC_3(&VAR_1->channels[VAR_2].vdev);
  FUNC_1(&VAR_1->channels[VAR_2].hdl);
 }
}
