
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int flag; int dv_buf_size; int tx_buf_size; int pkt_buf_size; int hw_tc_map; int num_req_vfs; int num_vmdq_vport; int num_alloc_vport; int num_rx_desc; int num_tx_desc; int num_tqps; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;

 FUNC_0(VAR_4, "PF info begin:\n");

 FUNC_0(VAR_4, "Task queue pairs numbers: %d\n", VAR_3->num_tqps);
 FUNC_0(VAR_4, "Desc num per TX queue: %d\n", VAR_3->num_tx_desc);
 FUNC_0(VAR_4, "Desc num per RX queue: %d\n", VAR_3->num_rx_desc);
 FUNC_0(VAR_4, "Numbers of vports: %d\n", VAR_3->num_alloc_vport);
 FUNC_0(VAR_4, "Numbers of vmdp vports: %d\n", VAR_3->num_vmdq_vport);
 FUNC_0(VAR_4, "Numbers of VF for this PF: %d\n", VAR_3->num_req_vfs);
 FUNC_0(VAR_4, "HW tc map: %d\n", VAR_3->hw_tc_map);
 FUNC_0(VAR_4, "Total buffer size for TX/RX: %d\n", VAR_3->pkt_buf_size);
 FUNC_0(VAR_4, "TX buffer size for each TC: %d\n", VAR_3->tx_buf_size);
 FUNC_0(VAR_4, "DV buffer size for each TC: %d\n", VAR_3->dv_buf_size);
 FUNC_0(VAR_4, "This is %s PF\n",
   VAR_3->flag & VAR_1 ? "main" : "not main");
 FUNC_0(VAR_4, "DCB %s\n",
   VAR_3->flag & VAR_0 ? "enable" : "disable");
 FUNC_0(VAR_4, "MQPRIO %s\n",
   VAR_3->flag & VAR_2 ? "enable" : "disable");

 FUNC_0(VAR_4, "PF info end.\n");
}
