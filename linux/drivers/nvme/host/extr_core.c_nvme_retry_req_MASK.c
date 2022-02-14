
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct request {TYPE_3__* q; } ;
struct nvme_ns {TYPE_1__* ctrl; } ;
struct TYPE_6__ {struct nvme_ns* queuedata; } ;
struct TYPE_5__ {int status; int retries; } ;
struct TYPE_4__ {int* crdt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,unsigned long) ;
 int FUNC_1 (struct request*,int) ;
 TYPE_2__* FUNC_2 (struct request*) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_1)
{
 struct nvme_ns *VAR_2 = VAR_1->q->queuedata;
 unsigned long VAR_3 = 0;
 u16 VAR_4;


 VAR_4 = (FUNC_2(VAR_1)->status & VAR_0) >> 11;
 if (VAR_2 && VAR_4)
  VAR_3 = VAR_2->ctrl->crdt[VAR_4 - 1] * 100;

 FUNC_2(VAR_1)->retries++;
 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_1->q, VAR_3);
}
