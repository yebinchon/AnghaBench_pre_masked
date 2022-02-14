
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {scalar_t__ state; int vb2_queue; } ;
struct uvc_video_queue {int dummy; } ;
struct uvc_streaming {int dummy; } ;
struct uvc_buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct uvc_streaming* FUNC_1 (struct uvc_video_queue*) ;
 struct uvc_buffer* FUNC_2 (struct vb2_v4l2_buffer*) ;
 int FUNC_3 (struct uvc_streaming*,struct vb2_v4l2_buffer*,struct uvc_buffer*) ;
 struct uvc_video_queue* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct uvc_video_queue *VAR_3 = FUNC_4(VAR_1->vb2_queue);
 struct uvc_streaming *VAR_4 = FUNC_1(VAR_3);
 struct uvc_buffer *VAR_5 = FUNC_2(VAR_2);

 if (VAR_1->state == VAR_0)
  FUNC_3(VAR_4, VAR_2, VAR_5);
}
