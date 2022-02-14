
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {scalar_t__ state; int reset_work; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_ctrl*) ;

int FUNC_2(struct nvme_ctrl *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3) {
  FUNC_0(&VAR_2->reset_work);
  if (VAR_2->state != VAR_1)
   VAR_3 = -VAR_0;
 }

 return VAR_3;
}
