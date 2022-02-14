
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int * sqo_thread; int sqo_thread_started; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct io_ring_ctx *VAR_0)
{
 if (VAR_0->sqo_thread) {
  FUNC_2(&VAR_0->sqo_thread_started);





  FUNC_0(VAR_0->sqo_thread);
  FUNC_1(VAR_0->sqo_thread);
  VAR_0->sqo_thread = ((void*)0);
 }
}
