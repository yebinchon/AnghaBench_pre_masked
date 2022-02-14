
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tw5864_input {int reg_emu; int reg_interlacing; int reg_dsp; int reg_dsp_qp; int reg_dsp_ref_mvp_lambda; int reg_dsp_i4x4_weight; scalar_t__ frame_gop_seqno; int tail_nb_bits; int nr; int h264_idr_pic_id; struct tw5864_dev* root; } ;
struct tw5864_dev {int dummy; } ;


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
 int FUNC_1 (struct tw5864_input*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct tw5864_input *VAR_26)
{
 struct tw5864_dev *VAR_27 = VAR_26->root;
 u32 VAR_28;

 FUNC_4(VAR_2, VAR_0 | VAR_16);
 FUNC_5(VAR_14, VAR_26->reg_emu);
 FUNC_5(VAR_17, VAR_26->reg_interlacing);
 FUNC_5(VAR_1, VAR_26->reg_dsp);

 FUNC_5(VAR_11, VAR_26->reg_dsp_qp);
 FUNC_5(VAR_13, VAR_26->reg_dsp_ref_mvp_lambda);
 FUNC_5(VAR_6, VAR_26->reg_dsp_i4x4_weight);
 FUNC_3(VAR_7, VAR_9,
        VAR_10,
        VAR_8);

 if (VAR_26->frame_gop_seqno == 0) {

  FUNC_5(VAR_20, VAR_18);
  VAR_26->h264_idr_pic_id++;
  VAR_26->h264_idr_pic_id &= VAR_12;
 } else {

  FUNC_5(VAR_20, VAR_18 |
     VAR_19 | FUNC_0(5) );
 }
 FUNC_1(VAR_26);
 FUNC_5(VAR_23,
    VAR_25 |
    ((VAR_26->tail_nb_bits + 24) << VAR_24) |
    VAR_26->reg_dsp_qp);

 VAR_28 = FUNC_2(VAR_15, 0x3,
          2 * VAR_26->nr);
 FUNC_5(VAR_3,
    VAR_28 << VAR_4);
 FUNC_5(VAR_5,
    VAR_28 << 12 | ((VAR_28 + 3) & 3));

 FUNC_5(VAR_21, VAR_22);
 FUNC_5(VAR_21, 0);
}
