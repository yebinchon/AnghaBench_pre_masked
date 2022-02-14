
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imxdi_dev {TYPE_1__* pdev; scalar_t__ ioaddr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct imxdi_dev*,int) ;
 int FUNC_4 (struct imxdi_dev*,char*) ;
 int FUNC_5 (struct imxdi_dev*,int,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct imxdi_dev *VAR_22, u32 VAR_23)
{
 u32 VAR_24;






 if (VAR_23 & (VAR_19 | VAR_7 | VAR_6 | VAR_5 | VAR_10 |
   VAR_13 | VAR_4 | VAR_14 | VAR_8 | VAR_12)) {
  VAR_24 = FUNC_0(VAR_22->ioaddr + VAR_0);
  if (VAR_24 & VAR_1) {
   FUNC_4(VAR_22, "battery");
   return -VAR_21;
  }
  if (VAR_24 & VAR_2) {

   FUNC_4(VAR_22, "main");
   return -VAR_21;
  }
 }


 FUNC_5(VAR_22, 0x00000000, VAR_20);


 FUNC_5(VAR_22, VAR_23 & (VAR_19 | VAR_7 | VAR_6 |
   VAR_5 | VAR_10 | VAR_13 | VAR_4 | VAR_14 |
   VAR_8 | VAR_12), VAR_3);

 VAR_23 = FUNC_6(VAR_22->ioaddr + VAR_3);
 if ((VAR_23 & ~(VAR_9 | VAR_11 | VAR_15 | VAR_18 |
   VAR_16 | VAR_17)) != 0)
  FUNC_2(&VAR_22->pdev->dev,
    "There are still some sources of pain in DSR: %08x!\n",
    VAR_23 & ~(VAR_9 | VAR_11 | VAR_15 | VAR_18 |
     VAR_16 | VAR_17));





 FUNC_5(VAR_22, VAR_11, VAR_3);


 VAR_23 = FUNC_6(VAR_22->ioaddr + VAR_3);
 if (VAR_23 & VAR_11) {
  FUNC_1(&VAR_22->pdev->dev,
    "Cannot clear the security violation flag. We are ending up in an endless loop!\n");

  FUNC_4(VAR_22, "battery");
  return -VAR_21;
 }





 return FUNC_3(VAR_22, VAR_23);
}
