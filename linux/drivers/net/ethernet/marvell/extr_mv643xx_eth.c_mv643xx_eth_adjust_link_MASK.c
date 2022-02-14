
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {TYPE_1__* phydev; } ;
struct mv643xx_eth_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;
 int FUNC_2 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_12)
{
 struct mv643xx_eth_private *VAR_13 = FUNC_0(VAR_12);
 u32 VAR_14 = FUNC_1(VAR_13, VAR_6);
 u32 VAR_15 = VAR_5 |
              VAR_3 |
       VAR_2 |
       VAR_1;

 if (VAR_12->phydev->autoneg == VAR_0) {

  VAR_14 &= ~VAR_15;
  goto out_write;
 }

 VAR_14 |= VAR_15;

 if (VAR_12->phydev->speed == VAR_11) {

  VAR_14 |= VAR_8;
  VAR_14 |= VAR_7;
  goto out_write;
 }

 VAR_14 &= ~VAR_8;

 if (VAR_12->phydev->speed == VAR_10)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;

 if (VAR_12->phydev->duplex == VAR_4)
  VAR_14 |= VAR_7;
 else
  VAR_14 &= ~VAR_7;

out_write:
 FUNC_2(VAR_13, VAR_6, VAR_14);
}
