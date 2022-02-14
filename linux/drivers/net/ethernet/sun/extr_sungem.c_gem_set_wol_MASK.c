
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int wake_on_lan; int has_wol; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gem* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct gem *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4->has_wol)
  return -VAR_0;
 VAR_4->wake_on_lan = VAR_3->wolopts & VAR_1;
 return 0;
}
