
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct omap_vout_device {int dma_queue; } ;
struct omap_vout_buffer {int queue; } ;


 int FUNC_0 (int *,int *) ;
 struct omap_vout_device* FUNC_1 (int ) ;
 struct omap_vout_buffer* FUNC_2 (struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct omap_vout_device *VAR_1 = FUNC_1(VAR_0->vb2_queue);
 struct omap_vout_buffer *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->queue, &VAR_1->dma_queue);
}
