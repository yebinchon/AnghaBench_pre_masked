
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; int interrupts; } ;
struct TYPE_2__ {int (* config_intr ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 scalar_t__ FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;


 if (FUNC_2(VAR_1)) {
  VAR_1->interrupts = VAR_0;
  if (VAR_1->drv->config_intr)
   VAR_1->drv->config_intr(VAR_1);
 }

 return 0;
}
