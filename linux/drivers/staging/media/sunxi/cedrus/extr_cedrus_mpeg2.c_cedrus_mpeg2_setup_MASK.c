
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vb2_queue {int dummy; } ;
struct v4l2_mpeg2_sequence {int vertical_size; int horizontal_size; } ;
struct v4l2_mpeg2_picture {int alternate_scan; int intra_vlc_format; int q_scale_type; int concealment_motion_vectors; int frame_pred_frame_dct; int top_field_first; int picture_structure; int intra_dc_precision; int ** f_code; int picture_coding_type; } ;
struct v4l2_ctrl_mpeg2_slice_params {int data_bit_offset; int bit_size; int backward_ref_ts; int forward_ref_ts; struct v4l2_mpeg2_picture picture; struct v4l2_mpeg2_sequence sequence; } ;
struct v4l2_ctrl_mpeg2_quantization {int * non_intra_quantiser_matrix; scalar_t__ load_non_intra_quantiser_matrix; int * intra_quantiser_matrix; scalar_t__ load_intra_quantiser_matrix; } ;
struct TYPE_8__ {struct v4l2_ctrl_mpeg2_quantization* quantization; struct v4l2_ctrl_mpeg2_slice_params* slice_params; } ;
struct cedrus_run {TYPE_1__* src; TYPE_6__* dst; TYPE_2__ mpeg2; } ;
struct cedrus_dev {int dummy; } ;
struct TYPE_10__ {int m2m_ctx; } ;
struct TYPE_9__ {int height; int width; } ;
struct cedrus_ctx {TYPE_4__ fh; TYPE_3__ src_fmt; struct cedrus_dev* dev; } ;
typedef int dma_addr_t ;
struct TYPE_11__ {int index; } ;
struct TYPE_12__ {TYPE_5__ vb2_buf; } ;
struct TYPE_7__ {int vb2_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
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
 int FUNC_1 (unsigned int,int const) ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_17 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_18 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_20 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_21 (struct cedrus_ctx*,int,int) ;
 int FUNC_22 (struct cedrus_dev*,int ) ;
 int FUNC_23 (struct cedrus_dev*,int ,int) ;
 int * VAR_28 ;
 int * VAR_29 ;
 struct vb2_queue* FUNC_24 (int ,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (struct vb2_queue*,int ,int ) ;

__attribute__((used)) static void FUNC_27(struct cedrus_ctx *VAR_30, struct cedrus_run *VAR_31)
{
 const struct v4l2_ctrl_mpeg2_slice_params *VAR_32;
 const struct v4l2_mpeg2_sequence *VAR_33;
 const struct v4l2_mpeg2_picture *VAR_34;
 const struct v4l2_ctrl_mpeg2_quantization *VAR_35;
 dma_addr_t VAR_36, VAR_37, VAR_38;
 dma_addr_t VAR_39, VAR_40;
 dma_addr_t VAR_41, VAR_42;
 struct cedrus_dev *VAR_43 = VAR_30->dev;
 struct vb2_queue *VAR_44;
 const u8 *VAR_45;
 int VAR_46;
 int VAR_47;
 unsigned int VAR_48;
 u32 VAR_49;

 VAR_32 = VAR_31->mpeg2.slice_params;
 VAR_33 = &VAR_32->sequence;
 VAR_34 = &VAR_32->picture;

 VAR_35 = VAR_31->mpeg2.quantization;


 FUNC_22(VAR_43, VAR_0);



 if (VAR_35 && VAR_35->load_intra_quantiser_matrix)
  VAR_45 = VAR_35->intra_quantiser_matrix;
 else
  VAR_45 = VAR_28;

 for (VAR_48 = 0; VAR_48 < 64; VAR_48++) {
  VAR_49 = FUNC_1(VAR_48, VAR_45[VAR_48]);
  VAR_49 |= VAR_13;

  FUNC_23(VAR_43, VAR_12, VAR_49);
 }



 if (VAR_35 && VAR_35->load_non_intra_quantiser_matrix)
  VAR_45 = VAR_35->non_intra_quantiser_matrix;
 else
  VAR_45 = VAR_29;

 for (VAR_48 = 0; VAR_48 < 64; VAR_48++) {
  VAR_49 = FUNC_1(VAR_48, VAR_45[VAR_48]);
  VAR_49 |= VAR_14;

  FUNC_23(VAR_43, VAR_12, VAR_49);
 }



 VAR_49 = FUNC_14(VAR_34->picture_coding_type);
 VAR_49 |= FUNC_9(0, 0, VAR_34->f_code[0][0]);
 VAR_49 |= FUNC_9(0, 1, VAR_34->f_code[0][1]);
 VAR_49 |= FUNC_9(1, 0, VAR_34->f_code[1][0]);
 VAR_49 |= FUNC_9(1, 1, VAR_34->f_code[1][1]);
 VAR_49 |= FUNC_10(VAR_34->intra_dc_precision);
 VAR_49 |= FUNC_11(VAR_34->picture_structure);
 VAR_49 |= FUNC_15(VAR_34->top_field_first);
 VAR_49 |= FUNC_6(VAR_34->frame_pred_frame_dct);
 VAR_49 |= FUNC_5(VAR_34->concealment_motion_vectors);
 VAR_49 |= FUNC_13(VAR_34->q_scale_type);
 VAR_49 |= FUNC_12(VAR_34->intra_vlc_format);
 VAR_49 |= FUNC_4(VAR_34->alternate_scan);
 VAR_49 |= FUNC_8(0);
 VAR_49 |= FUNC_7(0);

 FUNC_23(VAR_43, VAR_16, VAR_49);



 VAR_49 = FUNC_19(VAR_33->horizontal_size);
 VAR_49 |= FUNC_18(VAR_33->vertical_size);

 FUNC_23(VAR_43, VAR_18, VAR_49);

 VAR_49 = FUNC_17(VAR_30->src_fmt.width);
 VAR_49 |= FUNC_16(VAR_30->src_fmt.height);

 FUNC_23(VAR_43, VAR_17, VAR_49);



 VAR_44 = FUNC_24(VAR_30->fh.m2m_ctx, VAR_1);

 VAR_46 = FUNC_26(VAR_44, VAR_32->forward_ref_ts, 0);
 VAR_39 = FUNC_21(VAR_30, VAR_46, 0);
 VAR_40 = FUNC_21(VAR_30, VAR_46, 1);

 FUNC_23(VAR_43, VAR_11, VAR_39);
 FUNC_23(VAR_43, VAR_10, VAR_40);

 VAR_47 = FUNC_26(VAR_44, VAR_32->backward_ref_ts, 0);
 VAR_41 = FUNC_21(VAR_30, VAR_47, 0);
 VAR_42 = FUNC_21(VAR_30, VAR_47, 1);

 FUNC_23(VAR_43, VAR_3, VAR_41);
 FUNC_23(VAR_43, VAR_2, VAR_42);



 VAR_37 = FUNC_21(VAR_30, VAR_31->dst->vb2_buf.index, 0);
 VAR_38 = FUNC_21(VAR_30, VAR_31->dst->vb2_buf.index, 1);

 FUNC_23(VAR_43, VAR_20, VAR_37);
 FUNC_23(VAR_43, VAR_19, VAR_38);



 FUNC_23(VAR_43, VAR_27,
       VAR_32->data_bit_offset);

 VAR_49 = VAR_32->bit_size - VAR_32->data_bit_offset;
 FUNC_23(VAR_43, VAR_26, VAR_49);



 VAR_36 = FUNC_25(&VAR_31->src->vb2_buf, 0);

 VAR_49 = FUNC_20(VAR_36);
 VAR_49 |= VAR_24;
 VAR_49 |= VAR_23;
 VAR_49 |= VAR_22;

 FUNC_23(VAR_43, VAR_21, VAR_49);

 VAR_49 = VAR_36 + FUNC_0(VAR_32->bit_size, 8);
 FUNC_23(VAR_43, VAR_25, VAR_49);


 VAR_49 = FUNC_3(0) | FUNC_2(0);
 FUNC_23(VAR_43, VAR_15, VAR_49);


 FUNC_23(VAR_43, VAR_9, 0);


 FUNC_23(VAR_43, VAR_4, 0);



 VAR_49 = VAR_6 | VAR_8 |
       VAR_7;

 FUNC_23(VAR_43, VAR_5, VAR_49);
}
