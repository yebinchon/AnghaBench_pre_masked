
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct module* owner; int remove; int probe; int * bus; int name; } ;
struct TYPE_3__ {TYPE_2__ driver; int flags; } ;
struct phy_driver {int name; TYPE_1__ mdiodrv; scalar_t__ get_features; scalar_t__ features; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,...) ;

int FUNC_4(struct phy_driver *VAR_5, struct module *VAR_6)
{
 int VAR_7;




 if (FUNC_0(VAR_5->features && VAR_5->get_features)) {
  FUNC_3("%s: features and get_features must not both be set\n",
         VAR_5->name);
  return -VAR_0;
 }

 VAR_5->mdiodrv.flags |= VAR_1;
 VAR_5->mdiodrv.driver.name = VAR_5->name;
 VAR_5->mdiodrv.driver.bus = &VAR_2;
 VAR_5->mdiodrv.driver.probe = VAR_3;
 VAR_5->mdiodrv.driver.remove = VAR_4;
 VAR_5->mdiodrv.driver.owner = VAR_6;

 VAR_7 = FUNC_1(&VAR_5->mdiodrv.driver);
 if (VAR_7) {
  FUNC_3("%s: Error %d in registering driver\n",
         VAR_5->name, VAR_7);

  return VAR_7;
 }

 FUNC_2("%s: Registered new driver\n", VAR_5->name);

 return 0;
}
