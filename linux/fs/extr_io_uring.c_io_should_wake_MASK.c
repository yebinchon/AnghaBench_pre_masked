
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_wait_queue {scalar_t__ to_wait; scalar_t__ nr_timeouts; struct io_ring_ctx* ctx; } ;
struct io_ring_ctx {int cq_timeouts; int rings; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct io_wait_queue *VAR_0)
{
 struct io_ring_ctx *VAR_1 = VAR_0->ctx;






 return FUNC_1(VAR_1->rings) >= VAR_0->to_wait ||
   FUNC_0(&VAR_1->cq_timeouts) != VAR_0->nr_timeouts;
}
