
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tlan_priv {scalar_t__* phy; size_t phy_num; TYPE_1__* adapter; } ;
struct net_device {int base_addr; int name; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ,int) ;
 int FUNC_5 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 struct tlan_priv *VAR_9 = FUNC_2(VAR_8);
 u16 VAR_10;

 FUNC_0(VAR_5, "%s: Powering down PHY(s).\n", VAR_8->name);
 VAR_10 = VAR_2 | VAR_1 | VAR_0;
 FUNC_3(VAR_8->base_addr);
 FUNC_4(VAR_8, VAR_9->phy[VAR_9->phy_num], VAR_3, VAR_10);
 if ((VAR_9->phy_num == 0) && (VAR_9->phy[1] != VAR_6)) {

  if (VAR_9->adapter->flags & VAR_4)
   VAR_10 = VAR_0;
  FUNC_3(VAR_8->base_addr);
  FUNC_4(VAR_8, VAR_9->phy[1], VAR_3, VAR_10);
 }





 FUNC_5(VAR_8, FUNC_1(50), VAR_7);

}
