
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int timestamp; } ;
struct vb2_v4l2_buffer {scalar_t__ sequence; TYPE_1__ vb2_buf; int field; } ;
struct stm32_dcmi {int * active; int buffers_count; int dev; int sequence; } ;
struct dcmi_buf {struct vb2_v4l2_buffer vb; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct stm32_dcmi *VAR_3,
        struct dcmi_buf *VAR_4,
        size_t VAR_5,
        int VAR_6)
{
 struct vb2_v4l2_buffer *VAR_7;

 if (!VAR_4)
  return;

 FUNC_2(&VAR_4->list);

 VAR_7 = &VAR_4->vb;

 VAR_7->sequence = VAR_3->sequence++;
 VAR_7->field = VAR_0;
 VAR_7->vb2_buf.timestamp = FUNC_1();
 FUNC_4(&VAR_7->vb2_buf, 0, VAR_5);
 FUNC_3(&VAR_7->vb2_buf,
   VAR_6 ? VAR_2 : VAR_1);
 FUNC_0(VAR_3->dev, "buffer[%d] done seq=%d, bytesused=%zu\n",
  VAR_7->vb2_buf.index, VAR_7->sequence, VAR_5);

 VAR_3->buffers_count++;
 VAR_3->active = ((void*)0);
}
