
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct cedrus_h264_sram_ref_pic {void* mv_col_bot_ptr; void* mv_col_top_ptr; void* chroma_ptr; void* luma_ptr; void* frame_info; void* bottom_field_order_cnt; void* top_field_order_cnt; } ;
struct cedrus_ctx {int dst_fmt; } ;
struct TYPE_7__ {unsigned int position; int pic_type; } ;
struct TYPE_8__ {TYPE_3__ h264; } ;
struct TYPE_5__ {struct vb2_buffer vb2_buf; } ;
struct TYPE_6__ {TYPE_1__ vb; } ;
struct cedrus_buffer {TYPE_4__ codec; TYPE_2__ m2m_buf; } ;


 int FUNC_0 (struct vb2_buffer*,int *,int) ;
 int FUNC_1 (struct cedrus_ctx*,unsigned int,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cedrus_ctx *VAR_0,
    struct cedrus_buffer *VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3,
    struct cedrus_h264_sram_ref_pic *VAR_4)
{
 struct vb2_buffer *VAR_5 = &VAR_1->m2m_buf.vb.vb2_buf;
 unsigned int VAR_6 = VAR_1->codec.h264.position;

 VAR_4->top_field_order_cnt = FUNC_2(VAR_2);
 VAR_4->bottom_field_order_cnt = FUNC_2(VAR_3);
 VAR_4->frame_info = FUNC_2(VAR_1->codec.h264.pic_type << 8);

 VAR_4->luma_ptr = FUNC_2(FUNC_0(VAR_5, &VAR_0->dst_fmt, 0));
 VAR_4->chroma_ptr = FUNC_2(FUNC_0(VAR_5, &VAR_0->dst_fmt, 1));
 VAR_4->mv_col_top_ptr =
  FUNC_2(FUNC_1(VAR_0, VAR_6, 0));
 VAR_4->mv_col_bot_ptr =
  FUNC_2(FUNC_1(VAR_0, VAR_6, 1));
}
