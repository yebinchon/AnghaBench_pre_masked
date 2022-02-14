
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_disp_buffer {int list; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct common_obj {int irqlock; int dma_queue; } ;
struct channel_obj {struct common_obj* common; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct vpif_disp_buffer* FUNC_4 (struct vb2_v4l2_buffer*) ;
 struct channel_obj* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_3(VAR_1);
 struct vpif_disp_buffer *VAR_3 = FUNC_4(VAR_2);
 struct channel_obj *VAR_4 = FUNC_5(VAR_1->vb2_queue);
 struct common_obj *VAR_5;
 unsigned long VAR_6;

 VAR_5 = &VAR_4->common[VAR_0];


 FUNC_1(&VAR_5->irqlock, VAR_6);
 FUNC_0(&VAR_3->list, &VAR_5->dma_queue);
 FUNC_2(&VAR_5->irqlock, VAR_6);
}
