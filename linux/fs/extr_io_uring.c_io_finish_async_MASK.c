
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int ** sqo_wq; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct io_ring_ctx*) ;

__attribute__((used)) static void FUNC_3(struct io_ring_ctx *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->sqo_wq); VAR_1++) {
  if (VAR_0->sqo_wq[VAR_1]) {
   FUNC_1(VAR_0->sqo_wq[VAR_1]);
   VAR_0->sqo_wq[VAR_1] = ((void*)0);
  }
 }
}
