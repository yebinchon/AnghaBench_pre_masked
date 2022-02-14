
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int interrupts; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* config_intr ) (struct phy_device*) ;} ;


 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_0, bool VAR_1)
{
 VAR_0->interrupts = VAR_1 ? 1 : 0;
 if (VAR_0->drv->config_intr)
  return VAR_0->drv->config_intr(VAR_0);

 return 0;
}
