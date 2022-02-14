
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int media_type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; int hw_tc_map; int num_alloc_vport; int num_rx_desc; int num_tx_desc; int num_tqps; TYPE_3__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct hclgevf_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pdev->dev;

 FUNC_0(VAR_1, "VF info begin:\n");

 FUNC_0(VAR_1, "Task queue pairs numbers: %d\n", VAR_0->num_tqps);
 FUNC_0(VAR_1, "Desc num per TX queue: %d\n", VAR_0->num_tx_desc);
 FUNC_0(VAR_1, "Desc num per RX queue: %d\n", VAR_0->num_rx_desc);
 FUNC_0(VAR_1, "Numbers of vports: %d\n", VAR_0->num_alloc_vport);
 FUNC_0(VAR_1, "HW tc map: %d\n", VAR_0->hw_tc_map);
 FUNC_0(VAR_1, "PF media type of this VF: %d\n",
   VAR_0->hw.mac.media_type);

 FUNC_0(VAR_1, "VF info end.\n");
}
