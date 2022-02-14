
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; scalar_t__ wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 VAR_3->supported = VAR_1 | VAR_0;
 VAR_3->wolopts = 0;
}
