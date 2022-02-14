
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {scalar_t__ cached_cq_tail; scalar_t__ cached_sq_dropped; int cached_cq_overflow; } ;
struct io_kiocb {scalar_t__ sequence; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct io_ring_ctx *VAR_0,
           struct io_kiocb *VAR_1)
{
 return VAR_1->sequence != VAR_0->cached_cq_tail + VAR_0->cached_sq_dropped
     + FUNC_0(&VAR_0->cached_cq_overflow);
}
