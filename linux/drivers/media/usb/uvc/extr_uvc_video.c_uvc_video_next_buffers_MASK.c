
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct vb2_v4l2_buffer {TYPE_1__ vb2_buf; int field; int sequence; } ;
struct TYPE_4__ {int queue; } ;
struct uvc_streaming {int queue; TYPE_2__ meta; } ;
struct uvc_buffer {scalar_t__ error; int state; struct vb2_v4l2_buffer buf; } ;


 int VAR_0 ;
 struct uvc_buffer* FUNC_0 (int *,struct uvc_buffer*) ;
 int FUNC_1 (struct uvc_streaming*,struct uvc_buffer*) ;

__attribute__((used)) static void FUNC_2(struct uvc_streaming *VAR_1,
  struct uvc_buffer **VAR_2, struct uvc_buffer **VAR_3)
{
 FUNC_1(VAR_1, *VAR_2);

 if (*VAR_3) {
  struct vb2_v4l2_buffer *VAR_4 = &(*VAR_3)->buf;
  const struct vb2_v4l2_buffer *VAR_5 = &(*VAR_2)->buf;

  VAR_4->sequence = VAR_5->sequence;
  VAR_4->field = VAR_5->field;
  VAR_4->vb2_buf.timestamp = VAR_5->vb2_buf.timestamp;

  (*VAR_3)->state = VAR_0;
  if (!(*VAR_3)->error)
   (*VAR_3)->error = (*VAR_2)->error;
  *VAR_3 = FUNC_0(&VAR_1->meta.queue,
        *VAR_3);
 }
 *VAR_2 = FUNC_0(&VAR_1->queue, *VAR_2);
}
