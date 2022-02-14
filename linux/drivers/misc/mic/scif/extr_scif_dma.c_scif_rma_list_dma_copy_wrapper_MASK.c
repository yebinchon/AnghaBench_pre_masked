
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_dma_comp_cb {int is_cache; int dst_offset; int header_padding; struct scif_dma_comp_cb* temp_buf_to_free; int sdev; int temp_phys; struct scif_dma_comp_cb* temp_buf; int len; int dst_window; int * dma_completion_func; struct scif_dma_comp_cb* cb_cookie; } ;
typedef struct scif_dma_comp_cb u8 ;
typedef int u64 ;
struct scif_endpt {int dummy; } ;
struct scif_copy_work {int src_offset; int dst_offset; int fence_type; int remote_dev; int len; int dst_window; TYPE_1__* src_window; struct scif_dma_comp_cb* comp_cb; scalar_t__ loopback; } ;
struct dma_chan {int device; } ;
typedef int s64 ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 struct scif_dma_comp_cb* FUNC_2 (struct scif_dma_comp_cb*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct scif_copy_work*,struct dma_chan*) ;
 scalar_t__ FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (struct scif_dma_comp_cb*) ;
 struct scif_dma_comp_cb* FUNC_6 (int ,int ) ;
 struct scif_dma_comp_cb* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct scif_dma_comp_cb*) ;
 struct scif_dma_comp_cb* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,struct scif_dma_comp_cb*,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_11 (struct scif_copy_work*) ;
 int FUNC_12 (struct scif_copy_work*,struct dma_chan*) ;
 scalar_t__ FUNC_13 (struct scif_copy_work*,struct scif_dma_comp_cb*,struct dma_chan*,int) ;
 int FUNC_14 (int,TYPE_1__*,struct scif_dma_comp_cb*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct scif_endpt *VAR_8,
       struct scif_copy_work *VAR_9,
       struct dma_chan *VAR_10, off_t VAR_11)
{
 int VAR_12, VAR_13;
 s64 VAR_14 = VAR_9->src_offset, VAR_15 = VAR_9->dst_offset;
 u8 *VAR_16 = ((void*)0);
 bool VAR_17 = 1;
 struct scif_dma_comp_cb *VAR_18;
 int VAR_19;

 if (FUNC_4(VAR_10->device, 1, 1, 1))
  return FUNC_3(VAR_9, VAR_10);

 VAR_12 = VAR_14 & (VAR_2 - 1);
 VAR_13 = VAR_15 & (VAR_2 - 1);

 if (VAR_13 == VAR_12)
  return FUNC_12(VAR_9, VAR_10);

 if (VAR_9->loopback)
  return FUNC_11(VAR_9);
 VAR_17 = VAR_9->src_window->type == VAR_5;


 VAR_18 = FUNC_9(sizeof(*VAR_18), VAR_1);
 if (!VAR_18)
  goto error;

 VAR_9->comp_cb = VAR_18;
 VAR_18->cb_cookie = VAR_18;
 VAR_18->dma_completion_func = &VAR_6;

 if (VAR_9->len + (VAR_2 << 1) < VAR_4) {
  VAR_18->is_cache = 0;

  VAR_16 = FUNC_6(VAR_9->len + (VAR_2 << 1),
          VAR_1);
  if (!VAR_16)
   goto free_comp_cb;
  VAR_18->temp_buf_to_free = VAR_16;

  if (!FUNC_1((u64)VAR_16, VAR_2))
   VAR_16 = FUNC_2(VAR_16, VAR_2);
 } else {
  VAR_18->is_cache = 1;
  VAR_16 = FUNC_7(VAR_7, VAR_1);
  if (!VAR_16)
   goto free_comp_cb;
  VAR_18->temp_buf_to_free = VAR_16;
 }

 if (VAR_17) {
  VAR_16 += VAR_13;
  FUNC_14(VAR_9->src_offset, VAR_9->src_window,
     VAR_16, VAR_9->len, 1);
 } else {
  VAR_18->dst_window = VAR_9->dst_window;
  VAR_18->dst_offset = VAR_9->dst_offset;
  VAR_9->src_offset = VAR_9->src_offset - VAR_12;
  VAR_18->len = VAR_9->len;
  VAR_9->len = FUNC_0(VAR_9->len + VAR_12, VAR_2);
  VAR_18->header_padding = VAR_12;
 }
 VAR_18->temp_buf = VAR_16;

 VAR_19 = FUNC_10(&VAR_18->temp_phys, VAR_16,
         VAR_9->remote_dev, VAR_4);
 if (VAR_19)
  goto free_temp_buf;
 VAR_18->sdev = VAR_9->remote_dev;
 if (FUNC_13(VAR_9, VAR_16, VAR_10, VAR_17) < 0)
  goto free_temp_buf;
 if (!VAR_17)
  VAR_9->fence_type = VAR_3;
 return 0;
free_temp_buf:
 if (VAR_18->is_cache)
  FUNC_8(VAR_7, VAR_18->temp_buf_to_free);
 else
  FUNC_5(VAR_18->temp_buf_to_free);
free_comp_cb:
 FUNC_5(VAR_18);
error:
 return -VAR_0;
}
