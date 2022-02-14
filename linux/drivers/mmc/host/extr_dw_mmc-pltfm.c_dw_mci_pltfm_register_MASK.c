
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_3__ {int platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dw_mci_drv_data {int dummy; } ;
struct dw_mci {scalar_t__ irq; int phy_regs; int regs; int pdata; scalar_t__ irq_flags; TYPE_1__* dev; struct dw_mci_drv_data const* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 struct dw_mci* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct dw_mci*) ;
 scalar_t__ FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct dw_mci*) ;

int FUNC_8(struct platform_device *VAR_3,
     const struct dw_mci_drv_data *VAR_4)
{
 struct dw_mci *VAR_5;
 struct resource *VAR_6;

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(struct dw_mci), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->irq = FUNC_5(VAR_3, 0);
 if (VAR_5->irq < 0)
  return VAR_5->irq;

 VAR_5->drv_data = VAR_4;
 VAR_5->dev = &VAR_3->dev;
 VAR_5->irq_flags = 0;
 VAR_5->pdata = VAR_3->dev.platform_data;

 VAR_6 = FUNC_6(VAR_3, VAR_2, 0);
 VAR_5->regs = FUNC_2(&VAR_3->dev, VAR_6);
 if (FUNC_0(VAR_5->regs))
  return FUNC_1(VAR_5->regs);


 VAR_5->phy_regs = VAR_6->start;

 FUNC_7(VAR_3, VAR_5);
 return FUNC_4(VAR_5);
}
