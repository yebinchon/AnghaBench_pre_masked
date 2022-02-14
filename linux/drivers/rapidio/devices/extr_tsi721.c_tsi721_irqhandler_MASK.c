
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tsi721_device {int flags; scalar_t__ regs; int * bdma; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tsi721_device*) ;
 int FUNC_9 (struct tsi721_device*,int) ;
 int FUNC_10 (struct tsi721_device*,int) ;
 int FUNC_11 (struct tsi721_device*) ;
 int FUNC_12 (int ,int *,char*,int) ;
 int FUNC_13 (int *,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_21, void *VAR_22)
{
 struct tsi721_device *VAR_23 = (struct tsi721_device *)VAR_22;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;


 if (VAR_23->flags & VAR_20)
  FUNC_6(0, VAR_23->regs + VAR_8);

 VAR_24 = FUNC_5(VAR_23->regs + VAR_7);
 if (!VAR_24)
  return VAR_3;

 VAR_25 = FUNC_5(VAR_23->regs + VAR_5);

 if (VAR_24 & VAR_11) {

  if (VAR_25 & FUNC_3(VAR_1)) {

   VAR_26 = FUNC_5(VAR_23->regs +
      FUNC_4(VAR_1));
   if (VAR_26 & VAR_19)
    FUNC_8(VAR_23);
   else
    FUNC_13(&VAR_23->pdev->dev,
     "Unsupported SR_CH_INT %x", VAR_26);


   FUNC_6(VAR_26,
    VAR_23->regs + FUNC_4(VAR_1));
   FUNC_5(VAR_23->regs + FUNC_4(VAR_1));
  }
 }

 if (VAR_24 & VAR_10) {
  int VAR_28;





  if (VAR_25 & VAR_15) {

   VAR_27 = FUNC_5(VAR_23->regs + VAR_6);
   VAR_27 &= ~(VAR_25 & VAR_15);
   FUNC_6(VAR_27, VAR_23->regs + VAR_6);




   for (VAR_28 = 4; VAR_28 < VAR_4 + 4; VAR_28++) {
    if (!(VAR_25 & FUNC_1(VAR_28)))
     continue;
    FUNC_9(VAR_23, VAR_28);
   }
  }

  if (VAR_25 & VAR_16) {

   VAR_27 = FUNC_5(VAR_23->regs + VAR_6);
   VAR_27 &= ~(VAR_25 & VAR_16);
   FUNC_6(VAR_27, VAR_23->regs + VAR_6);





   for (VAR_28 = 0; VAR_28 < VAR_4; VAR_28++) {
    if (!(VAR_25 & FUNC_2(VAR_28)))
     continue;
    FUNC_10(VAR_23, VAR_28);
   }
  }
 }

 if (VAR_24 & VAR_12) {

  VAR_26 = FUNC_5(VAR_23->regs + VAR_17);
  if (VAR_26 & VAR_18)
   FUNC_11(VAR_23);
 }
 if (VAR_23->flags & VAR_20) {
  VAR_24 = VAR_11 | VAR_12 |
   VAR_10 | VAR_9;
  FUNC_6(VAR_24, VAR_23->regs + VAR_8);
 }

 return VAR_2;
}
