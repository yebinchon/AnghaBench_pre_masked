
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; int mtu; } ;
struct emac_instance {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct emac_instance*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct emac_instance*,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct emac_instance* FUNC_5 (struct net_device*) ;

__attribute__((used)) static inline u32 FUNC_6(struct net_device *VAR_14)
{
 struct emac_instance *VAR_15 = FUNC_5(VAR_14);
 u32 VAR_16;

 VAR_16 = VAR_11 | VAR_10 | VAR_6 | VAR_4;

 if (FUNC_2(VAR_15, VAR_3))
     VAR_16 |= VAR_0;
 else
     VAR_16 |= VAR_5;

 if (VAR_14->flags & VAR_13)
  VAR_16 |= VAR_8;
 else if (VAR_14->flags & VAR_12 ||
    (FUNC_3(VAR_14) > FUNC_1(VAR_15)))
  VAR_16 |= VAR_9;
 else if (!FUNC_4(VAR_14))
  VAR_16 |= VAR_7;

 if (FUNC_2(VAR_15, VAR_2)) {
  VAR_16 &= ~VAR_1;
  VAR_16 |= FUNC_0(VAR_14->mtu);
 }

 return VAR_16;
}
