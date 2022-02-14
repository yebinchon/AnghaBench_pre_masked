
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int field; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_h264_dpb_entry {int flags; int bottom_field_order_cnt; int top_field_order_cnt; int reference_ts; } ;
struct v4l2_ctrl_h264_decode_params {int bottom_field_order_cnt; int top_field_order_cnt; } ;
struct hantro_h264_reflist_builder {unsigned int* unordered_reflist; size_t num_valid; void** pocs; void* curpoc; struct v4l2_h264_dpb_entry const* dpb; } ;
struct TYPE_9__ {struct v4l2_ctrl_h264_decode_params* decode; } ;
struct TYPE_10__ {struct v4l2_h264_dpb_entry* dpb; TYPE_4__ ctrls; } ;
struct TYPE_8__ {TYPE_2__* m2m_ctx; } ;
struct hantro_ctx {TYPE_5__ h264_dec; TYPE_3__ fh; } ;
struct TYPE_6__ {struct vb2_queue q; } ;
struct TYPE_7__ {TYPE_1__ cap_q_ctx; } ;


 unsigned int FUNC_0 (struct v4l2_h264_dpb_entry*) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (struct hantro_h264_reflist_builder*,int ,int) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 int FUNC_5 (struct vb2_queue*,int ,int ) ;
 int FUNC_6 (struct vb2_queue*,int) ;

__attribute__((used)) static void
FUNC_7(struct hantro_ctx *VAR_1,
       struct hantro_h264_reflist_builder *VAR_2)
{
 const struct v4l2_ctrl_h264_decode_params *VAR_3;
 struct vb2_v4l2_buffer *VAR_4 = FUNC_2(VAR_1);
 const struct v4l2_h264_dpb_entry *VAR_5 = VAR_1->h264_dec.dpb;
 struct vb2_queue *VAR_6 = &VAR_1->fh.m2m_ctx->cap_q_ctx.q;
 unsigned int VAR_7;

 VAR_3 = VAR_1->h264_dec.ctrls.decode;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->dpb = VAR_5;
 VAR_2->curpoc = FUNC_1(VAR_4->field, VAR_3->top_field_order_cnt,
       VAR_3->bottom_field_order_cnt);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1->h264_dec.dpb); VAR_7++) {
  int VAR_8;

  if (!(VAR_5[VAR_7].flags & VAR_0))
   continue;

  VAR_8 = FUNC_5(VAR_6, VAR_5[VAR_7].reference_ts, 0);
  if (VAR_8 < 0)
   continue;

  VAR_4 = FUNC_4(FUNC_6(VAR_6, VAR_8));
  VAR_2->pocs[VAR_7] = FUNC_1(VAR_4->field, VAR_5[VAR_7].top_field_order_cnt,
         VAR_5[VAR_7].bottom_field_order_cnt);
  VAR_2->unordered_reflist[VAR_2->num_valid] = VAR_7;
  VAR_2->num_valid++;
 }

 for (VAR_7 = VAR_2->num_valid; VAR_7 < FUNC_0(VAR_1->h264_dec.dpb); VAR_7++)
  VAR_2->unordered_reflist[VAR_7] = VAR_7;
}
