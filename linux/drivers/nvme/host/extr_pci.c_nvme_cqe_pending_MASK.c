
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {size_t cq_head; int cq_phase; TYPE_1__* cqes; } ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct nvme_queue *VAR_0)
{
 return (FUNC_0(VAR_0->cqes[VAR_0->cq_head].status) & 1) ==
   VAR_0->cq_phase;
}
