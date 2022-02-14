
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa168_eth_private {int dummy; } ;
struct phy_device {scalar_t__ interface; scalar_t__ speed; int pause; scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct pxa168_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct pxa168_eth_private*,int ) ;
 int FUNC_3 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8)
{
 struct pxa168_eth_private *VAR_9 = FUNC_0(VAR_8);
 struct phy_device *VAR_10 = VAR_8->phydev;
 u32 VAR_11, VAR_12 = FUNC_2(VAR_9, VAR_5);
 u32 VAR_13, VAR_14 = FUNC_2(VAR_9, VAR_6);

 VAR_11 = VAR_12 & ~VAR_0;
 VAR_13 = VAR_14 & ~(VAR_3 | VAR_1 | VAR_2);

 if (VAR_10->interface == VAR_4)
  VAR_13 |= VAR_2;
 if (VAR_10->speed == VAR_7)
  VAR_13 |= VAR_3;
 if (VAR_10->duplex)
  VAR_11 |= VAR_0;
 if (!VAR_10->pause)
  VAR_13 |= VAR_1;


 if (VAR_11 == VAR_12 && VAR_13 == VAR_14)
  return;

 FUNC_3(VAR_9, VAR_5, VAR_11);
 FUNC_3(VAR_9, VAR_6, VAR_13);

 FUNC_1(VAR_10);
}
