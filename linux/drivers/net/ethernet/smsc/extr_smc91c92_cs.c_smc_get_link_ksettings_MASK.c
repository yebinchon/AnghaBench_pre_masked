
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct smc_private {int cfg; int lock; int mii_if; } ;
struct net_device {unsigned int base_addr; } ;
struct ethtool_link_ksettings {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,struct ethtool_link_ksettings*) ;
 struct smc_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2,
      struct ethtool_link_ksettings *VAR_3)
{
 struct smc_private *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5 = VAR_2->base_addr;
 u16 VAR_6 = FUNC_1(VAR_5 + VAR_0);
 unsigned long VAR_7;

 FUNC_5(&VAR_4->lock, VAR_7);
 FUNC_0(3);
 if (VAR_4->cfg & VAR_1)
  FUNC_2(&VAR_4->mii_if, VAR_3);
 else
  FUNC_4(VAR_2, VAR_3);
 FUNC_0(VAR_6);
 FUNC_6(&VAR_4->lock, VAR_7);
 return 0;
}
