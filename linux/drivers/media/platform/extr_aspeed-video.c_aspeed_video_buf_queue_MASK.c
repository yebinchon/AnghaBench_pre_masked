
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct aspeed_video_buffer {int link; } ;
struct aspeed_video {int flags; int lock; int buffers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_video*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct aspeed_video_buffer* FUNC_6 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_7 (struct vb2_buffer*) ;
 struct aspeed_video* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct vb2_buffer *VAR_2)
{
 bool VAR_3;
 struct aspeed_video *VAR_4 = FUNC_8(VAR_2->vb2_queue);
 struct vb2_v4l2_buffer *VAR_5 = FUNC_7(VAR_2);
 struct aspeed_video_buffer *VAR_6 = FUNC_6(VAR_5);
 unsigned long VAR_7;

 FUNC_3(&VAR_4->lock, VAR_7);
 VAR_3 = FUNC_2(&VAR_4->buffers);
 FUNC_1(&VAR_6->link, &VAR_4->buffers);
 FUNC_4(&VAR_4->lock, VAR_7);

 if (FUNC_5(VAR_1, &VAR_4->flags) &&
     !FUNC_5(VAR_0, &VAR_4->flags) && VAR_3)
  FUNC_0(VAR_4);
}
