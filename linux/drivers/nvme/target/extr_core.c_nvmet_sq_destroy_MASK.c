
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_sq {TYPE_1__* ctrl; int ref; int free_done; int confirm_done; } ;
struct TYPE_3__ {struct nvmet_sq** sqs; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nvmet_sq *VAR_1)
{




 if (VAR_1->ctrl && VAR_1->ctrl->sqs && VAR_1->ctrl->sqs[0] == VAR_1)
  FUNC_0(VAR_1->ctrl);
 FUNC_3(&VAR_1->ref, VAR_0);
 FUNC_4(&VAR_1->confirm_done);
 FUNC_4(&VAR_1->free_done);
 FUNC_2(&VAR_1->ref);

 if (VAR_1->ctrl) {
  FUNC_1(VAR_1->ctrl);
  VAR_1->ctrl = ((void*)0);
 }
}
