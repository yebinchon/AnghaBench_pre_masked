
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_ctx {TYPE_1__* threads; int twait; int tsync; } ;
struct TYPE_2__ {int work; int dma_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_ctx *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->tsync, -1);
 FUNC_2(&VAR_1->twait);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(&VAR_1->threads[VAR_2].dma_wait);
  FUNC_1(&VAR_1->threads[VAR_2].work);
 }
}
