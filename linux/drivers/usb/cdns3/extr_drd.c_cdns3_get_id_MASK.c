
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3 {int dev; TYPE_1__* otg_regs; } ;
struct TYPE_2__ {int sts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct cdns3 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->otg_regs->sts) & VAR_0;
 FUNC_0(VAR_1->dev, "OTG ID: %d", VAR_2);

 return VAR_2;
}
