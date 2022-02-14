
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_rq {int index; TYPE_1__* ctrl; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;
struct TYPE_2__ {int running; int enable; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct vnic_dev*,char*,int ) ;

int FUNC_3(struct vnic_rq *VAR_1)
{
 unsigned int VAR_2;
 struct vnic_dev *VAR_3 = VAR_1->vdev;
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  FUNC_1(0, &VAR_1->ctrl->enable);


  for (VAR_2 = 20000; VAR_2 > 0; VAR_2--)
   if (!FUNC_0(&VAR_1->ctrl->running))
    break;
  if (!VAR_2) {
   FUNC_2(VAR_3, "Failed to disable RQ[%d]\n",
        VAR_1->index);

   return -VAR_0;
  }
 }

 return 0;
}
