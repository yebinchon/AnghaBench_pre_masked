
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_thread {int dma_sync; int src; int tidx; int dma_chan; struct perf_ctx* perf; } ;
struct perf_ctx {int twait; int tsync; TYPE_2__* ntb; TYPE_1__* test_peer; } ;
typedef int dma_cap_mask_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int outbuf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,struct perf_ctx*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct perf_thread *VAR_6)
{
 struct perf_ctx *VAR_7 = VAR_6->perf;
 dma_cap_mask_t VAR_8;

 VAR_6->src = FUNC_9(VAR_7->test_peer->outbuf_size, VAR_3,
     FUNC_3(&VAR_7->ntb->dev));
 if (!VAR_6->src)
  return -VAR_2;

 FUNC_7(VAR_6->src, VAR_7->test_peer->outbuf_size);

 if (!VAR_5)
  return 0;

 FUNC_5(VAR_8);
 FUNC_4(VAR_0, VAR_8);
 VAR_6->dma_chan = FUNC_6(VAR_8, VAR_4, VAR_7);
 if (!VAR_6->dma_chan) {
  FUNC_2(&VAR_7->ntb->dev, "%d: Failed to get DMA channel\n",
   VAR_6->tidx);
  FUNC_0(&VAR_7->tsync);
  FUNC_10(&VAR_7->twait);
  FUNC_8(VAR_6->src);
  return -VAR_1;
 }

 FUNC_1(&VAR_6->dma_sync, 0);

 return 0;
}
