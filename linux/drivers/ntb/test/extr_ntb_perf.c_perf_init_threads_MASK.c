
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread {int tidx; int work; int dma_wait; int status; struct perf_ctx* perf; } ;
struct perf_ctx {struct perf_thread* threads; int twait; int * peers; int * test_peer; int tcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct perf_ctx *VAR_4)
{
 struct perf_thread *VAR_5;
 int VAR_6;

 VAR_4->tcnt = VAR_0;
 VAR_4->test_peer = &VAR_4->peers[0];
 FUNC_1(&VAR_4->twait);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = &VAR_4->threads[VAR_6];

  VAR_5->perf = VAR_4;
  VAR_5->tidx = VAR_6;
  VAR_5->status = -VAR_1;
  FUNC_1(&VAR_5->dma_wait);
  FUNC_0(&VAR_5->work, VAR_3);
 }
}
