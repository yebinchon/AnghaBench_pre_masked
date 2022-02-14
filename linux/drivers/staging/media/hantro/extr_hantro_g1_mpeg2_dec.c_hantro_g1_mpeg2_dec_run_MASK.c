
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
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (int) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (int) ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (int ) ;
 int FUNC_48 (int) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_51 (struct hantro_ctx*) ;
 int FUNC_52 (struct hantro_dev*,struct hantro_ctx*,int *,int *,struct v4l2_mpeg2_sequence const*,struct v4l2_mpeg2_picture const*,struct v4l2_ctrl_mpeg2_slice_params const*) ;
 int FUNC_53 (struct hantro_dev*,struct hantro_ctx*) ;
 struct v4l2_ctrl_mpeg2_slice_params* FUNC_54 (struct hantro_ctx*,int ) ;
 struct vb2_v4l2_buffer* FUNC_55 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_56 (struct hantro_ctx*) ;
 int FUNC_57 (struct hantro_ctx*) ;
 int FUNC_58 (struct hantro_dev*,int,int ) ;
 int FUNC_59 (struct hantro_dev*,int,int ) ;

void FUNC_60(struct hantro_ctx *VAR_5)
{
 struct hantro_dev *VAR_6 = VAR_5->dev;
 struct vb2_v4l2_buffer *VAR_7, *VAR_8;
 const struct v4l2_ctrl_mpeg2_slice_params *VAR_9;
 const struct v4l2_mpeg2_sequence *VAR_10;
 const struct v4l2_mpeg2_picture *VAR_11;
 u32 VAR_12;

 VAR_7 = FUNC_56(VAR_5);
 VAR_8 = FUNC_55(VAR_5);


 FUNC_57(VAR_5);

 VAR_9 = FUNC_54(VAR_5,
           VAR_2);
 VAR_10 = &VAR_9->sequence;
 VAR_11 = &VAR_9->picture;

 VAR_12 = FUNC_5(0) |
       FUNC_20(1) |
       FUNC_19(1) |
       FUNC_18(1) |
       FUNC_10(1) |
       FUNC_15(1) |
       FUNC_8(0) |
       FUNC_12(0) |
       FUNC_7(1) |
       FUNC_11(1) |
       FUNC_16(1) |
       FUNC_4(0) |
       FUNC_17(0) |
       FUNC_13(16);
 FUNC_59(VAR_6, VAR_12, FUNC_48(2));

 VAR_12 = FUNC_14(5) |
       FUNC_41(0) |
       FUNC_35(!VAR_10->progressive_sequence) |
       FUNC_34(VAR_11->picture_structure != VAR_0) |
       FUNC_33(VAR_11->picture_coding_type == VAR_3) |
       FUNC_36(VAR_11->picture_coding_type != VAR_4) |
       FUNC_39(VAR_11->picture_structure == VAR_1) |
       FUNC_27(0) |
       FUNC_25(1) |
       FUNC_47(0) |
       FUNC_6(0);
 FUNC_59(VAR_6, VAR_12, FUNC_48(3));

 VAR_12 = FUNC_38(FUNC_50(VAR_5->dst_fmt.width)) |
       FUNC_37(FUNC_49(VAR_5->dst_fmt.height)) |
       FUNC_0(VAR_11->alternate_scan) |
       FUNC_46(VAR_11->top_field_first);
 FUNC_59(VAR_6, VAR_12, FUNC_48(4));

 VAR_12 = FUNC_45(VAR_9->data_bit_offset) |
       FUNC_40(VAR_11->q_scale_type) |
       FUNC_3(VAR_11->concealment_motion_vectors) |
       FUNC_29(VAR_11->intra_dc_precision) |
       FUNC_30(VAR_11->intra_vlc_format) |
       FUNC_26(VAR_11->frame_pred_frame_dct);
 FUNC_59(VAR_6, VAR_12, FUNC_48(5));

 VAR_12 = FUNC_28(1) |
       FUNC_44(VAR_9->bit_size >> 3);
 FUNC_59(VAR_6, VAR_12, FUNC_48(6));

 VAR_12 = FUNC_1(VAR_11->alternate_scan) |
       FUNC_23(VAR_11->f_code[0][0]) |
       FUNC_24(VAR_11->f_code[0][1]) |
       FUNC_21(VAR_11->f_code[1][0]) |
       FUNC_22(VAR_11->f_code[1][1]) |
       FUNC_32(1) |
       FUNC_31(1);
 FUNC_59(VAR_6, VAR_12, FUNC_48(18));

 VAR_12 = FUNC_42(0) |
       FUNC_43(0);
 FUNC_59(VAR_6, VAR_12, FUNC_48(48));

 VAR_12 = FUNC_2(8);
 FUNC_59(VAR_6, VAR_12, FUNC_48(55));

 FUNC_53(VAR_6, VAR_5);

 FUNC_52(VAR_6, VAR_5, &VAR_7->vb2_buf,
     &VAR_8->vb2_buf,
     VAR_10, VAR_11, VAR_9);

 FUNC_51(VAR_5);

 VAR_12 = FUNC_9(1);
 FUNC_58(VAR_6, VAR_12, FUNC_48(1));
}
