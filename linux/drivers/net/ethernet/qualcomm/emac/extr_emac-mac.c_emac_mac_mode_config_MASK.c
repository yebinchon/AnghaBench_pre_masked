
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int features; int flags; } ;
struct emac_adapter {scalar_t__ base; struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct emac_adapter *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->netdev;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_8->base + VAR_0);
 VAR_10 &= ~(VAR_7 | VAR_6 | VAR_4 | VAR_3);

 if (VAR_9->features & VAR_5)
  VAR_10 |= VAR_7;

 if (VAR_9->flags & VAR_2)
  VAR_10 |= VAR_6;

 if (VAR_9->flags & VAR_1)
  VAR_10 |= VAR_4;

 FUNC_1(VAR_10, VAR_8->base + VAR_0);
}
