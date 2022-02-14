
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int * cq_ev_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct io_ring_ctx *VAR_1)
{
 if (VAR_1->cq_ev_fd) {
  FUNC_0(VAR_1->cq_ev_fd);
  VAR_1->cq_ev_fd = ((void*)0);
  return 0;
 }

 return -VAR_0;
}
