
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ wol_enabled; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;


 void* VAR_0 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct ravb_private *VAR_3 = FUNC_0(VAR_1);

 VAR_2->supported = VAR_0;
 VAR_2->wolopts = VAR_3->wol_enabled ? VAR_0 : 0;
}
