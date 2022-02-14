
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vb2_queue {int ** bufs; } ;
struct v4l2_h264_dpb_entry {int flags; int bottom_field_order_cnt; int top_field_order_cnt; int reference_ts; } ;
struct v4l2_ctrl_h264_sps {int flags; } ;
struct v4l2_ctrl_h264_slice_params {int flags; } ;
struct v4l2_ctrl_h264_decode_params {int bottom_field_order_cnt; int top_field_order_cnt; struct v4l2_h264_dpb_entry* dpb; } ;
struct TYPE_8__ {struct v4l2_ctrl_h264_sps* sps; struct v4l2_ctrl_h264_slice_params* slice_params; struct v4l2_ctrl_h264_decode_params* decode_params; } ;
struct cedrus_run {TYPE_5__* dst; TYPE_1__ h264; } ;
struct cedrus_h264_sram_ref_pic {int dummy; } ;
struct cedrus_dev {int dummy; } ;
struct TYPE_11__ {TYPE_3__* m2m_ctx; } ;
struct cedrus_ctx {struct cedrus_dev* dev; TYPE_4__ fh; } ;
struct TYPE_13__ {unsigned int position; int pic_type; } ;
struct TYPE_14__ {TYPE_6__ h264; } ;
struct cedrus_buffer {TYPE_7__ codec; } ;
typedef int pic_list ;
struct TYPE_12__ {int vb2_buf; } ;
struct TYPE_9__ {struct vb2_queue q; } ;
struct TYPE_10__ {TYPE_2__ cap_q_ctx; } ;


 unsigned int FUNC_0 (struct v4l2_h264_dpb_entry*) ;
 unsigned long FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct cedrus_ctx*,struct cedrus_buffer*,int ,int ,struct cedrus_h264_sram_ref_pic*) ;
 int FUNC_3 (struct cedrus_dev*,int ,struct cedrus_h264_sram_ref_pic*,int) ;
 int FUNC_4 (struct cedrus_dev*,int ,unsigned int) ;
 unsigned int FUNC_5 (unsigned long*,int) ;
 unsigned int FUNC_6 (unsigned long*,int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (struct cedrus_h264_sram_ref_pic*,int ,int) ;
 int FUNC_9 (struct vb2_queue*,int ,int ) ;
 struct cedrus_buffer* FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct cedrus_ctx *VAR_10,
        struct cedrus_run *VAR_11)
{
 struct cedrus_h264_sram_ref_pic VAR_12[VAR_0];
 const struct v4l2_ctrl_h264_decode_params *VAR_13 = VAR_11->h264.decode_params;
 const struct v4l2_ctrl_h264_slice_params *VAR_14 = VAR_11->h264.slice_params;
 const struct v4l2_ctrl_h264_sps *VAR_15 = VAR_11->h264.sps;
 struct vb2_queue *VAR_16 = &VAR_10->fh.m2m_ctx->cap_q_ctx.q;
 struct cedrus_buffer *VAR_17;
 struct cedrus_dev *VAR_18 = VAR_10->dev;
 unsigned long VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21 = 0;
 unsigned int VAR_22;

 FUNC_8(VAR_12, 0, sizeof(VAR_12));

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_13->dpb); VAR_22++) {
  const struct v4l2_h264_dpb_entry *VAR_23 = &VAR_13->dpb[VAR_22];
  struct cedrus_buffer *VAR_24;
  int VAR_25;

  if (!(VAR_23->flags & VAR_6))
   continue;

  VAR_25 = FUNC_9(VAR_16, VAR_23->reference_ts, 0);
  if (VAR_25 < 0)
   continue;

  VAR_24 = FUNC_10(VAR_16->bufs[VAR_25]);
  VAR_20 = VAR_24->codec.h264.position;
  VAR_19 |= FUNC_1(VAR_20);

  if (!(VAR_23->flags & VAR_5))
   continue;

  FUNC_2(VAR_10, VAR_24,
        VAR_23->top_field_order_cnt,
        VAR_23->bottom_field_order_cnt,
        &VAR_12[VAR_20]);

  VAR_21 = FUNC_7(VAR_20, VAR_21);
 }

 VAR_20 = FUNC_6(&VAR_19, VAR_0,
          VAR_21);
 if (VAR_20 >= VAR_0)
  VAR_20 = FUNC_5(&VAR_19, VAR_0);

 VAR_17 = FUNC_10(&VAR_11->dst->vb2_buf);
 VAR_17->codec.h264.position = VAR_20;

 if (VAR_14->flags & VAR_7)
  VAR_17->codec.h264.pic_type = VAR_1;
 else if (VAR_15->flags & VAR_8)
  VAR_17->codec.h264.pic_type = VAR_3;
 else
  VAR_17->codec.h264.pic_type = VAR_2;

 FUNC_2(VAR_10, VAR_17,
       VAR_13->top_field_order_cnt,
       VAR_13->bottom_field_order_cnt,
       &VAR_12[VAR_20]);

 FUNC_3(VAR_18, VAR_4,
          VAR_12, sizeof(VAR_12));

 FUNC_4(VAR_18, VAR_9, VAR_20);
}
