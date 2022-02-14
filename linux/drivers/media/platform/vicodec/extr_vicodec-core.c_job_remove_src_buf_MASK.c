
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vicodec_q_data {int sequence; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct vicodec_ctx {int lock; scalar_t__ cur_buf_offset; TYPE_1__ fh; } ;
struct vb2_v4l2_buffer {scalar_t__ sequence; } ;


 int VAR_0 ;
 struct vicodec_q_data* FUNC_0 (struct vicodec_ctx*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct vicodec_ctx *VAR_1, u32 VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3;
 struct vicodec_q_data *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1->lock);
 VAR_3 = FUNC_4(VAR_1->fh.m2m_ctx);
 VAR_3->sequence = VAR_4->sequence++;
 FUNC_3(VAR_3, VAR_2);
 VAR_1->cur_buf_offset = 0;
 FUNC_2(VAR_1->lock);
}
