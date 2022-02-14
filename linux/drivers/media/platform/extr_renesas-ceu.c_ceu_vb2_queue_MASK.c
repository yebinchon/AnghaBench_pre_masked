
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct ceu_device {int lock; int capture; } ;
struct ceu_buffer {int queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct ceu_device* FUNC_4 (int ) ;
 struct ceu_buffer* FUNC_5 (struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_6(struct vb2_buffer *VAR_0)
{
 struct ceu_device *VAR_1 = FUNC_4(VAR_0->vb2_queue);
 struct vb2_v4l2_buffer *VAR_2 = FUNC_3(VAR_0);
 struct ceu_buffer *VAR_3 = FUNC_5(VAR_2);
 unsigned long VAR_4;

 FUNC_1(&VAR_1->lock, VAR_4);
 FUNC_0(&VAR_3->queue, &VAR_1->capture);
 FUNC_2(&VAR_1->lock, VAR_4);
}
