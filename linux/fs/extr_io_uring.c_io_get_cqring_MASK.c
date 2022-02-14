
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_cqe {int dummy; } ;
struct TYPE_2__ {int head; } ;
struct io_rings {unsigned int cq_ring_entries; struct io_uring_cqe* cqes; TYPE_1__ cq; } ;
struct io_ring_ctx {unsigned int cached_cq_tail; unsigned int cq_mask; struct io_rings* rings; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static struct io_uring_cqe *FUNC_1(struct io_ring_ctx *VAR_0)
{
 struct io_rings *VAR_1 = VAR_0->rings;
 unsigned VAR_2;

 VAR_2 = VAR_0->cached_cq_tail;





 if (VAR_2 - FUNC_0(VAR_1->cq.head) == VAR_1->cq_ring_entries)
  return ((void*)0);

 VAR_0->cached_cq_tail++;
 return &VAR_1->cqes[VAR_2 & VAR_0->cq_mask];
}
