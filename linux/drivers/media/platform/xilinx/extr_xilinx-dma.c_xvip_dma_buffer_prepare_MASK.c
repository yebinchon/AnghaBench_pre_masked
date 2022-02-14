
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_dma_buffer {struct xvip_dma* dma; } ;
struct xvip_dma {int dummy; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct xvip_dma_buffer* FUNC_1 (struct vb2_v4l2_buffer*) ;
 struct xvip_dma* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_0(VAR_0);
 struct xvip_dma *VAR_2 = FUNC_2(VAR_0->vb2_queue);
 struct xvip_dma_buffer *VAR_3 = FUNC_1(VAR_1);

 VAR_3->dma = VAR_2;

 return 0;
}
