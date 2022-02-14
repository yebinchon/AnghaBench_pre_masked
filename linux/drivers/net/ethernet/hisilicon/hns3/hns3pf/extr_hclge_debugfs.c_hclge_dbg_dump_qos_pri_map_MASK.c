
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_qos_pri_map_cmd {int pri7_tc; int pri6_tc; int pri5_tc; int pri4_tc; int pri3_tc; int pri2_tc; int pri1_tc; int pri0_tc; int vlan_pri; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_1)
{
 struct hclge_qos_pri_map_cmd *VAR_2;
 struct hclge_desc VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, VAR_0, 1);

 VAR_4 = FUNC_2(&VAR_1->hw, &VAR_3, 1);
 if (VAR_4) {
  FUNC_0(&VAR_1->pdev->dev,
   "dump qos pri map fail, ret = %d\n", VAR_4);
  return;
 }

 VAR_2 = (struct hclge_qos_pri_map_cmd *)VAR_3.data;
 FUNC_1(&VAR_1->pdev->dev, "dump qos pri map\n");
 FUNC_1(&VAR_1->pdev->dev, "vlan_to_pri: 0x%x\n", VAR_2->vlan_pri);
 FUNC_1(&VAR_1->pdev->dev, "pri_0_to_tc: 0x%x\n", VAR_2->pri0_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_1_to_tc: 0x%x\n", VAR_2->pri1_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_2_to_tc: 0x%x\n", VAR_2->pri2_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_3_to_tc: 0x%x\n", VAR_2->pri3_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_4_to_tc: 0x%x\n", VAR_2->pri4_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_5_to_tc: 0x%x\n", VAR_2->pri5_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_6_to_tc: 0x%x\n", VAR_2->pri6_tc);
 FUNC_1(&VAR_1->pdev->dev, "pri_7_to_tc: 0x%x\n", VAR_2->pri7_tc);
}
