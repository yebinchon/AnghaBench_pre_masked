
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int wol_events; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct typhoon* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 struct typhoon *VAR_7 = FUNC_0(VAR_5);

 if(VAR_6->wolopts & ~(VAR_4 | VAR_3))
  return -VAR_0;

 VAR_7->wol_events = 0;
 if(VAR_6->wolopts & VAR_4)
  VAR_7->wol_events |= VAR_1;
 if(VAR_6->wolopts & VAR_3)
  VAR_7->wol_events |= VAR_2;

 return 0;
}
