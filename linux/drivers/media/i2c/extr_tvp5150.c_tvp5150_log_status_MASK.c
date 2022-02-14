
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dev; } ;


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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int ,int ,int) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_75)
{
 FUNC_0(VAR_75->dev, "tvp5150: Video input source selection #1 = 0x%02x\n",
  FUNC_2(VAR_75, VAR_63));
 FUNC_0(VAR_75->dev, "tvp5150: Analog channel controls = 0x%02x\n",
  FUNC_2(VAR_75, VAR_4));
 FUNC_0(VAR_75->dev, "tvp5150: Operation mode controls = 0x%02x\n",
  FUNC_2(VAR_75, VAR_45));
 FUNC_0(VAR_75->dev, "tvp5150: Miscellaneous controls = 0x%02x\n",
  FUNC_2(VAR_75, VAR_43));
 FUNC_0(VAR_75->dev, "tvp5150: Autoswitch mask= 0x%02x\n",
  FUNC_2(VAR_75, VAR_5));
 FUNC_0(VAR_75->dev, "tvp5150: Color killer threshold control = 0x%02x\n",
  FUNC_2(VAR_75, VAR_12));
 FUNC_0(VAR_75->dev, "tvp5150: Luminance processing controls #1 #2 and #3 = %02x %02x %02x\n",
  FUNC_2(VAR_75, VAR_38),
  FUNC_2(VAR_75, VAR_39),
  FUNC_2(VAR_75, VAR_40));
 FUNC_0(VAR_75->dev, "tvp5150: Brightness control = 0x%02x\n",
  FUNC_2(VAR_75, VAR_6));
 FUNC_0(VAR_75->dev, "tvp5150: Color saturation control = 0x%02x\n",
  FUNC_2(VAR_75, VAR_51));
 FUNC_0(VAR_75->dev, "tvp5150: Hue control = 0x%02x\n",
  FUNC_2(VAR_75, VAR_25));
 FUNC_0(VAR_75->dev, "tvp5150: Contrast control = 0x%02x\n",
  FUNC_2(VAR_75, VAR_14));
 FUNC_0(VAR_75->dev, "tvp5150: Outputs and data rates select = 0x%02x\n",
  FUNC_2(VAR_75, VAR_16));
 FUNC_0(VAR_75->dev, "tvp5150: Configuration shared pins = 0x%02x\n",
  FUNC_2(VAR_75, VAR_13));
 FUNC_0(VAR_75->dev, "tvp5150: Active video cropping start = 0x%02x%02x\n",
  FUNC_2(VAR_75, VAR_3),
  FUNC_2(VAR_75, VAR_2));
 FUNC_0(VAR_75->dev, "tvp5150: Active video cropping stop  = 0x%02x%02x\n",
  FUNC_2(VAR_75, VAR_1),
  FUNC_2(VAR_75, VAR_0));
 FUNC_0(VAR_75->dev, "tvp5150: Genlock/RTC = 0x%02x\n",
  FUNC_2(VAR_75, VAR_23));
 FUNC_0(VAR_75->dev, "tvp5150: Horizontal sync start = 0x%02x\n",
  FUNC_2(VAR_75, VAR_24));
 FUNC_0(VAR_75->dev, "tvp5150: Vertical blanking start = 0x%02x\n",
  FUNC_2(VAR_75, VAR_64));
 FUNC_0(VAR_75->dev, "tvp5150: Vertical blanking stop = 0x%02x\n",
  FUNC_2(VAR_75, VAR_65));
 FUNC_0(VAR_75->dev, "tvp5150: Chrominance processing control #1 and #2 = %02x %02x\n",
  FUNC_2(VAR_75, VAR_10),
  FUNC_2(VAR_75, VAR_11));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt reset register B = 0x%02x\n",
  FUNC_2(VAR_75, VAR_31));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt enable register B = 0x%02x\n",
  FUNC_2(VAR_75, VAR_30));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt configuration register B = 0x%02x\n",
  FUNC_2(VAR_75, VAR_26));
 FUNC_0(VAR_75->dev, "tvp5150: Video standard = 0x%02x\n",
  FUNC_2(VAR_75, VAR_68));
 FUNC_0(VAR_75->dev, "tvp5150: Chroma gain factor: Cb=0x%02x Cr=0x%02x\n",
  FUNC_2(VAR_75, VAR_7),
  FUNC_2(VAR_75, VAR_15));
 FUNC_0(VAR_75->dev, "tvp5150: Macrovision on counter = 0x%02x\n",
  FUNC_2(VAR_75, VAR_42));
 FUNC_0(VAR_75->dev, "tvp5150: Macrovision off counter = 0x%02x\n",
  FUNC_2(VAR_75, VAR_41));
 FUNC_0(VAR_75->dev, "tvp5150: ITU-R BT.656.%d timing(TVP5150AM1 only)\n",
  (FUNC_2(VAR_75, VAR_48) & 1) ? 3 : 4);
 FUNC_0(VAR_75->dev, "tvp5150: Device ID = %02x%02x\n",
  FUNC_2(VAR_75, VAR_44),
  FUNC_2(VAR_75, VAR_37));
 FUNC_0(VAR_75->dev, "tvp5150: ROM version = (hex) %02x.%02x\n",
  FUNC_2(VAR_75, VAR_49),
  FUNC_2(VAR_75, VAR_50));
 FUNC_0(VAR_75->dev, "tvp5150: Vertical line count = 0x%02x%02x\n",
  FUNC_2(VAR_75, VAR_67),
  FUNC_2(VAR_75, VAR_66));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt status register B = 0x%02x\n",
  FUNC_2(VAR_75, VAR_33));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt active register B = 0x%02x\n",
  FUNC_2(VAR_75, VAR_27));
 FUNC_0(VAR_75->dev, "tvp5150: Status regs #1 to #5 = %02x %02x %02x %02x %02x\n",
  FUNC_2(VAR_75, VAR_52),
  FUNC_2(VAR_75, VAR_53),
  FUNC_2(VAR_75, VAR_54),
  FUNC_2(VAR_75, VAR_55),
  FUNC_2(VAR_75, VAR_56));

 FUNC_1(VAR_75, "Teletext filter 1", VAR_58,
   VAR_57, 8);
 FUNC_1(VAR_75, "Teletext filter 2", VAR_60,
   VAR_59, 8);

 FUNC_0(VAR_75->dev, "tvp5150: Teletext filter enable = 0x%02x\n",
  FUNC_2(VAR_75, VAR_61));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt status register A = 0x%02x\n",
  FUNC_2(VAR_75, VAR_32));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt enable register A = 0x%02x\n",
  FUNC_2(VAR_75, VAR_29));
 FUNC_0(VAR_75->dev, "tvp5150: Interrupt configuration = 0x%02x\n",
  FUNC_2(VAR_75, VAR_28));
 FUNC_0(VAR_75->dev, "tvp5150: VDP status register = 0x%02x\n",
  FUNC_2(VAR_75, VAR_62));
 FUNC_0(VAR_75->dev, "tvp5150: FIFO word count = 0x%02x\n",
  FUNC_2(VAR_75, VAR_20));
 FUNC_0(VAR_75->dev, "tvp5150: FIFO interrupt threshold = 0x%02x\n",
  FUNC_2(VAR_75, VAR_17));
 FUNC_0(VAR_75->dev, "tvp5150: FIFO reset = 0x%02x\n",
  FUNC_2(VAR_75, VAR_19));
 FUNC_0(VAR_75->dev, "tvp5150: Line number interrupt = 0x%02x\n",
  FUNC_2(VAR_75, VAR_36));
 FUNC_0(VAR_75->dev, "tvp5150: Pixel alignment register = 0x%02x%02x\n",
  FUNC_2(VAR_75, VAR_46),
  FUNC_2(VAR_75, VAR_47));
 FUNC_0(VAR_75->dev, "tvp5150: FIFO output control = 0x%02x\n",
  FUNC_2(VAR_75, VAR_18));
 FUNC_0(VAR_75->dev, "tvp5150: Full field enable = 0x%02x\n",
  FUNC_2(VAR_75, VAR_21));
 FUNC_0(VAR_75->dev, "tvp5150: Full field mode register = 0x%02x\n",
  FUNC_2(VAR_75, VAR_22));

 FUNC_1(VAR_75, "CC   data", VAR_9,
   VAR_8, 8);

 FUNC_1(VAR_75, "WSS  data", VAR_74,
   VAR_73, 8);

 FUNC_1(VAR_75, "VPS  data", VAR_72,
   VAR_71, 8);

 FUNC_1(VAR_75, "VITC data", VAR_70,
   VAR_69, 10);

 FUNC_1(VAR_75, "Line mode", VAR_35,
   VAR_34, 8);
 return 0;
}
