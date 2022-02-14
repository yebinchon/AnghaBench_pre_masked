
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread {int src; int dma_chan; struct perf_ctx* perf; } ;
struct perf_ctx {int twait; int tsync; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_thread *VAR_1)
{
 struct perf_ctx *VAR_2 = VAR_1->perf;

 if (!VAR_0)
  goto no_dma_notify;





 (void)FUNC_2(VAR_1->dma_chan);

 FUNC_1(VAR_1->dma_chan);

no_dma_notify:
 FUNC_0(&VAR_2->tsync);
 FUNC_4(&VAR_2->twait);
 FUNC_3(VAR_1->src);
}
