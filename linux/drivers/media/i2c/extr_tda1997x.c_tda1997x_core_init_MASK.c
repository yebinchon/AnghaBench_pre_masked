
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_platform_data {int* vidout_port_cfg; int audout_mclk_fs; } ;
struct tda1997x_state {scalar_t__ chip_revision; void* hdmi_status; int client; struct tda1997x_platform_data pdata; } ;


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
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;
 scalar_t__ VAR_69 ;
 scalar_t__ VAR_70 ;
 scalar_t__ VAR_71 ;
 scalar_t__ VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 scalar_t__ VAR_75 ;
 scalar_t__ VAR_76 ;
 scalar_t__ VAR_77 ;
 scalar_t__ VAR_78 ;
 scalar_t__ VAR_79 ;
 scalar_t__ VAR_80 ;
 scalar_t__ VAR_81 ;
 scalar_t__ VAR_82 ;
 scalar_t__ VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 void* FUNC_0 (struct v4l2_subdev*,scalar_t__) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__,int) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct v4l2_subdev*,int) ;
 int FUNC_5 (struct v4l2_subdev*,int,int) ;
 int FUNC_6 (struct v4l2_subdev*,int ) ;
 int FUNC_7 (struct tda1997x_state*) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int) ;
 int FUNC_9 (struct v4l2_subdev*,int ) ;
 int FUNC_10 (struct tda1997x_state*) ;
 struct tda1997x_state* FUNC_11 (struct v4l2_subdev*) ;
 int FUNC_12 (int,int ,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_94)
{
 struct tda1997x_state *VAR_95 = FUNC_11(VAR_94);
 struct tda1997x_platform_data *VAR_96 = &VAR_95->pdata;
 u8 VAR_97;
 int VAR_98;


 FUNC_1(VAR_94, VAR_51, VAR_16);
 if (VAR_95->chip_revision == 0) {
  FUNC_1(VAR_94, VAR_72, VAR_23 | VAR_24);
  FUNC_1(VAR_94, VAR_41, 1 << VAR_6);
 }


 FUNC_1(VAR_94, VAR_76, 0x06);
 FUNC_1(VAR_94, VAR_77, 0x06);


 FUNC_1(VAR_94, VAR_75, VAR_88 |
   VAR_90 | VAR_89);


 FUNC_5(VAR_94, VAR_74 & 0xff, 0x04);

 FUNC_5(VAR_94, VAR_73 & 0xff, 0x03);
 FUNC_5(VAR_94, VAR_47 & 0xff, 0xa0);
 FUNC_1(VAR_94, VAR_79, 0x54);

 VAR_97 = FUNC_4(VAR_94, VAR_45 & 0xff);
 VAR_97 |= 0x20;
 FUNC_5(VAR_94, VAR_45 & 0xff, VAR_97);
 FUNC_3(50);


 VAR_97 = FUNC_0(VAR_94, VAR_81);

 VAR_97 = FUNC_0(VAR_94, VAR_44);


 FUNC_1(VAR_94, VAR_71,
   VAR_19 | VAR_18 | VAR_20 |
   VAR_21 | VAR_22);

 FUNC_1(VAR_94, VAR_70, VAR_32 | VAR_31 | VAR_38);

 FUNC_1(VAR_94, VAR_69, VAR_35 | VAR_34);

 FUNC_1(VAR_94, VAR_67,
   VAR_27 | VAR_36 | VAR_28);

 FUNC_1(VAR_94, VAR_64,
   VAR_26 | VAR_25 | VAR_33 |
   VAR_30);

 FUNC_1(VAR_94, VAR_66, VAR_37);

 FUNC_1(VAR_94, VAR_65, VAR_29);

 FUNC_1(VAR_94, VAR_63, 0);
 FUNC_1(VAR_94, VAR_68, 0);


 FUNC_1(VAR_94, VAR_62, 0xff);
 FUNC_1(VAR_94, VAR_61, 0xff);
 FUNC_1(VAR_94, VAR_56, 0xff);
 FUNC_1(VAR_94, VAR_60, 0xff);
 FUNC_1(VAR_94, VAR_59, 0xff);
 FUNC_1(VAR_94, VAR_58, 0xff);
 FUNC_1(VAR_94, VAR_55, 0xff);
 FUNC_1(VAR_94, VAR_57, 0xff);
 FUNC_1(VAR_94, VAR_54, 0xff);


 if (VAR_95->chip_revision == 0)
  FUNC_1(VAR_94, VAR_41, 1 << VAR_6);
 FUNC_2(VAR_94, VAR_43, VAR_8);
 FUNC_2(VAR_94, VAR_42, VAR_7);
 if (VAR_95->chip_revision == 0)
  FUNC_1(VAR_94, VAR_83, VAR_92);

 FUNC_1(VAR_94, VAR_46, VAR_9);

 FUNC_1(VAR_94, VAR_78, 0x00);

 FUNC_1(VAR_94, VAR_52, 0xff);

 FUNC_1(VAR_94, VAR_53, 3);

 if (VAR_95->chip_revision == 0)
  FUNC_10(VAR_95);





 FUNC_8(VAR_94, VAR_39, 1);


 FUNC_9(VAR_94, VAR_17);


 FUNC_1(VAR_94, VAR_48, VAR_11 | VAR_10);


 VAR_97 = VAR_14 << VAR_15;
 VAR_97 |= VAR_12 << VAR_13;
 FUNC_1(VAR_94, VAR_49, VAR_97);


 FUNC_8(VAR_94, 0, 1);


 VAR_97 = FUNC_0(VAR_94, VAR_80);
 VAR_97 |= VAR_91;
 FUNC_1(VAR_94, VAR_80, VAR_97);


 FUNC_7(VAR_95);


 for (VAR_98 = 0; VAR_98 < 9; VAR_98++) {
  FUNC_12(1, VAR_93, VAR_95->client, "vidout_cfg[%d]=0x%02x\n", VAR_98,
   VAR_96->vidout_port_cfg[VAR_98]);
  FUNC_1(VAR_94, VAR_82 + VAR_98, VAR_96->vidout_port_cfg[VAR_98]);
 }


 FUNC_6(VAR_94, 0);


 switch (VAR_96->audout_mclk_fs) {
 case 512:
  VAR_97 = VAR_4;
  break;
 case 256:
  VAR_97 = VAR_2;
  break;
 case 128:
  VAR_97 = VAR_0;
  break;
 case 64:
  VAR_97 = VAR_5;
  break;
 case 32:
  VAR_97 = VAR_3;
  break;
 default:
  VAR_97 = VAR_1;
  break;
 }
 FUNC_1(VAR_94, VAR_40, VAR_97);


 FUNC_8(VAR_94, VAR_84, 0);

 FUNC_8(VAR_94, VAR_87, 0);

 FUNC_8(VAR_94, VAR_85, 0);

 FUNC_8(VAR_94, VAR_86, 0);


 VAR_95->hdmi_status = FUNC_0(VAR_94, VAR_50);

 return 0;
}
