
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {int enable_wol; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vortex_private*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 struct vortex_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct vortex_private *VAR_5 = FUNC_2(VAR_3);

 if (!FUNC_0(VAR_5))
  return -VAR_1;

 if (VAR_4->wolopts & ~VAR_2)
  return -VAR_0;

 if (VAR_4->wolopts & VAR_2)
  VAR_5->enable_wol = 1;
 else
  VAR_5->enable_wol = 0;
 FUNC_1(VAR_3);

 return 0;
}
