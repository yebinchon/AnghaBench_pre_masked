
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; scalar_t__ duplex; } ;
struct net_device {int dummy; } ;
struct hip04_priv {scalar_t__ speed; scalar_t__ duplex; struct phy_device* phy; } ;


 int FUNC_0 (struct net_device*,scalar_t__,scalar_t__) ;
 struct hip04_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct hip04_priv *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_1->phy;

 if ((VAR_1->speed != VAR_2->speed) || (VAR_1->duplex != VAR_2->duplex)) {
  FUNC_0(VAR_0, VAR_2->speed, VAR_2->duplex);
  FUNC_2(VAR_2);
 }
}
