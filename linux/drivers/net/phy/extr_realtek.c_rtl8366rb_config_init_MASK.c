
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0,
      VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_2->mdio.dev,
   "error enabling power management\n");
 }

 return VAR_3;
}
