
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int regmap; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_14, void *VAR_15)
{
 struct arizona *VAR_16 = VAR_15;
 unsigned int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_1(VAR_16->regmap, VAR_7,
     &VAR_17);
 if (VAR_18 != 0) {
  FUNC_0(VAR_16->dev, "Failed to read underclock status: %d\n",
   VAR_18);
  return VAR_13;
 }

 if (VAR_17 & VAR_3)
  FUNC_0(VAR_16->dev, "AIF3 underclocked\n");
 if (VAR_17 & VAR_2)
  FUNC_0(VAR_16->dev, "AIF2 underclocked\n");
 if (VAR_17 & VAR_1)
  FUNC_0(VAR_16->dev, "AIF1 underclocked\n");
 if (VAR_17 & VAR_10)
  FUNC_0(VAR_16->dev, "ISRC3 underclocked\n");
 if (VAR_17 & VAR_9)
  FUNC_0(VAR_16->dev, "ISRC2 underclocked\n");
 if (VAR_17 & VAR_8)
  FUNC_0(VAR_16->dev, "ISRC1 underclocked\n");
 if (VAR_17 & VAR_6)
  FUNC_0(VAR_16->dev, "FX underclocked\n");
 if (VAR_17 & VAR_4)
  FUNC_0(VAR_16->dev, "ASRC underclocked\n");
 if (VAR_17 & VAR_5)
  FUNC_0(VAR_16->dev, "DAC underclocked\n");
 if (VAR_17 & VAR_0)
  FUNC_0(VAR_16->dev, "ADC underclocked\n");
 if (VAR_17 & VAR_11)
  FUNC_0(VAR_16->dev, "Mixer dropped sample\n");

 return VAR_12;
}
