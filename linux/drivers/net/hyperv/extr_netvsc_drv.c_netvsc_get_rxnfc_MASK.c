
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netvsc_device {int num_chn; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct net_device_context* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device_context*,struct ethtool_rxnfc*) ;
 struct netvsc_device* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3,
   u32 *VAR_4)
{
 struct net_device_context *VAR_5 = FUNC_0(VAR_2);
 struct netvsc_device *VAR_6 = FUNC_2(VAR_5->nvdev);

 if (!VAR_6)
  return -VAR_0;

 switch (VAR_3->cmd) {
 case 128:
  VAR_3->data = VAR_6->num_chn;
  return 0;

 case 129:
  return FUNC_1(VAR_5, VAR_3);
 }
 return -VAR_1;
}
