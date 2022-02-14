
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; scalar_t__ sequence; } ;
struct hantro_dev {int m2m_dev; int clocks; TYPE_1__* variant; int dev; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct hantro_ctx {int (* buf_finish ) (struct hantro_ctx*,int *,unsigned int) ;TYPE_2__ fh; int sequence_cap; int sequence_out; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_3__ {int num_clocks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hantro_ctx*,int *,unsigned int) ;
 int FUNC_5 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct hantro_dev *VAR_1,
         struct hantro_ctx *VAR_2,
         unsigned int VAR_3,
         enum vb2_buffer_state VAR_4)
{
 struct vb2_v4l2_buffer *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_2(VAR_1->dev);
 FUNC_3(VAR_1->dev);
 FUNC_1(VAR_1->variant->num_clocks, VAR_1->clocks);

 VAR_5 = FUNC_8(VAR_2->fh.m2m_ctx);
 VAR_6 = FUNC_6(VAR_2->fh.m2m_ctx);

 if (FUNC_0(!VAR_5))
  return;
 if (FUNC_0(!VAR_6))
  return;

 VAR_5->sequence = VAR_2->sequence_out++;
 VAR_6->sequence = VAR_2->sequence_cap++;

 VAR_7 = VAR_2->buf_finish(VAR_2, &VAR_6->vb2_buf, VAR_3);
 if (VAR_7)
  VAR_4 = VAR_0;

 FUNC_5(VAR_5, VAR_4);
 FUNC_5(VAR_6, VAR_4);

 FUNC_7(VAR_1->m2m_dev, VAR_2->fh.m2m_ctx);
}
