
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int addr; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct et131x_adapter {TYPE_1__* netdev; } ;
struct TYPE_3__ {struct phy_device* phydev; } ;


 int VAR_0 ;
 int FUNC_0 (struct et131x_adapter*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct et131x_adapter *VAR_1, u8 VAR_2, u16 *VAR_3)
{
 struct phy_device *VAR_4 = VAR_1->netdev->phydev;

 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_4->mdio.addr, VAR_2, VAR_3);
}
