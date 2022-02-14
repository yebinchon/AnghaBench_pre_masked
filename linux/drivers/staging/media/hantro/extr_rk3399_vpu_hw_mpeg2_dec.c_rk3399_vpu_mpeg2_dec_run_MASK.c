
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct v4l2_mpeg2_sequence {int progressive_sequence; } ;
struct v4l2_mpeg2_picture {scalar_t__ picture_structure; scalar_t__ picture_coding_type; int ** f_code; int alternate_scan; int frame_pred_frame_dct; int intra_vlc_format; int intra_dc_precision; int concealment_motion_vectors; int q_scale_type; int top_field_first; } ;
struct v4l2_ctrl_mpeg2_slice_params {int bit_size; int data_bit_offset; struct v4l2_mpeg2_picture picture; struct v4l2_mpeg2_sequence sequence; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;
struct hantro_ctx {TYPE_1__ dst_fmt; struct hantro_dev* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (int) ;
 int FUNC_37 (int) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int) ;
 int FUNC_47 (int ) ;
 int FUNC_48 (int ) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int) ;
 int FUNC_51 (struct hantro_ctx*) ;
 struct v4l2_ctrl_mpeg2_slice_params* FUNC_52 (struct hantro_ctx*,int ) ;
 struct vb2_v4l2_buffer* FUNC_53 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_54 (struct hantro_ctx*) ;
 int FUNC_55 (struct hantro_ctx*) ;
 int FUNC_56 (struct hantro_dev*,struct hantro_ctx*,int *,int *,struct v4l2_mpeg2_sequence const*,struct v4l2_mpeg2_picture const*,struct v4l2_ctrl_mpeg2_slice_params const*) ;
 int FUNC_57 (struct hantro_dev*,struct hantro_ctx*) ;
 int FUNC_58 (struct hantro_dev*,int ) ;
 int FUNC_59 (struct hantro_dev*,int,int ) ;
 int FUNC_60 (struct hantro_dev*,int,int ) ;

void FUNC_61(struct hantro_ctx *VAR_5)
{
 struct hantro_dev *VAR_6 = VAR_5->dev;
 struct vb2_v4l2_buffer *VAR_7, *VAR_8;
 const struct v4l2_ctrl_mpeg2_slice_params *VAR_9;
 const struct v4l2_mpeg2_sequence *VAR_10;
 const struct v4l2_mpeg2_picture *VAR_11;
 u32 VAR_12;

 VAR_7 = FUNC_54(VAR_5);
 VAR_8 = FUNC_53(VAR_5);

 FUNC_55(VAR_5);

 VAR_9 = FUNC_52(VAR_5,
           VAR_2);
 VAR_10 = &VAR_9->sequence;
 VAR_11 = &VAR_9->picture;

 VAR_12 = FUNC_6(0) |
       FUNC_19(0) |
       FUNC_27(1) |
       FUNC_14(0);
 FUNC_60(VAR_6, VAR_12, FUNC_50(50));

 VAR_12 = FUNC_30(1) |
       FUNC_46(VAR_9->bit_size >> 3);
 FUNC_60(VAR_6, VAR_12, FUNC_50(51));

 VAR_12 = FUNC_4(8) |
       FUNC_44(0) |
       FUNC_45(0);
 FUNC_60(VAR_6, VAR_12, FUNC_50(52));

 VAR_12 = FUNC_16(5);
 FUNC_60(VAR_6, VAR_12, FUNC_50(53));

 VAR_12 = FUNC_20(1) |
       FUNC_21(1) |
       FUNC_17(1) |
       FUNC_12(1) |
       FUNC_18(1) |
       FUNC_13(1);
 FUNC_60(VAR_6, VAR_12, FUNC_50(54));

 VAR_12 = FUNC_10(0) |
       FUNC_15(16) |
       FUNC_8(0) |
       FUNC_7(0);
 FUNC_60(VAR_6, VAR_12, FUNC_50(56));

 VAR_12 = FUNC_43(0) |
       FUNC_37(!VAR_10->progressive_sequence) |
       FUNC_36(VAR_11->picture_structure != VAR_0) |
       FUNC_35(VAR_11->picture_coding_type == VAR_3) |
       FUNC_38(VAR_11->picture_coding_type != VAR_4) |
       FUNC_41(VAR_11->picture_structure == VAR_1) |
       FUNC_29(0) |
       FUNC_49(0) |
       FUNC_22(1) |
       FUNC_9(1);
 FUNC_60(VAR_6, VAR_12, FUNC_50(57));

 VAR_12 = FUNC_40(FUNC_1(VAR_5->dst_fmt.width)) |
       FUNC_39(FUNC_0(VAR_5->dst_fmt.height)) |
       FUNC_2(VAR_11->alternate_scan) |
       FUNC_48(VAR_11->top_field_first);
 FUNC_60(VAR_6, VAR_12, FUNC_50(120));

 VAR_12 = FUNC_47(VAR_9->data_bit_offset) |
       FUNC_42(VAR_11->q_scale_type) |
       FUNC_5(VAR_11->concealment_motion_vectors) |
       FUNC_31(VAR_11->intra_dc_precision) |
       FUNC_32(VAR_11->intra_vlc_format) |
       FUNC_28(VAR_11->frame_pred_frame_dct);
 FUNC_60(VAR_6, VAR_12, FUNC_50(122));

 VAR_12 = FUNC_3(VAR_11->alternate_scan) |
       FUNC_25(VAR_11->f_code[0][0]) |
       FUNC_26(VAR_11->f_code[0][1]) |
       FUNC_23(VAR_11->f_code[1][0]) |
       FUNC_24(VAR_11->f_code[1][1]) |
       FUNC_34(1) |
       FUNC_33(1);
 FUNC_60(VAR_6, VAR_12, FUNC_50(136));

 FUNC_57(VAR_6, VAR_5);

 FUNC_56(VAR_6, VAR_5, &VAR_7->vb2_buf,
      &VAR_8->vb2_buf,
      VAR_10, VAR_11, VAR_9);


 FUNC_51(VAR_5);

 VAR_12 = FUNC_58(VAR_6, FUNC_50(57)) | FUNC_11(1);
 FUNC_59(VAR_6, VAR_12, FUNC_50(57));
}
