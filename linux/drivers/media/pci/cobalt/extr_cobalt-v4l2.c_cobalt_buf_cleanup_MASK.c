
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {size_t index; TYPE_1__* vb2_queue; } ;
struct sg_dma_desc_info {int dummy; } ;
struct cobalt_stream {struct sg_dma_desc_info* dma_desc_info; } ;
struct TYPE_2__ {struct cobalt_stream* drv_priv; } ;


 int FUNC_0 (struct sg_dma_desc_info*) ;

__attribute__((used)) static void FUNC_1(struct vb2_buffer *VAR_0)
{
 struct cobalt_stream *VAR_1 = VAR_0->vb2_queue->drv_priv;
 struct sg_dma_desc_info *VAR_2 = &VAR_1->dma_desc_info[VAR_0->index];

 FUNC_0(VAR_2);
}
