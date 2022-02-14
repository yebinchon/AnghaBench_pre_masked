
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_tvnorm {int luma_control; int sync_control; int chroma_ctrl1; int src_timing; int chroma_gain; int chroma_ctrl2; int vgate_misc; } ;
struct saa7134_dev {int ctl_bright; int ctl_contrast; int ctl_saturation; int ctl_hue; scalar_t__ ctl_invert; scalar_t__ nosignal; int ctl_input; struct saa7134_tvnorm* tvnorm; } ;
struct TYPE_2__ {int vmux; } ;


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
 TYPE_1__ FUNC_0 (struct saa7134_dev*,int ) ;
 scalar_t__ VAR_28 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct saa7134_dev *VAR_29)
{
 int VAR_30, VAR_31, VAR_32, VAR_33;

 struct saa7134_tvnorm *VAR_34 = VAR_29->tvnorm;
 VAR_33 = FUNC_0(VAR_29, VAR_29->ctl_input).vmux;

 VAR_30 = VAR_34->luma_control;
 VAR_31 = VAR_34->sync_control;
 VAR_32 = VAR_34->chroma_ctrl1;

 if (VAR_33 > 5)
  VAR_30 |= 0x80;
 if (VAR_28 || VAR_29->nosignal)
  VAR_31 |= 0x20;


 VAR_31 |= VAR_25;
 VAR_32 |= VAR_6;
 VAR_32 &= ~VAR_7;
 VAR_30 &= ~VAR_18;


 FUNC_1(VAR_16, 0x08);
 FUNC_1(VAR_1, 0xc0 | VAR_33);
 FUNC_1(VAR_2, 0x00);

 FUNC_1(VAR_3, 0x90);
 FUNC_1(VAR_4, 0x90);
 FUNC_1(VAR_14, 0xeb);
 FUNC_1(VAR_15, 0xe0);
 FUNC_1(VAR_23, VAR_34->src_timing);

 FUNC_1(VAR_24, VAR_31);
 FUNC_1(VAR_17, VAR_30);
 FUNC_1(VAR_12, VAR_29->ctl_bright);

 FUNC_1(VAR_13,
  VAR_29->ctl_invert ? -VAR_29->ctl_contrast : VAR_29->ctl_contrast);

 FUNC_1(VAR_11,
  VAR_29->ctl_invert ? -VAR_29->ctl_saturation : VAR_29->ctl_saturation);

 FUNC_1(VAR_10, VAR_29->ctl_hue);
 FUNC_1(VAR_5, VAR_32);
 FUNC_1(VAR_9, VAR_34->chroma_gain);

 FUNC_1(VAR_8, VAR_34->chroma_ctrl2);
 FUNC_1(VAR_20, 0x00);

 FUNC_1(VAR_0, 0x01);
 FUNC_1(VAR_26, 0x11);
 FUNC_1(VAR_27, 0xfe);
 FUNC_1(VAR_19, VAR_34->vgate_misc);
 FUNC_1(VAR_21, 0x40);
 FUNC_1(VAR_22, 0x80);
}
