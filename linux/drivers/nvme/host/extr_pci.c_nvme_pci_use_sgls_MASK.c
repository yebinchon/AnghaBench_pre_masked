
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_iod {TYPE_2__* nvmeq; } ;
struct TYPE_3__ {int sgls; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;
struct TYPE_4__ {int qid; } ;


 unsigned int FUNC_0 (int ,int) ;
 struct nvme_iod* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 unsigned int VAR_0 ;

__attribute__((used)) static inline bool FUNC_4(struct nvme_dev *VAR_1, struct request *VAR_2)
{
 struct nvme_iod *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;

 if (VAR_4 == 0)
  return 0;

 VAR_5 = FUNC_0(FUNC_3(VAR_2), VAR_4);

 if (!(VAR_1->ctrl.sgls & ((1 << 0) | (1 << 1))))
  return 0;
 if (!VAR_3->nvmeq->qid)
  return 0;
 if (!VAR_0 || VAR_5 < VAR_0)
  return 0;
 return 1;
}
