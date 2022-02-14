
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; int * ring_data; int dev; int port_id; int fwnode; TYPE_1__* netdev; } ;
struct hnae_handle {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct hnae_handle* FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (struct hnae_handle*) ;
 int FUNC_5 (struct net_device*,struct hnae_handle*) ;
 int FUNC_6 (struct hns_nic_priv*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct hns_nic_priv*) ;
 struct hns_nic_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_9(VAR_2);
 struct hnae_handle *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_3->netdev->dev,
       VAR_3->fwnode, VAR_3->port_id, ((void*)0));
 if (FUNC_0(VAR_4)) {
  VAR_5 = -VAR_0;
  FUNC_1(VAR_3->dev, "has not handle, register notifier!\n");
  goto out;
 }
 VAR_3->ae_handle = VAR_4;

 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_3->dev, "probe phy device fail!\n");
  goto out_init_phy;
 }

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5) {
  VAR_5 = -VAR_1;
  goto out_init_ring_data;
 }

 FUNC_7(VAR_2);

 VAR_5 = FUNC_10(VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_3->dev, "probe register netdev fail!\n");
  goto out_reg_ndev_fail;
 }
 return 0;

out_reg_ndev_fail:
 FUNC_8(VAR_3);
 VAR_3->ring_data = ((void*)0);
out_init_phy:
out_init_ring_data:
 FUNC_4(VAR_3->ae_handle);
 VAR_3->ae_handle = ((void*)0);
out:
 return VAR_5;
}
