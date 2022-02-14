
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int wake_on_lan; scalar_t__ has_wol; } ;
struct ethtool_wolinfo {int wolopts; scalar_t__ supported; } ;


 scalar_t__ VAR_0 ;
 struct gem* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct gem *VAR_3 = FUNC_0(VAR_1);


 if (VAR_3->has_wol) {
  VAR_2->supported = VAR_0;
  VAR_2->wolopts = VAR_3->wake_on_lan;
 } else {
  VAR_2->supported = 0;
  VAR_2->wolopts = 0;
 }
}
