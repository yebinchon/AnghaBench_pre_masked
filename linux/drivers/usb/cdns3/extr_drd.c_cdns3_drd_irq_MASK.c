
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3 {scalar_t__ dr_mode; TYPE_1__* otg_regs; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ivect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cdns3*) ;
 int FUNC_1 (struct cdns3*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 irqreturn_t VAR_8 = VAR_0;
 struct cdns3 *VAR_9 = VAR_7;
 u32 VAR_10;

 if (VAR_9->dr_mode != VAR_5)
  return VAR_8;

 VAR_10 = FUNC_3(&VAR_9->otg_regs->ivect);

 if (!VAR_10)
  return VAR_8;

 if (VAR_10 & VAR_2) {
  FUNC_2(VAR_9->dev, "OTG IRQ: new ID: %d\n",
   FUNC_0(VAR_9));

  VAR_8 = VAR_1;
 }

 if (VAR_10 & (VAR_4 | VAR_3)) {
  FUNC_2(VAR_9->dev, "OTG IRQ: new VBUS: %d\n",
   FUNC_1(VAR_9));

  VAR_8 = VAR_1;
 }

 FUNC_4(~0, &VAR_9->otg_regs->ivect);
 return VAR_8;
}
