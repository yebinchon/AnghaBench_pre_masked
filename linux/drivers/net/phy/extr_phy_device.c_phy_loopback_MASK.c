
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_driver {int (* set_loopback ) (struct phy_device*,int) ;} ;
struct TYPE_3__ {int driver; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct phy_device {int loopback_enabled; int lock; scalar_t__ drv; TYPE_2__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*,int) ;
 struct phy_driver* FUNC_3 (int ) ;

int FUNC_4(struct phy_device *VAR_3, bool VAR_4)
{
 struct phy_driver *VAR_5 = FUNC_3(VAR_3->mdio.dev.driver);
 int VAR_6 = 0;

 FUNC_0(&VAR_3->lock);

 if (VAR_4 && VAR_3->loopback_enabled) {
  VAR_6 = -VAR_0;
  goto out;
 }

 if (!VAR_4 && !VAR_3->loopback_enabled) {
  VAR_6 = -VAR_1;
  goto out;
 }

 if (VAR_3->drv && VAR_5->set_loopback)
  VAR_6 = VAR_5->set_loopback(VAR_3, VAR_4);
 else
  VAR_6 = -VAR_2;

 if (VAR_6)
  goto out;

 VAR_3->loopback_enabled = VAR_4;

out:
 FUNC_1(&VAR_3->lock);
 return VAR_6;
}
