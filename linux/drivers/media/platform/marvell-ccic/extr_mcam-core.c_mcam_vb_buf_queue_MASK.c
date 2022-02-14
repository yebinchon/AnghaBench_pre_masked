
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct mcam_vb_buffer {int queue; } ;
struct mcam_camera {scalar_t__ state; int dev_lock; int flags; int buffers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mcam_camera*) ;
 int FUNC_3 (struct mcam_camera*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct vb2_v4l2_buffer* FUNC_7 (struct vb2_buffer*) ;
 struct mcam_camera* FUNC_8 (int ) ;
 struct mcam_vb_buffer* FUNC_9 (struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_10(struct vb2_buffer *VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4 = FUNC_7(VAR_3);
 struct mcam_vb_buffer *VAR_5 = FUNC_9(VAR_4);
 struct mcam_camera *VAR_6 = FUNC_8(VAR_3->vb2_queue);
 unsigned long VAR_7;
 int VAR_8;

 FUNC_4(&VAR_6->dev_lock, VAR_7);
 VAR_8 = (VAR_6->state == VAR_1) && !FUNC_1(&VAR_6->buffers);
 FUNC_0(&VAR_5->queue, &VAR_6->buffers);
 if (VAR_6->state == VAR_2 && FUNC_6(VAR_0, &VAR_6->flags))
  FUNC_3(VAR_6);
 FUNC_5(&VAR_6->dev_lock, VAR_7);
 if (VAR_8)
  FUNC_2(VAR_6);
}
