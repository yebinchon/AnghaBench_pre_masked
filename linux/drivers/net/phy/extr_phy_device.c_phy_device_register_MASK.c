
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct phy_device*,int) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*,char*) ;

int FUNC_6(struct phy_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->mdio);
 if (VAR_1)
  return VAR_1;


 FUNC_3(VAR_0, 0);


 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_5(VAR_0, "failed to initialize\n");
  goto out;
 }

 VAR_1 = FUNC_0(&VAR_0->mdio.dev);
 if (VAR_1) {
  FUNC_5(VAR_0, "failed to add\n");
  goto out;
 }

 return 0;

 out:

 FUNC_3(VAR_0, 1);

 FUNC_2(&VAR_0->mdio);
 return VAR_1;
}
