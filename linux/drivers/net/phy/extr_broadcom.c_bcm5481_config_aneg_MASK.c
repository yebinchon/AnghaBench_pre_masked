
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,scalar_t__,int) ;
 int FUNC_2 (struct phy_device*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->mdio.dev.of_node;
 int VAR_3;


 VAR_3 = FUNC_2(VAR_1);


 FUNC_0(VAR_1);

 if (FUNC_3(VAR_2, "enet-phy-lane-swap")) {

  VAR_3 = FUNC_1(VAR_1, VAR_0 + 0x9,
     0x11B);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return VAR_3;
}
