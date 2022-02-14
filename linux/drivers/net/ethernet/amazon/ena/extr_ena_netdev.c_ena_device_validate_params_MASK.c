
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ mtu; } ;
struct TYPE_2__ {scalar_t__ max_mtu; int mac_addr; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ dev_attr; } ;
struct ena_adapter {int mac_addr; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ena_adapter*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_2(struct ena_adapter *VAR_2,
          struct ena_com_dev_get_features_ctx *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->dev_attr.mac_addr,
         VAR_2->mac_addr);
 if (!VAR_5) {
  FUNC_1(VAR_2, VAR_1, VAR_4,
     "Error, mac address are different\n");
  return -VAR_0;
 }

 if (VAR_3->dev_attr.max_mtu < VAR_4->mtu) {
  FUNC_1(VAR_2, VAR_1, VAR_4,
     "Error, device max mtu is smaller than netdev MTU\n");
  return -VAR_0;
 }

 return 0;
}
