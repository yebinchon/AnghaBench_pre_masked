
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct hnae3_handle {int netdev_flags; TYPE_3__* ae_algo; TYPE_1__* pdev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* enable_vlan_filter ) (struct hnae3_handle*,int) ;} ;
struct TYPE_4__ {int revision; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,char*) ;
 struct hns3_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae3_handle*,int) ;

void FUNC_3(struct net_device *VAR_1, bool VAR_2)
{
 struct hns3_nic_priv *VAR_3 = FUNC_1(VAR_1);
 struct hnae3_handle *VAR_4 = VAR_3->ae_handle;
 bool VAR_5;

 if (VAR_4->pdev->revision >= 0x21 && VAR_4->ae_algo->ops->enable_vlan_filter) {
  VAR_5 = VAR_4->netdev_flags & VAR_0 ? 1 : 0;
  if (VAR_2 != VAR_5) {
   FUNC_0(VAR_1,
        "%s vlan filter\n",
        VAR_2 ? "enable" : "disable");
   VAR_4->ae_algo->ops->enable_vlan_filter(VAR_4, VAR_2);
  }
 }
}
