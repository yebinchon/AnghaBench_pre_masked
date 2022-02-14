
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int min_mtu; int max_mtu; int dev_addr; } ;
struct TYPE_2__ {int max_mtu; int mac_addr; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ dev_attr; } ;
struct ena_adapter {int max_mtu; int mac_addr; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev_get_features_ctx*,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ena_adapter *VAR_1,
         struct ena_com_dev_get_features_ctx *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;


 if (!FUNC_3(VAR_2->dev_attr.mac_addr)) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_1->mac_addr, VAR_3->dev_addr);
 } else {
  FUNC_2(VAR_1->mac_addr, VAR_2->dev_attr.mac_addr);
  FUNC_2(VAR_3->dev_addr, VAR_1->mac_addr);
 }


 FUNC_0(VAR_2, VAR_3);

 VAR_1->max_mtu = VAR_2->dev_attr.max_mtu;
 VAR_3->max_mtu = VAR_1->max_mtu;
 VAR_3->min_mtu = VAR_0;
}
