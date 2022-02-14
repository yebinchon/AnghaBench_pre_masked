
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timestamp; struct vb2_queue* vb2_queue; } ;
struct vb2_v4l2_buffer {TYPE_1__ vb2_buf; int field; scalar_t__ sequence; } ;
struct vb2_queue {scalar_t__ type; } ;
struct au0828_dmaqueue {int dummy; } ;
struct au0828_dev {int vbi_frame_count; int frame_count; } ;
struct au0828_buffer {int top_field; struct vb2_v4l2_buffer vb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct au0828_buffer*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct au0828_dev *VAR_3,
     struct au0828_dmaqueue *VAR_4,
     struct au0828_buffer *VAR_5)
{
 struct vb2_v4l2_buffer *VAR_6 = &VAR_5->vb;
 struct vb2_queue *VAR_7 = VAR_6->vb2_buf.vb2_queue;


 FUNC_0("[%p/%d] wakeup\n", VAR_5, VAR_5->top_field);

 if (VAR_7->type == VAR_0)
  VAR_6->sequence = VAR_3->frame_count++;
 else
  VAR_6->sequence = VAR_3->vbi_frame_count++;

 VAR_6->field = VAR_1;
 VAR_6->vb2_buf.timestamp = FUNC_1();
 FUNC_2(&VAR_6->vb2_buf, VAR_2);
}
