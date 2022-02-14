
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nvme_queue {scalar_t__ sq_tail; scalar_t__ q_depth; scalar_t__ last_sq_tail; int q_db; int dbbuf_sq_ei; int dbbuf_sq_db; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct nvme_queue *VAR_0, bool VAR_1)
{
 if (!VAR_1) {
  u16 VAR_2 = VAR_0->sq_tail + 1;

  if (VAR_2 == VAR_0->q_depth)
   VAR_2 = 0;
  if (VAR_2 != VAR_0->last_sq_tail)
   return;
 }

 if (FUNC_0(VAR_0->sq_tail,
   VAR_0->dbbuf_sq_db, VAR_0->dbbuf_sq_ei))
  FUNC_1(VAR_0->sq_tail, VAR_0->q_db);
 VAR_0->last_sq_tail = VAR_0->sq_tail;
}
