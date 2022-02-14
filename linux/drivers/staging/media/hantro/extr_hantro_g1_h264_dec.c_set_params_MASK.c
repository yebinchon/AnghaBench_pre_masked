
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct v4l2_ctrl_h264_sps {int flags; scalar_t__ chroma_format_idc; scalar_t__ log2_max_frame_num_minus4; int max_num_ref_frames; scalar_t__ pic_height_in_map_units_minus1; scalar_t__ pic_width_in_mbs_minus1; } ;
struct v4l2_ctrl_h264_slice_params {int flags; int pic_order_cnt_bit_size; int pic_parameter_set_id; int idr_pic_id; int dec_ref_pic_marking_bit_size; int frame_num; } ;
struct v4l2_ctrl_h264_pps {int flags; scalar_t__ num_ref_idx_l1_default_active_minus1; scalar_t__ num_ref_idx_l0_default_active_minus1; int weighted_bipred_idc; scalar_t__ pic_init_qp_minus26; int second_chroma_qp_index_offset; int chroma_qp_index_offset; } ;
struct v4l2_ctrl_h264_decode_params {int flags; scalar_t__ nal_ref_idc; } ;
struct hantro_h264_dec_ctrls {struct v4l2_ctrl_h264_pps* pps; struct v4l2_ctrl_h264_sps* sps; struct v4l2_ctrl_h264_slice_params* slices; struct v4l2_ctrl_h264_decode_params* decode; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_2__ {struct hantro_h264_dec_ctrls ctrls; } ;
struct hantro_ctx {struct hantro_dev* dev; TYPE_1__ h264_dec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (int ) ;
 int VAR_23 ;
 int FUNC_12 (int ) ;
 int VAR_24 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_20 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct vb2_v4l2_buffer* FUNC_21 (struct hantro_ctx*) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (struct hantro_dev*,int,int ) ;

__attribute__((used)) static void FUNC_24(struct hantro_ctx *VAR_41)
{
 const struct hantro_h264_dec_ctrls *VAR_42 = &VAR_41->h264_dec.ctrls;
 const struct v4l2_ctrl_h264_decode_params *VAR_43 = VAR_42->decode;
 const struct v4l2_ctrl_h264_slice_params *VAR_44 = VAR_42->slices;
 const struct v4l2_ctrl_h264_sps *VAR_45 = VAR_42->sps;
 const struct v4l2_ctrl_h264_pps *VAR_46 = VAR_42->pps;
 struct vb2_v4l2_buffer *VAR_47 = FUNC_21(VAR_41);
 struct hantro_dev *VAR_48 = VAR_41->dev;
 u32 VAR_49;


 VAR_49 = FUNC_0(0x0);
 if (VAR_45->flags & VAR_40)
  VAR_49 |= VAR_5;
 VAR_49 |= VAR_1;
 if (VAR_43->nal_ref_idc)
  VAR_49 |= VAR_6;

 if (!(VAR_45->flags & VAR_39) &&
     (VAR_45->flags & VAR_40 ||
      VAR_44[0].flags & VAR_37))
  VAR_49 |= VAR_3;
 if (VAR_44[0].flags & VAR_37)
  VAR_49 |= VAR_2;
 if (!(VAR_44[0].flags & VAR_36))
  VAR_49 |= VAR_4;
 FUNC_23(VAR_48, VAR_49, VAR_0);


 VAR_49 = FUNC_2(VAR_45->pic_width_in_mbs_minus1 + 1) |
       FUNC_1(VAR_45->pic_height_in_map_units_minus1 + 1) |
       FUNC_3(VAR_45->max_num_ref_frames);
 FUNC_23(VAR_48, VAR_49, VAR_7);


 VAR_49 = FUNC_4(VAR_46->chroma_qp_index_offset) |
       FUNC_5(VAR_46->second_chroma_qp_index_offset);


 VAR_49 |= VAR_10;

 if (VAR_44[0].flags & VAR_37)
  VAR_49 |= VAR_9;
 FUNC_23(VAR_48, VAR_49, VAR_8);


 VAR_49 = VAR_12 |
       FUNC_6(VAR_46->pic_init_qp_minus26 + 26) |
       FUNC_7(FUNC_22(&VAR_47->vb2_buf, 0));
 FUNC_23(VAR_48, VAR_49, VAR_11);


 VAR_49 = FUNC_9(VAR_45->log2_max_frame_num_minus4 + 4) |
       FUNC_8(VAR_44[0].frame_num) |
       FUNC_10(VAR_46->weighted_bipred_idc);
 if (VAR_46->flags & VAR_32)
  VAR_49 |= VAR_15;
 if (VAR_45->flags & VAR_38)
  VAR_49 |= VAR_16;
 if (VAR_45->chroma_format_idc == 0)
  VAR_49 |= VAR_14;
 if (VAR_46->flags & VAR_35)
  VAR_49 |= VAR_17;
 FUNC_23(VAR_48, VAR_49, VAR_13);


 VAR_49 = FUNC_12(VAR_44[0].dec_ref_pic_marking_bit_size) |
       FUNC_11(VAR_44[0].idr_pic_id);
 if (VAR_46->flags & VAR_30)
  VAR_49 |= VAR_20;
 if (VAR_46->flags & VAR_31)
  VAR_49 |= VAR_21;
 if (VAR_46->flags & VAR_33)
  VAR_49 |= VAR_23;
 if (VAR_46->flags & VAR_34)
  VAR_49 |= VAR_19;
 if (VAR_43->flags & VAR_29)
  VAR_49 |= VAR_22;
 FUNC_23(VAR_48, VAR_49, VAR_18);


 VAR_49 = FUNC_14(VAR_44[0].pic_parameter_set_id) |
       FUNC_15(VAR_46->num_ref_idx_l0_default_active_minus1 + 1) |
       FUNC_16(VAR_46->num_ref_idx_l1_default_active_minus1 + 1) |
       FUNC_13(VAR_44[0].pic_order_cnt_bit_size);
 FUNC_23(VAR_48, VAR_49, VAR_24);


 FUNC_23(VAR_48, 0, VAR_25);


 FUNC_23(VAR_48,
      FUNC_17(1) |
      FUNC_18(-5 & 0x3ff) |
      FUNC_19(20),
      VAR_26);


 FUNC_23(VAR_48, 0, VAR_27);


 FUNC_23(VAR_48, FUNC_20(8),
      VAR_28);
}
