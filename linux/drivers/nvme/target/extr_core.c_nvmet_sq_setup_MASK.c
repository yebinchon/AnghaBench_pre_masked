
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct nvmet_sq {size_t qid; size_t size; scalar_t__ sqhd; } ;
struct nvmet_ctrl {struct nvmet_sq** sqs; } ;



void FUNC_0(struct nvmet_ctrl *VAR_0, struct nvmet_sq *VAR_1,
  u16 VAR_2, u16 VAR_3)
{
 VAR_1->sqhd = 0;
 VAR_1->qid = VAR_2;
 VAR_1->size = VAR_3;

 VAR_0->sqs[VAR_2] = VAR_1;
}
