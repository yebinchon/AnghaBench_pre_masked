
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {struct cobalt_stream* drv_priv; } ;
struct vb2_buffer {size_t index; struct vb2_queue* vb2_queue; } ;
struct sg_dma_desc_info {int dummy; } ;
struct cobalt_stream {int irqlock; int bufs; struct sg_dma_desc_info* dma_desc_info; } ;
struct cobalt_buffer {int list; } ;


 int FUNC_0 (struct cobalt_stream*) ;
 int FUNC_1 (struct sg_dma_desc_info*) ;
 int FUNC_2 (struct sg_dma_desc_info*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct cobalt_buffer* FUNC_6 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_7 (struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_8(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_7(VAR_0);
 struct vb2_queue *VAR_2 = VAR_0->vb2_queue;
 struct cobalt_stream *VAR_3 = VAR_2->drv_priv;
 struct cobalt_buffer *VAR_4 = FUNC_6(VAR_1);
 struct sg_dma_desc_info *VAR_5 = &VAR_3->dma_desc_info[VAR_0->index];
 unsigned long VAR_6;


 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 FUNC_4(&VAR_3->irqlock, VAR_6);
 FUNC_3(&VAR_4->list, &VAR_3->bufs);
 FUNC_0(VAR_3);
 FUNC_5(&VAR_3->irqlock, VAR_6);
}
