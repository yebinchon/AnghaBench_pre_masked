
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_thread {int duration; int copied; int tidx; int dma_sync; int dma_wait; struct perf_ctx* perf; } ;
struct perf_ctx {TYPE_1__* ntb; int tsync; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct perf_thread *VAR_2)
{
 struct perf_ctx *VAR_3 = VAR_2->perf;

 if (!VAR_1)
  goto no_dma_ret;

 FUNC_6(VAR_2->dma_wait,
     (FUNC_0(&VAR_2->dma_sync) == 0 ||
      FUNC_0(&VAR_3->tsync) < 0));

 if (FUNC_0(&VAR_3->tsync) < 0)
  return -VAR_0;

no_dma_ret:
 VAR_2->duration = FUNC_4(FUNC_3(), VAR_2->duration);

 FUNC_1(&VAR_3->ntb->dev, "%d: copied %llu bytes\n",
  VAR_2->tidx, VAR_2->copied);

 FUNC_1(&VAR_3->ntb->dev, "%d: lasted %llu usecs\n",
  VAR_2->tidx, FUNC_5(VAR_2->duration));

 FUNC_1(&VAR_3->ntb->dev, "%d: %llu MBytes/s\n", VAR_2->tidx,
  FUNC_2(VAR_2->copied, FUNC_5(VAR_2->duration)));

 return 0;
}
