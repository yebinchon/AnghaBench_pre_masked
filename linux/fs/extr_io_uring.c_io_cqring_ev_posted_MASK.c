
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {scalar_t__ cq_ev_fd; int sqo_wait; int wait; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct io_ring_ctx *VAR_0)
{
 if (FUNC_1(&VAR_0->wait))
  FUNC_2(&VAR_0->wait);
 if (FUNC_1(&VAR_0->sqo_wait))
  FUNC_2(&VAR_0->sqo_wait);
 if (VAR_0->cq_ev_fd)
  FUNC_0(VAR_0->cq_ev_fd, 1);
}
