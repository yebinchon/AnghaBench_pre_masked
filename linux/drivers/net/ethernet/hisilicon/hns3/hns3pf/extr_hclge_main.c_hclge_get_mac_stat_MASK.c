
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_mac_stats {int rx_pause_cnt; int tx_pause_cnt; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {int mac_rx_mac_pause_num; int mac_tx_mac_pause_num; } ;
struct TYPE_4__ {TYPE_1__ mac_stats; } ;
struct hclge_dev {TYPE_2__ hw_stats; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hnae3_handle*,int *) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_0,
          struct hns3_mac_stats *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_3 = VAR_2->back;

 FUNC_1(VAR_0, ((void*)0));

 VAR_1->tx_pause_cnt = VAR_3->hw_stats.mac_stats.mac_tx_mac_pause_num;
 VAR_1->rx_pause_cnt = VAR_3->hw_stats.mac_stats.mac_rx_mac_pause_num;
}
