
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_flctl {int flintdmacr_base; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct sh_flctl*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct sh_flctl *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->pdev->dev, "flste irq: %x\n", FUNC_2(FUNC_0(VAR_3)));
 FUNC_3(VAR_3->flintdmacr_base, FUNC_0(VAR_3));

 return VAR_0;
}
