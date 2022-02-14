
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct imxdi_dev*,int) ;
 int FUNC_2 (struct imxdi_dev*,char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct imxdi_dev *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_0(&VAR_3->pdev->dev, "DSR register reports: %08X\n", VAR_4);


 FUNC_1(VAR_3, VAR_4);

 VAR_5 = FUNC_3(VAR_3->ioaddr + VAR_0);

 if (VAR_5 & VAR_1) {

  FUNC_2(VAR_3, "battery");
  return -VAR_2;
 }




 FUNC_2(VAR_3, "main");

 return -VAR_2;
}
