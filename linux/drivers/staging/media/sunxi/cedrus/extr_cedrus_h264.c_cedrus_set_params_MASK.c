
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct v4l2_ctrl_h264_sps {int chroma_format_idc; int pic_width_in_mbs_minus1; int pic_height_in_map_units_minus1; int flags; } ;
struct v4l2_ctrl_h264_slice_params {int header_bit_size; int size; int slice_type; int num_ref_idx_l0_active_minus1; int num_ref_idx_l1_active_minus1; int cabac_init_idc; int flags; int disable_deblocking_filter_idc; int slice_alpha_c0_offset_div2; int slice_beta_offset_div2; int slice_qp_delta; } ;
struct v4l2_ctrl_h264_pps {int flags; int weighted_bipred_idc; int second_chroma_qp_index_offset; int chroma_qp_index_offset; int pic_init_qp_minus26; } ;
struct v4l2_ctrl_h264_decode_params {scalar_t__ nal_ref_idc; } ;
struct TYPE_3__ {struct v4l2_ctrl_h264_sps* sps; struct v4l2_ctrl_h264_pps* pps; struct v4l2_ctrl_h264_slice_params* slice_params; struct v4l2_ctrl_h264_decode_params* decode_params; } ;
struct cedrus_run {TYPE_2__* src; TYPE_1__ h264; } ;
struct cedrus_dev {int dummy; } ;
struct cedrus_ctx {struct cedrus_dev* dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct vb2_buffer vb2_buf; } ;


 int FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
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
 int FUNC_1 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_2 (struct cedrus_dev*,int ) ;
 int FUNC_3 (struct cedrus_dev*,int ,int) ;
 int FUNC_4 (struct cedrus_ctx*,struct cedrus_run*) ;
 int FUNC_5 (struct cedrus_ctx*,struct cedrus_run*) ;
 int FUNC_6 (struct cedrus_ctx*,struct cedrus_run*) ;
 int FUNC_7 (struct vb2_buffer*,int ) ;
 int FUNC_8 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_9(struct cedrus_ctx *VAR_44,
         struct cedrus_run *VAR_45)
{
 const struct v4l2_ctrl_h264_decode_params *VAR_46 = VAR_45->h264.decode_params;
 const struct v4l2_ctrl_h264_slice_params *VAR_47 = VAR_45->h264.slice_params;
 const struct v4l2_ctrl_h264_pps *VAR_48 = VAR_45->h264.pps;
 const struct v4l2_ctrl_h264_sps *VAR_49 = VAR_45->h264.sps;
 struct vb2_buffer *VAR_50 = &VAR_45->src->vb2_buf;
 struct cedrus_dev *VAR_51 = VAR_44->dev;
 dma_addr_t VAR_52;
 u32 VAR_53 = VAR_47->header_bit_size;
 u32 VAR_54 = (VAR_47->size * 8) - VAR_53;
 u32 VAR_55;

 FUNC_3(VAR_51, VAR_42, VAR_54);
 FUNC_3(VAR_51, VAR_43, VAR_53);

 VAR_52 = FUNC_7(VAR_50, 0);
 FUNC_3(VAR_51, VAR_41,
       VAR_52 + FUNC_8(VAR_50, 0));
 FUNC_3(VAR_51, VAR_37,
       FUNC_1(VAR_52) |
       VAR_38 | VAR_40 |
       VAR_39);







 FUNC_3(VAR_51, VAR_35,
       VAR_36);

 if (((VAR_48->flags & VAR_3) &&
      (VAR_47->slice_type == VAR_8 ||
       VAR_47->slice_type == VAR_9)) ||
     (VAR_48->weighted_bipred_idc == 1 &&
      VAR_47->slice_type == VAR_7))
  FUNC_4(VAR_44, VAR_45);

 if ((VAR_47->slice_type == VAR_8) ||
     (VAR_47->slice_type == VAR_9) ||
     (VAR_47->slice_type == VAR_7))
  FUNC_5(VAR_44, VAR_45);

 if (VAR_47->slice_type == VAR_7)
  FUNC_6(VAR_44, VAR_45);


 VAR_55 = 0;




 VAR_55 |= (VAR_47->num_ref_idx_l0_active_minus1 & 0x1f) << 10;
 VAR_55 |= (VAR_47->num_ref_idx_l1_active_minus1 & 0x1f) << 5;
 VAR_55 |= (VAR_48->weighted_bipred_idc & 0x3) << 2;
 if (VAR_48->flags & VAR_1)
  VAR_55 |= VAR_19;
 if (VAR_48->flags & VAR_3)
  VAR_55 |= VAR_21;
 if (VAR_48->flags & VAR_0)
  VAR_55 |= VAR_18;
 if (VAR_48->flags & VAR_2)
  VAR_55 |= VAR_20;
 FUNC_3(VAR_51, VAR_17, VAR_55);


 VAR_55 = 0;
 VAR_55 |= (VAR_49->chroma_format_idc & 0x7) << 19;
 VAR_55 |= (VAR_49->pic_width_in_mbs_minus1 & 0xff) << 8;
 VAR_55 |= VAR_49->pic_height_in_map_units_minus1 & 0xff;
 if (VAR_49->flags & VAR_11)
  VAR_55 |= VAR_32;
 if (VAR_49->flags & VAR_12)
  VAR_55 |= VAR_33;
 if (VAR_49->flags & VAR_10)
  VAR_55 |= VAR_31;
 FUNC_3(VAR_51, VAR_30, VAR_55);


 VAR_55 = 0;
 VAR_55 |= VAR_46->nal_ref_idc ? FUNC_0(12) : 0;
 VAR_55 |= (VAR_47->slice_type & 0xf) << 8;
 VAR_55 |= VAR_47->cabac_init_idc & 0x3;
 VAR_55 |= VAR_28;
 if (VAR_47->flags & VAR_6)
  VAR_55 |= VAR_27;
 if (VAR_47->flags & VAR_4)
  VAR_55 |= VAR_25;
 if (VAR_47->flags & VAR_5)
  VAR_55 |= VAR_26;
 FUNC_3(VAR_51, VAR_22, VAR_55);

 VAR_55 = 0;
 VAR_55 |= VAR_24;
 VAR_55 |= (VAR_47->num_ref_idx_l0_active_minus1 & 0x1f) << 24;
 VAR_55 |= (VAR_47->num_ref_idx_l1_active_minus1 & 0x1f) << 16;
 VAR_55 |= (VAR_47->disable_deblocking_filter_idc & 0x3) << 8;
 VAR_55 |= (VAR_47->slice_alpha_c0_offset_div2 & 0xf) << 4;
 VAR_55 |= VAR_47->slice_beta_offset_div2 & 0xf;
 FUNC_3(VAR_51, VAR_23, VAR_55);

 VAR_55 = 0;
 VAR_55 |= (VAR_48->second_chroma_qp_index_offset & 0x3f) << 16;
 VAR_55 |= (VAR_48->chroma_qp_index_offset & 0x3f) << 8;
 VAR_55 |= (VAR_48->pic_init_qp_minus26 + 26 + VAR_47->slice_qp_delta) & 0x3f;
 FUNC_3(VAR_51, VAR_29, VAR_55);


 FUNC_3(VAR_51, VAR_34, FUNC_2(VAR_51, VAR_34));


 FUNC_3(VAR_51, VAR_13,
       VAR_15 |
       VAR_14 |
       VAR_16);
}
