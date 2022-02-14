
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvme_queue {scalar_t__ cq_head; TYPE_1__* cqes; } ;
struct TYPE_2__ {unsigned int command_id; } ;


 scalar_t__ FUNC_0 (struct nvme_queue*) ;
 int FUNC_1 (struct nvme_queue*) ;
 int FUNC_2 (struct nvme_queue*) ;

__attribute__((used)) static inline int FUNC_3(struct nvme_queue *VAR_0, u16 *VAR_1,
      u16 *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;

 *VAR_1 = VAR_0->cq_head;
 while (FUNC_0(VAR_0)) {
  if (VAR_3 == -1U || VAR_0->cqes[VAR_0->cq_head].command_id == VAR_3)
   VAR_4++;
  FUNC_2(VAR_0);
 }
 *VAR_2 = VAR_0->cq_head;

 if (*VAR_1 != *VAR_2)
  FUNC_1(VAR_0);
 return VAR_4;
}
