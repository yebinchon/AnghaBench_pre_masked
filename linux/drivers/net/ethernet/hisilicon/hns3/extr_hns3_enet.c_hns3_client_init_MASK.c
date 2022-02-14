
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct net_device {int max_mtu; int * netdev_ops; int priv_flags; int watchdog_timeo; } ;
struct hns3_nic_priv {struct hnae3_handle* ae_handle; int * ring_data; int state; int * dev; scalar_t__ tx_timeout_count; struct net_device* netdev; } ;
struct TYPE_6__ {struct net_device* netdev; } ;
struct hnae3_handle {void* priv; TYPE_3__ kinfo; int msg_enable; TYPE_2__* ae_algo; struct pci_dev* pdev; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* get_tqps_and_rss_info ) (struct hnae3_handle*,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hnae3_handle*) ;
 int FUNC_5 (struct hnae3_handle*) ;
 int FUNC_6 (struct hnae3_handle*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct hns3_nic_priv*) ;
 int FUNC_9 (struct hns3_nic_priv*) ;
 int FUNC_10 (struct hns3_nic_priv*) ;
 int FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct hns3_nic_priv*) ;
 int FUNC_14 (struct hns3_nic_priv*) ;
 int FUNC_15 (struct hns3_nic_priv*) ;
 int VAR_8 ;
 int FUNC_16 (struct hns3_nic_priv*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct hns3_nic_priv*) ;
 int FUNC_19 (struct net_device*) ;
 struct hns3_nic_priv* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*) ;
 scalar_t__ FUNC_22 (struct hnae3_handle*) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (struct hnae3_handle*,int *,int *) ;
 int FUNC_27 (struct net_device*) ;

__attribute__((used)) static int FUNC_28(struct hnae3_handle *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->pdev;
 u16 VAR_11, VAR_12;
 struct hns3_nic_priv *VAR_13;
 struct net_device *VAR_14;
 int VAR_15;

 VAR_9->ae_algo->ops->get_tqps_and_rss_info(VAR_9, &VAR_11,
          &VAR_12);
 VAR_14 = FUNC_1(sizeof(struct hns3_nic_priv), VAR_11);
 if (!VAR_14)
  return -VAR_1;

 VAR_13 = FUNC_20(VAR_14);
 VAR_13->dev = &VAR_10->dev;
 VAR_13->netdev = VAR_14;
 VAR_13->ae_handle = VAR_9;
 VAR_13->tx_timeout_count = 0;
 FUNC_25(VAR_3, &VAR_13->state);

 VAR_9->msg_enable = FUNC_23(VAR_7, VAR_0);

 VAR_9->kinfo.netdev = VAR_14;
 VAR_9->priv = (void *)VAR_13;

 FUNC_11(VAR_14, 1);

 FUNC_17(VAR_14);

 VAR_14->watchdog_timeo = VAR_5;
 VAR_14->priv_flags |= VAR_6;
 VAR_14->netdev_ops = &VAR_8;
 FUNC_0(VAR_14, &VAR_10->dev);
 FUNC_7(VAR_14);


 FUNC_21(VAR_14);

 VAR_15 = FUNC_8(VAR_13);
 if (VAR_15) {
  VAR_15 = -VAR_1;
  goto out_get_ring_cfg;
 }

 VAR_15 = FUNC_13(VAR_13);
 if (VAR_15) {
  VAR_15 = -VAR_1;
  goto out_alloc_vector_data;
 }

 VAR_15 = FUNC_15(VAR_13);
 if (VAR_15) {
  VAR_15 = -VAR_1;
  goto out_init_vector_data;
 }

 VAR_15 = FUNC_10(VAR_13);
 if (VAR_15) {
  VAR_15 = -VAR_1;
  goto out_init_ring_data;
 }

 VAR_15 = FUNC_12(VAR_14);
 if (VAR_15)
  goto out_init_phy;

 VAR_15 = FUNC_24(VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_13->dev, "probe register netdev fail!\n");
  goto out_reg_netdev_fail;
 }

 VAR_15 = FUNC_4(VAR_9);
 if (VAR_15) {
  FUNC_2(VAR_13->dev, "hns3_client_start fail! ret=%d\n", VAR_15);
  goto out_client_start;
 }

 FUNC_6(VAR_9);

 FUNC_5(VAR_9);


 VAR_14->max_mtu = VAR_2;

 FUNC_25(VAR_4, &VAR_13->state);

 if (FUNC_22(VAR_9))
  FUNC_9(VAR_13);

 return VAR_15;

out_client_start:
 FUNC_27(VAR_14);
out_reg_netdev_fail:
 FUNC_19(VAR_14);
out_init_phy:
 FUNC_18(VAR_13);
out_init_ring_data:
 FUNC_16(VAR_13);
out_init_vector_data:
 FUNC_14(VAR_13);
out_alloc_vector_data:
 VAR_13->ring_data = ((void*)0);
out_get_ring_cfg:
 VAR_13->ae_handle = ((void*)0);
 FUNC_3(VAR_14);
 return VAR_15;
}
