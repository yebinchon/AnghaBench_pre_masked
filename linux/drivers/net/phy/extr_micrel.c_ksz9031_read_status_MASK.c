
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; scalar_t__ link; } ;
struct TYPE_2__ {int (* config_intr ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 scalar_t__ FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;




 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if ((VAR_3 & 0xFF) == 0xFF) {
  FUNC_2(VAR_1);
  VAR_1->link = 0;
  if (VAR_1->drv->config_intr && FUNC_3(VAR_1))
   VAR_1->drv->config_intr(VAR_1);
  return FUNC_0(VAR_1);
 }

 return 0;
}
