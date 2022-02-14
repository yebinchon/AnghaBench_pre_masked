
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int opcode; } ;
struct io_ring_ctx {struct async_list* pending_async; } ;
struct async_list {int dummy; } ;






 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static struct async_list *FUNC_0(struct io_ring_ctx *VAR_2,
       const struct io_uring_sqe *VAR_3)
{
 switch (VAR_3->opcode) {
 case 131:
 case 130:
  return &VAR_2->pending_async[VAR_0];
 case 129:
 case 128:
  return &VAR_2->pending_async[VAR_1];
 default:
  return ((void*)0);
 }
}
