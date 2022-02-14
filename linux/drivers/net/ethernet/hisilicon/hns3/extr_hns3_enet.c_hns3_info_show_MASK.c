
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_nic_priv {TYPE_2__* netdev; int dev; TYPE_1__* ae_handle; } ;
struct hnae3_knic_private_info {int num_tc; int num_rx_desc; int num_tx_desc; int rx_buf_len; int req_rss_size; int rss_size; int num_tqps; } ;
struct TYPE_4__ {int max_mtu; int dev_addr; } ;
struct TYPE_3__ {struct hnae3_knic_private_info kinfo; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct hns3_nic_priv *VAR_0)
{
 struct hnae3_knic_private_info *VAR_1 = &VAR_0->ae_handle->kinfo;

 FUNC_0(VAR_0->dev, "MAC address: %pM\n", VAR_0->netdev->dev_addr);
 FUNC_0(VAR_0->dev, "Task queue pairs numbers: %d\n", VAR_1->num_tqps);
 FUNC_0(VAR_0->dev, "RSS size: %d\n", VAR_1->rss_size);
 FUNC_0(VAR_0->dev, "Allocated RSS size: %d\n", VAR_1->req_rss_size);
 FUNC_0(VAR_0->dev, "RX buffer length: %d\n", VAR_1->rx_buf_len);
 FUNC_0(VAR_0->dev, "Desc num per TX queue: %d\n", VAR_1->num_tx_desc);
 FUNC_0(VAR_0->dev, "Desc num per RX queue: %d\n", VAR_1->num_rx_desc);
 FUNC_0(VAR_0->dev, "Total number of enabled TCs: %d\n", VAR_1->num_tc);
 FUNC_0(VAR_0->dev, "Max mtu size: %d\n", VAR_0->netdev->max_mtu);
}
