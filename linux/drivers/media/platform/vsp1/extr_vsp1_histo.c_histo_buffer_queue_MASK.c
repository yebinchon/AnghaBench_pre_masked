
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_histogram_buffer {int queue; } ;
struct vsp1_histogram {int irqlock; int irqqueue; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct vsp1_histogram_buffer* FUNC_4 (struct vb2_v4l2_buffer*) ;
 struct vsp1_histogram* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_3(VAR_0);
 struct vsp1_histogram *VAR_2 = FUNC_5(VAR_0->vb2_queue);
 struct vsp1_histogram_buffer *VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_2->irqlock, VAR_4);
 FUNC_0(&VAR_3->queue, &VAR_2->irqqueue);
 FUNC_2(&VAR_2->irqlock, VAR_4);
}
