
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int addr; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct et131x_adapter {TYPE_1__* netdev; } ;
struct TYPE_3__ {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct et131x_adapter*,int ,int *) ;
 int FUNC_1 (struct et131x_adapter*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct et131x_adapter *VAR_2, bool VAR_3)
{
 u16 VAR_4;
 struct phy_device *VAR_5 = VAR_2->netdev->phydev;

 FUNC_0(VAR_2, VAR_1, &VAR_4);
 VAR_4 &= ~VAR_0;
 if (VAR_3)
  VAR_4 |= VAR_0;
 FUNC_1(VAR_2, VAR_5->mdio.addr, VAR_1, VAR_4);
}
