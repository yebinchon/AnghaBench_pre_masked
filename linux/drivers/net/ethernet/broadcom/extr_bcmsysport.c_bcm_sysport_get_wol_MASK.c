
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; int sopass; } ;
struct bcm_sysport_priv {int wolopts; int sopass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct bcm_sysport_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
    struct ethtool_wolinfo *VAR_4)
{
 struct bcm_sysport_priv *VAR_5 = FUNC_1(VAR_3);

 VAR_4->supported = VAR_1 | VAR_2 | VAR_0;
 VAR_4->wolopts = VAR_5->wolopts;

 if (!(VAR_5->wolopts & VAR_2))
  return;

 FUNC_0(VAR_4->sopass, VAR_5->sopass, sizeof(VAR_5->sopass));
}
