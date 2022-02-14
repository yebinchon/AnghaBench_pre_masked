
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxdi_dev {TYPE_1__* pdev; scalar_t__ ioaddr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct imxdi_dev *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->pdev->dev, "WARNING: Register write error!\n");


 FUNC_4(VAR_1, VAR_2->ioaddr + VAR_0);


 for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
  if ((FUNC_2(VAR_2->ioaddr + VAR_0) & VAR_1) == 0)
   return;
  FUNC_3(10);
 }
 FUNC_0(&VAR_2->pdev->dev,
   "ERROR: Cannot clear write-error flag!\n");
}
