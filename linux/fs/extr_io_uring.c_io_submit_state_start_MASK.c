
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_submit_state {unsigned int ios_left; int * file; scalar_t__ free_reqs; int plug; } ;
struct io_ring_ctx {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct io_submit_state *VAR_0,
      struct io_ring_ctx *VAR_1, unsigned VAR_2)
{
 FUNC_0(&VAR_0->plug);
 VAR_0->free_reqs = 0;
 VAR_0->file = ((void*)0);
 VAR_0->ios_left = VAR_2;
}
