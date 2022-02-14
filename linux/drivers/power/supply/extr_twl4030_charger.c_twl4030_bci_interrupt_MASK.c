
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_bci {int dev; int usb; int ac; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct twl4030_bci*) ;
 int FUNC_5 (int ,int*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_12, void *VAR_13)
{
 struct twl4030_bci *VAR_14 = VAR_13;
 u8 VAR_15, VAR_16;
 int VAR_17;

 VAR_17 = FUNC_5(VAR_7, &VAR_15,
         VAR_5);
 if (VAR_17 < 0)
  return VAR_0;

 VAR_17 = FUNC_5(VAR_7, &VAR_16,
         VAR_6);
 if (VAR_17 < 0)
  return VAR_0;

 FUNC_1(VAR_14->dev, "BCI irq %02x %02x\n", VAR_16, VAR_15);

 if (VAR_15 & (VAR_4 | VAR_3)) {

  FUNC_3(VAR_14->ac);
  FUNC_3(VAR_14->usb);
 }
 FUNC_4(VAR_14);


 if (VAR_15 & (VAR_9 | VAR_8))
  FUNC_2(VAR_14->dev, "battery temperature out of range\n");

 if (VAR_15 & VAR_2)
  FUNC_0(VAR_14->dev, "battery disconnected\n");

 if (VAR_16 & VAR_10)
  FUNC_0(VAR_14->dev, "VBAT overvoltage\n");

 if (VAR_16 & VAR_11)
  FUNC_0(VAR_14->dev, "VBUS overvoltage\n");

 if (VAR_16 & VAR_1)
  FUNC_0(VAR_14->dev, "Ac charger overvoltage\n");

 return VAR_0;
}
