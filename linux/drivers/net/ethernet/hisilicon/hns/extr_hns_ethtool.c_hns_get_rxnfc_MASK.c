
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_1__* ae_handle; } ;
struct ethtool_rxnfc {int cmd; int data; } ;
struct TYPE_2__ {int q_num; } ;


 int VAR_0 ;

 struct hns_nic_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
    struct ethtool_rxnfc *VAR_2,
    u32 *VAR_3)
{
 struct hns_nic_priv *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->ae_handle->q_num;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
