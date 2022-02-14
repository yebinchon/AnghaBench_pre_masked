
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int dummy; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int dummy; } ;


 int FUNC_0 (struct netvsc_device*,struct ethtool_ringparam*) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 struct netvsc_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
     struct ethtool_ringparam *VAR_1)
{
 struct net_device_context *VAR_2 = FUNC_1(VAR_0);
 struct netvsc_device *VAR_3 = FUNC_2(VAR_2->nvdev);

 if (!VAR_3)
  return;

 FUNC_0(VAR_3, VAR_1);
}
