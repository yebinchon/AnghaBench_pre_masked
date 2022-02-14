
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw5864_input {int nr; size_t reg_dsp_qp; size_t qp; int reg_emu; int reg_dsp; int resolution; scalar_t__ std; int width; int height; int reg_interlacing; int reg_dsp_codec; int enabled; int reg_dsp_i4x4_weight; int reg_dsp_ref_mvp_lambda; scalar_t__ h264_idr_pic_id; scalar_t__ frame_gop_seqno; scalar_t__ frame_seqno; struct tw5864_dev* root; } ;
struct tw5864_dev {int slock; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;






 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char*,int) ;
 int * VAR_23 ;
 int * VAR_24 ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct tw5864_input*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static int FUNC_18(struct tw5864_input *VAR_25)
{
 struct tw5864_dev *VAR_26 = VAR_25->root;
 int VAR_27 = VAR_25->nr;
 unsigned long VAR_28;
 int VAR_29 = 720;
 int VAR_30;
 int VAR_31 = 0;
 int VAR_32 = 0;
 int VAR_33 = 0x1c;
 int VAR_34 = 0;
 int VAR_35 = 0;

 FUNC_8(&VAR_26->pci->dev, "Enabling channel %d\n", VAR_27);

 VAR_25->frame_seqno = 0;
 VAR_25->frame_gop_seqno = 0;
 VAR_25->h264_idr_pic_id = 0;

 VAR_25->reg_dsp_qp = VAR_25->qp;
 VAR_25->reg_dsp_ref_mvp_lambda = VAR_24[VAR_25->qp];
 VAR_25->reg_dsp_i4x4_weight = VAR_23[VAR_25->qp];
 VAR_25->reg_emu = VAR_10 | VAR_8
  | VAR_12 | VAR_11 | VAR_9;
 VAR_25->reg_dsp = VAR_27
  | VAR_3
  | ((0xa << 8) & VAR_6)
  ;

 VAR_25->resolution = 130;

 VAR_30 = (VAR_25->std == VAR_0) ? 480 : 576;

 VAR_25->width = VAR_29;
 VAR_25->height = VAR_30;

 VAR_25->reg_interlacing = 0x4;

 switch (VAR_25->resolution) {
 case 130:
  VAR_31 = 0x2cf;
  VAR_32 = VAR_25->height - 1;
  VAR_33 = 0x1c;
  VAR_34 = 0;
  VAR_35 = 0;
  VAR_25->reg_dsp_codec |= VAR_1 | VAR_20;
  VAR_25->reg_emu |= VAR_4;
  VAR_25->reg_interlacing = VAR_2 | VAR_5;

  FUNC_16(VAR_15, 1 << VAR_27);
  break;
 case 129:
  VAR_25->height /= 2;
  VAR_25->width /= 2;
  VAR_31 = 0x2cf;
  VAR_32 = VAR_25->height * 2 - 1;
  VAR_33 = 0x1c;
  VAR_34 = 0;
  VAR_35 = 0;
  VAR_25->reg_dsp_codec |= VAR_20;
  VAR_25->reg_emu |= VAR_4;

  FUNC_12(VAR_15, 1 << VAR_27);

  break;
 case 131:
  VAR_25->height /= 4;
  VAR_25->width /= 2;
  VAR_31 = 0x15f;
  VAR_32 = VAR_25->height * 2 - 1;
  VAR_33 = 0x07;
  VAR_34 = 1;
  VAR_35 = 1;
  VAR_25->reg_dsp_codec |= VAR_1;

  FUNC_12(VAR_15, 1 << VAR_27);
  break;
 case 128:
  VAR_25->height /= 4;
  VAR_25->width /= 4;
  VAR_31 = 0x15f;
  VAR_32 = VAR_25->height * 2 - 1;
  VAR_33 = 0x07;
  VAR_34 = 1;
  VAR_35 = 1;
  VAR_25->reg_dsp_codec |= VAR_1;

  FUNC_12(VAR_15, 1 << VAR_27);
  break;
 }


 FUNC_14(FUNC_5(VAR_27), VAR_29 / 4);
 FUNC_14(FUNC_4(VAR_27), VAR_30 / 4);


 FUNC_14(FUNC_7(VAR_27), VAR_25->width / 4);
 FUNC_14(FUNC_6(VAR_27), VAR_25->height / 4);





 VAR_25->width = 704;
 FUNC_14(VAR_21,
   FUNC_13(VAR_21) |
   VAR_22);

 FUNC_17(VAR_7,
    ((VAR_25->width / 16) << 8) | (VAR_25->height / 16));

 FUNC_17(FUNC_2(VAR_27),
    VAR_31);
 FUNC_17(FUNC_3(VAR_27),
    VAR_31);
 FUNC_17(FUNC_0(VAR_27),
    VAR_32);
 FUNC_17(FUNC_1(VAR_27),
    (VAR_32 + 1) / 2 - 1);

 FUNC_11(VAR_25);

 if (VAR_35)
  FUNC_16(VAR_16, 1 << VAR_27);

 FUNC_15(VAR_17, 0x3, 2 * VAR_27,
        VAR_34);

 FUNC_15((VAR_27 < 2
         ? VAR_18
         : VAR_19),
        0x1f, 5 * (VAR_27 % 2),
        VAR_25->std == VAR_0 ? 29 : 24);

 FUNC_15((VAR_27 < 2) ? VAR_13 :
        VAR_14, 0xff, (VAR_27 % 2) * 8,
        VAR_33);

 FUNC_9(&VAR_26->slock, VAR_28);
 VAR_25->enabled = 1;
 FUNC_10(&VAR_26->slock, VAR_28);

 return 0;
}
