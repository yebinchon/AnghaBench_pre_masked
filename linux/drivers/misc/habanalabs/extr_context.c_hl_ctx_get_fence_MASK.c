
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hl_device {int dev; } ;
struct hl_ctx {int cs_sequence; int cs_lock; int * cs_pending; struct hl_device* hdev; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 struct dma_fence* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct dma_fence *FUNC_6(struct hl_ctx *VAR_2, u64 VAR_3)
{
 struct hl_device *VAR_4 = VAR_2->hdev;
 struct dma_fence *VAR_5;

 FUNC_4(&VAR_2->cs_lock);

 if (VAR_3 >= VAR_2->cs_sequence) {
  FUNC_2(VAR_4->dev,
   "Can't wait on seq %llu because current CS is at seq %llu\n",
   VAR_3, VAR_2->cs_sequence);
  FUNC_5(&VAR_2->cs_lock);
  return FUNC_0(-VAR_0);
 }


 if (VAR_3 + VAR_1 < VAR_2->cs_sequence) {
  FUNC_1(VAR_4->dev,
   "Can't wait on seq %llu because current CS is at seq %llu (Fence is gone)\n",
   VAR_3, VAR_2->cs_sequence);
  FUNC_5(&VAR_2->cs_lock);
  return ((void*)0);
 }

 VAR_5 = FUNC_3(
   VAR_2->cs_pending[VAR_3 & (VAR_1 - 1)]);
 FUNC_5(&VAR_2->cs_lock);

 return VAR_5;
}
