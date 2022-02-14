
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {scalar_t__ enable_wol; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int FUNC_0 (struct vortex_private*) ;
 int VAR_0 ;
 struct vortex_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct vortex_private *VAR_3 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_3))
  return;

 VAR_2->supported = VAR_0;

 VAR_2->wolopts = 0;
 if (VAR_3->enable_wol)
  VAR_2->wolopts |= VAR_0;
}
