
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_video_queue {int dummy; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct uvc_buffer {TYPE_1__ buf; scalar_t__ bytesused; int state; scalar_t__ error; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uvc_video_queue *VAR_1,
  struct uvc_buffer *VAR_2)
{
 VAR_2->error = 0;
 VAR_2->state = VAR_0;
 VAR_2->bytesused = 0;
 FUNC_1(&VAR_2->buf.vb2_buf, 0, 0);

 FUNC_0(&VAR_2->buf.vb2_buf);
}
