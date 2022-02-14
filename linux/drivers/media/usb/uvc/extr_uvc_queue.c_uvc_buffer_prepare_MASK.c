
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {scalar_t__ type; int vb2_queue; } ;
struct uvc_video_queue {int flags; } ;
struct uvc_buffer {scalar_t__ bytesused; scalar_t__ length; int mem; scalar_t__ error; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 struct uvc_buffer* FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct uvc_video_queue* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_6 (struct vb2_buffer*,int ) ;
 int FUNC_7 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_6)
{
 struct vb2_v4l2_buffer *VAR_7 = FUNC_0(VAR_6);
 struct uvc_video_queue *VAR_8 = FUNC_4(VAR_6->vb2_queue);
 struct uvc_buffer *VAR_9 = FUNC_3(VAR_7);

 if (VAR_6->type == VAR_5 &&
     FUNC_5(VAR_6, 0) > FUNC_6(VAR_6, 0)) {
  FUNC_2(VAR_4, "[E] Bytes used out of bounds.\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_8->flags & VAR_3))
  return -VAR_1;

 VAR_9->state = VAR_2;
 VAR_9->error = 0;
 VAR_9->mem = FUNC_7(VAR_6, 0);
 VAR_9->length = FUNC_6(VAR_6, 0);
 if (VAR_6->type != VAR_5)
  VAR_9->bytesused = 0;
 else
  VAR_9->bytesused = FUNC_5(VAR_6, 0);

 return 0;
}
