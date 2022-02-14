
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct hl_dma_fence {int submitted; int completed; int cs_seq; int sequence; struct dma_fence base_fence; int lock; struct dma_fence* fence; struct hl_device* hdev; int job_lock; int refcount; int work_tdr; int job_list; struct hl_ctx* ctx; } ;
struct hl_device {int dev; } ;
struct hl_ctx {int cs_sequence; int cs_lock; struct dma_fence** cs_pending; int asid; } ;
struct hl_cs {int submitted; int completed; int cs_seq; int sequence; struct dma_fence base_fence; int lock; struct dma_fence* fence; struct hl_device* hdev; int job_lock; int refcount; int work_tdr; int job_list; struct hl_ctx* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (struct dma_fence*,int *,int *,int ,int) ;
 int FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct dma_fence*) ;
 int VAR_5 ;
 int FUNC_7 (struct hl_dma_fence*) ;
 struct hl_dma_fence* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 struct hl_dma_fence* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct hl_device *VAR_6, struct hl_ctx *VAR_7,
   struct hl_cs **VAR_8)
{
 struct hl_dma_fence *VAR_9;
 struct dma_fence *VAR_10 = ((void*)0);
 struct hl_cs *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_10(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->ctx = VAR_7;
 VAR_11->submitted = 0;
 VAR_11->completed = 0;
 FUNC_1(&VAR_11->job_list);
 FUNC_0(&VAR_11->work_tdr, VAR_4);
 FUNC_9(&VAR_11->refcount);
 FUNC_12(&VAR_11->job_lock);

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_12 = -VAR_1;
  goto free_cs;
 }

 VAR_9->hdev = VAR_6;
 FUNC_12(&VAR_9->lock);
 VAR_11->fence = &VAR_9->base_fence;

 FUNC_11(&VAR_7->cs_lock);

 VAR_9->cs_seq = VAR_7->cs_sequence;
 VAR_10 = VAR_7->cs_pending[VAR_9->cs_seq & (VAR_3 - 1)];
 if ((VAR_10) && (!FUNC_5(VAR_10))) {
  FUNC_13(&VAR_7->cs_lock);
  FUNC_2(VAR_6->dev,
   "Rejecting CS because of too many in-flights CS\n");
  VAR_12 = -VAR_0;
  goto free_fence;
 }

 FUNC_4(&VAR_9->base_fence, &VAR_5, &VAR_9->lock,
   VAR_7->asid, VAR_7->cs_sequence);

 VAR_11->sequence = VAR_9->cs_seq;

 VAR_7->cs_pending[VAR_9->cs_seq & (VAR_3 - 1)] =
       &VAR_9->base_fence;
 VAR_7->cs_sequence++;

 FUNC_3(&VAR_9->base_fence);

 FUNC_6(VAR_10);

 FUNC_13(&VAR_7->cs_lock);

 *VAR_8 = VAR_11;

 return 0;

free_fence:
 FUNC_7(VAR_9);
free_cs:
 FUNC_7(VAR_11);
 return VAR_12;
}
