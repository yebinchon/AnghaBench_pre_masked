
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct vb2_buffer {int dummy; } ;
struct v4l2_mpeg2_sequence {int dummy; } ;
struct v4l2_mpeg2_picture {int picture_coding_type; scalar_t__ picture_structure; scalar_t__ top_field_first; } ;
struct v4l2_ctrl_mpeg2_slice_params {int forward_ref_ts; int backward_ref_ts; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct hantro_ctx {TYPE_2__ dst_fmt; TYPE_1__ fh; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct vb2_queue*,int ) ;
 struct vb2_queue* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vb2_buffer*,int ) ;
 int FUNC_4 (struct hantro_dev*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct hantro_dev *VAR_9,
     struct hantro_ctx *VAR_10,
     struct vb2_buffer *VAR_11,
     struct vb2_buffer *VAR_12,
     const struct v4l2_mpeg2_sequence *VAR_13,
     const struct v4l2_mpeg2_picture *VAR_14,
     const struct v4l2_ctrl_mpeg2_slice_params *VAR_15)
{
 dma_addr_t VAR_16 = 0, VAR_17 = 0;
 dma_addr_t VAR_18, VAR_19;
 struct vb2_queue *VAR_20;

 VAR_20 = FUNC_2(VAR_10->fh.m2m_ctx);

 switch (VAR_14->picture_coding_type) {
 case 129:
  VAR_17 = FUNC_1(VAR_20,
            VAR_15->backward_ref_ts);

 case 128:
  VAR_16 = FUNC_1(VAR_20,
           VAR_15->forward_ref_ts);
 }


 VAR_19 = FUNC_3(VAR_11, 0);
 FUNC_4(VAR_9, VAR_19, VAR_8);


 VAR_19 = FUNC_3(VAR_12, 0);
 VAR_18 = VAR_19;

 if (VAR_14->picture_structure == VAR_0)
  VAR_19 += FUNC_0(VAR_10->dst_fmt.width, 16);
 FUNC_4(VAR_9, VAR_19, VAR_3);

 if (!VAR_16)
  VAR_16 = VAR_18;
 if (!VAR_17)
  VAR_17 = VAR_18;


 if (VAR_14->picture_structure == VAR_1 ||
     VAR_14->picture_coding_type == 129 ||
     (VAR_14->picture_structure == VAR_2 &&
      VAR_14->top_field_first) ||
     (VAR_14->picture_structure == VAR_0 &&
      !VAR_14->top_field_first)) {
  FUNC_4(VAR_9, VAR_16, VAR_4);
  FUNC_4(VAR_9, VAR_16, VAR_5);
 } else if (VAR_14->picture_structure == VAR_2) {
  FUNC_4(VAR_9, VAR_16, VAR_4);
  FUNC_4(VAR_9, VAR_18, VAR_5);
 } else if (VAR_14->picture_structure == VAR_0) {
  FUNC_4(VAR_9, VAR_18, VAR_4);
  FUNC_4(VAR_9, VAR_16, VAR_5);
 }


 FUNC_4(VAR_9, VAR_17, VAR_6);
 FUNC_4(VAR_9, VAR_17, VAR_7);
}
