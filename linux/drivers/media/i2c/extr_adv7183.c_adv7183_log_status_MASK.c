
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct adv7183 {int hdl; } ;


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
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct adv7183* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct v4l2_subdev*,char*,int ,...) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_42)
{
 struct adv7183 *VAR_43 = FUNC_1(VAR_42);

 FUNC_3(VAR_42, "adv7183: Input control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_21));
 FUNC_3(VAR_42, "adv7183: Video selection = 0x%02x\n",
   FUNC_0(VAR_42, VAR_38));
 FUNC_3(VAR_42, "adv7183: Output control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_25));
 FUNC_3(VAR_42, "adv7183: Extended output control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_15));
 FUNC_3(VAR_42, "adv7183: Autodetect enable = 0x%02x\n",
   FUNC_0(VAR_42, VAR_5));
 FUNC_3(VAR_42, "adv7183: Contrast = 0x%02x\n",
   FUNC_0(VAR_42, VAR_10));
 FUNC_3(VAR_42, "adv7183: Brightness = 0x%02x\n",
   FUNC_0(VAR_42, VAR_6));
 FUNC_3(VAR_42, "adv7183: Hue = 0x%02x\n",
   FUNC_0(VAR_42, VAR_19));
 FUNC_3(VAR_42, "adv7183: Default value Y = 0x%02x\n",
   FUNC_0(VAR_42, VAR_12));
 FUNC_3(VAR_42, "adv7183: Default value C = 0x%02x\n",
   FUNC_0(VAR_42, VAR_11));
 FUNC_3(VAR_42, "adv7183: ADI control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_1));
 FUNC_3(VAR_42, "adv7183: Power Management = 0x%02x\n",
   FUNC_0(VAR_42, VAR_28));
 FUNC_3(VAR_42, "adv7183: Status 1 2 and 3 = 0x%02x 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_35),
   FUNC_0(VAR_42, VAR_36),
   FUNC_0(VAR_42, VAR_37));
 FUNC_3(VAR_42, "adv7183: Ident = 0x%02x\n",
   FUNC_0(VAR_42, VAR_20));
 FUNC_3(VAR_42, "adv7183: Analog clamp control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_4));
 FUNC_3(VAR_42, "adv7183: Digital clamp control 1 = 0x%02x\n",
   FUNC_0(VAR_42, VAR_13));
 FUNC_3(VAR_42, "adv7183: Shaping filter control 1 and 2 = 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_33),
   FUNC_0(VAR_42, VAR_34));
 FUNC_3(VAR_42, "adv7183: Comb filter control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_9));
 FUNC_3(VAR_42, "adv7183: ADI control 2 = 0x%02x\n",
   FUNC_0(VAR_42, VAR_2));
 FUNC_3(VAR_42, "adv7183: Pixel delay control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_26));
 FUNC_3(VAR_42, "adv7183: Misc gain control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_24));
 FUNC_3(VAR_42, "adv7183: AGC mode control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_3));
 FUNC_3(VAR_42, "adv7183: Chroma gain control 1 and 2 = 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_7),
   FUNC_0(VAR_42, VAR_8));
 FUNC_3(VAR_42, "adv7183: Luma gain control 1 and 2 = 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_22),
   FUNC_0(VAR_42, VAR_23));
 FUNC_3(VAR_42, "adv7183: Vsync field control 1 2 and 3 = 0x%02x 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_39),
   FUNC_0(VAR_42, VAR_40),
   FUNC_0(VAR_42, VAR_41));
 FUNC_3(VAR_42, "adv7183: Hsync position control 1 2 and 3 = 0x%02x 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_16),
   FUNC_0(VAR_42, VAR_17),
   FUNC_0(VAR_42, VAR_18));
 FUNC_3(VAR_42, "adv7183: Polarity = 0x%02x\n",
   FUNC_0(VAR_42, VAR_27));
 FUNC_3(VAR_42, "adv7183: ADC control = 0x%02x\n",
   FUNC_0(VAR_42, VAR_0));
 FUNC_3(VAR_42, "adv7183: SD offset Cb and Cr = 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_29),
   FUNC_0(VAR_42, VAR_30));
 FUNC_3(VAR_42, "adv7183: SD saturation Cb and Cr = 0x%02x 0x%02x\n",
   FUNC_0(VAR_42, VAR_31),
   FUNC_0(VAR_42, VAR_32));
 FUNC_3(VAR_42, "adv7183: Drive strength = 0x%02x\n",
   FUNC_0(VAR_42, VAR_14));
 FUNC_2(&VAR_43->hdl, VAR_42->name);
 return 0;
}
