
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int cq_head; int q_depth; int cq_phase; } ;



__attribute__((used)) static inline void FUNC_0(struct nvme_queue *VAR_0)
{
 if (VAR_0->cq_head == VAR_0->q_depth - 1) {
  VAR_0->cq_head = 0;
  VAR_0->cq_phase = !VAR_0->cq_phase;
 } else {
  VAR_0->cq_head++;
 }
}
