
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int type; int dev; int regmap; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,unsigned int*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_25, void *VAR_26)
{
 struct arizona *VAR_27 = VAR_26;
 unsigned int VAR_28[3];
 int VAR_29;

 VAR_29 = FUNC_1(VAR_27->regmap, VAR_12,
          &VAR_28[0], 3);
 if (VAR_29 != 0) {
  FUNC_0(VAR_27->dev, "Failed to read overclock status: %d\n",
   VAR_29);
  return VAR_24;
 }

 switch (VAR_27->type) {
 case 128:
 case 129:



  VAR_28[0] = ((VAR_28[0] & 0x60e0) >> 1) |
    ((VAR_28[0] & 0x1e00) >> 2) |
    (VAR_28[0] & 0x000f);
  break;
 default:
  break;
 }

 if (VAR_28[0] & VAR_18)
  FUNC_0(VAR_27->dev, "PWM overclocked\n");
 if (VAR_28[0] & VAR_11)
  FUNC_0(VAR_27->dev, "FX core overclocked\n");
 if (VAR_28[0] & VAR_9)
  FUNC_0(VAR_27->dev, "DAC SYS overclocked\n");
 if (VAR_28[0] & VAR_10)
  FUNC_0(VAR_27->dev, "DAC WARP overclocked\n");
 if (VAR_28[0] & VAR_0)
  FUNC_0(VAR_27->dev, "ADC overclocked\n");
 if (VAR_28[0] & VAR_16)
  FUNC_0(VAR_27->dev, "Mixer overclocked\n");
 if (VAR_28[0] & VAR_4)
  FUNC_0(VAR_27->dev, "AIF3 overclocked\n");
 if (VAR_28[0] & VAR_3)
  FUNC_0(VAR_27->dev, "AIF2 overclocked\n");
 if (VAR_28[0] & VAR_2)
  FUNC_0(VAR_27->dev, "AIF1 overclocked\n");
 if (VAR_28[0] & VAR_17)
  FUNC_0(VAR_27->dev, "Pad control overclocked\n");

 if (VAR_28[1] & VAR_20)
  FUNC_0(VAR_27->dev, "Slimbus subsystem overclocked\n");
 if (VAR_28[1] & VAR_19)
  FUNC_0(VAR_27->dev, "Slimbus async overclocked\n");
 if (VAR_28[1] & VAR_21)
  FUNC_0(VAR_27->dev, "Slimbus sync overclocked\n");
 if (VAR_28[1] & VAR_5)
  FUNC_0(VAR_27->dev, "ASRC async system overclocked\n");
 if (VAR_28[1] & VAR_6)
  FUNC_0(VAR_27->dev, "ASRC async WARP overclocked\n");
 if (VAR_28[1] & VAR_7)
  FUNC_0(VAR_27->dev, "ASRC sync system overclocked\n");
 if (VAR_28[1] & VAR_8)
  FUNC_0(VAR_27->dev, "ASRC sync WARP overclocked\n");
 if (VAR_28[1] & VAR_1)
  FUNC_0(VAR_27->dev, "DSP1 overclocked\n");
 if (VAR_28[1] & VAR_15)
  FUNC_0(VAR_27->dev, "ISRC3 overclocked\n");
 if (VAR_28[1] & VAR_14)
  FUNC_0(VAR_27->dev, "ISRC2 overclocked\n");
 if (VAR_28[1] & VAR_13)
  FUNC_0(VAR_27->dev, "ISRC1 overclocked\n");

 if (VAR_28[2] & VAR_22)
  FUNC_0(VAR_27->dev, "SPDIF overclocked\n");

 return VAR_23;
}
