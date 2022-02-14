
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp1760_device {int devflags; int dev; int regs; scalar_t__ rst_gpio; } ;


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
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct isp1760_device *VAR_26)
{
 u32 VAR_27;
 u32 VAR_28;


 if (VAR_26->rst_gpio) {
  FUNC_1(VAR_26->rst_gpio, 1);
  FUNC_3(50);
  FUNC_1(VAR_26->rst_gpio, 0);
 }





 FUNC_2(VAR_26->regs, VAR_3, VAR_25);
 FUNC_3(100);


 VAR_28 = VAR_7;

 if (VAR_26->devflags & VAR_18)
  VAR_28 &= ~VAR_7;
 if (VAR_26->devflags & VAR_17)
  VAR_28 |= VAR_4;
 if (VAR_26->devflags & VAR_19)
  VAR_28 |= VAR_6;
 if (VAR_26->devflags & VAR_20)
  VAR_28 |= VAR_10;
 if (VAR_26->devflags & VAR_22)
  VAR_28 |= VAR_12;
 if (VAR_26->devflags & VAR_21)
  VAR_28 |= VAR_11;







 if (VAR_26->devflags & VAR_23) {
  FUNC_2(VAR_26->regs, VAR_0, 0);
  VAR_28 |= VAR_5;
 }






 FUNC_2(VAR_26->regs, VAR_1, VAR_28);
 FUNC_2(VAR_26->regs, VAR_1, VAR_28);
 if ((VAR_26->devflags & VAR_23) &&
     (VAR_26->devflags & VAR_24))
  VAR_27 = ((VAR_8 | VAR_9) << 16)
   | VAR_13;
 else
  VAR_27 = (VAR_15 << 16)
   | (VAR_16 | VAR_14);

 FUNC_2(VAR_26->regs, VAR_2, VAR_27);

 FUNC_0(VAR_26->dev, "bus width: %u, oc: %s\n",
   VAR_26->devflags & VAR_18 ? 16 : 32,
   VAR_26->devflags & VAR_17 ? "analog" : "digital");
}
