
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imxdi_dev {scalar_t__ ioaddr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct imxdi_dev*,int ) ;
 int FUNC_3 (struct imxdi_dev*,char*) ;
 int FUNC_4 (struct imxdi_dev*,int,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct imxdi_dev *VAR_11, u32 VAR_12)
{
 u32 VAR_13, VAR_14;





 FUNC_4(VAR_11, 0x00000000, VAR_9);

 FUNC_4(VAR_11, VAR_4, VAR_0);

 VAR_14 = FUNC_5(VAR_11->ioaddr + VAR_8);
 if (VAR_14 != 0)
  FUNC_1(&VAR_11->pdev->dev,
    "The security violation has happened at %u seconds\n",
    VAR_14);




 VAR_13 = FUNC_5(VAR_11->ioaddr + VAR_0);
 if (!(VAR_13 & VAR_1)) {
  if (VAR_13 & VAR_2) {

   FUNC_3(VAR_11, "battery");
   return -VAR_10;
  }
  if (VAR_13 & VAR_3) {
   FUNC_3(VAR_11, "main");
   return -VAR_10;
  }
 }
 FUNC_4(VAR_11, VAR_6, VAR_5);

 FUNC_4(VAR_11, VAR_7, VAR_5);

 FUNC_4(VAR_11, VAR_13 | VAR_1, VAR_0);

 FUNC_4(VAR_11, VAR_14, VAR_8);


 return FUNC_2(VAR_11, FUNC_0(VAR_11->ioaddr + VAR_5));
}
