
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wolopts; int supported; } ;
struct tulip_private {TYPE_1__ wolinfo; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 struct tulip_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
      struct ethtool_wolinfo *VAR_1)
{
 struct tulip_private *VAR_2 = FUNC_0(VAR_0);

 VAR_1->supported = VAR_2->wolinfo.supported;
 VAR_1->wolopts = VAR_2->wolinfo.wolopts;
 return;
}
