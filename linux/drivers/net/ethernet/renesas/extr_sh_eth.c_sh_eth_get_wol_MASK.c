
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {scalar_t__ wol_enabled; TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;
struct TYPE_2__ {scalar_t__ magic; } ;


 void* VAR_0 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_0(VAR_1);

 VAR_2->supported = 0;
 VAR_2->wolopts = 0;

 if (VAR_3->cd->magic) {
  VAR_2->supported = VAR_0;
  VAR_2->wolopts = VAR_3->wol_enabled ? VAR_0 : 0;
 }
}
