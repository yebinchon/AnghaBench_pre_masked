
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_driver {int (* resume ) (struct phy_device*) ;} ;
struct TYPE_3__ {int driver; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct phy_device {int suspended; scalar_t__ drv; int lock; TYPE_2__ mdio; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*) ;
 struct phy_driver* FUNC_3 (int ) ;

int FUNC_4(struct phy_device *VAR_0)
{
 struct phy_driver *VAR_1 = FUNC_3(VAR_0->mdio.dev.driver);
 int VAR_2 = 0;

 FUNC_0(!FUNC_1(&VAR_0->lock));

 if (VAR_0->drv && VAR_1->resume)
  VAR_2 = VAR_1->resume(VAR_0);

 if (VAR_2)
  return VAR_2;

 VAR_0->suspended = 0;

 return VAR_2;
}
