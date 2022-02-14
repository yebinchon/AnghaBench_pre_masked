
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; int autoneg; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6)
{
 struct phy_device *VAR_7 = VAR_6->phydev;
 int VAR_8, VAR_9;






 if (!VAR_7->autoneg && (VAR_7->speed == 100)) {

  VAR_9 = FUNC_0(VAR_7, VAR_2);
  VAR_9 &= ~VAR_3;
  VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_9);

  VAR_9 = FUNC_0(VAR_7, VAR_5);
  VAR_9 &= ~(VAR_0 | VAR_1);
  FUNC_1(VAR_7, VAR_5, VAR_9);
  VAR_9 |= VAR_0;
  FUNC_1(VAR_7, VAR_5, VAR_9);


  VAR_9 = FUNC_0(VAR_7, VAR_4);


  VAR_9 = FUNC_0(VAR_7, VAR_2);
  VAR_9 |= VAR_3;
  VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_9);
 }
}
