
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_port_shapping_cmd {int port_shapping_para; } ;
struct hclge_pg_shapping_cmd {int pg_shapping_para; int pg_id; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int * data; } ;
struct hclge_bp_to_qs_map_cmd {int qs_bit_map; int qs_group_id; int tc_id; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int,int) ;
 int FUNC_4 (struct hclge_dev*) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_7)
{
 struct hclge_port_shapping_cmd *VAR_8;
 struct hclge_bp_to_qs_map_cmd *VAR_9;
 struct hclge_pg_shapping_cmd *VAR_10;
 enum hclge_opcode_type VAR_11;
 struct hclge_desc VAR_12;
 int VAR_13;

 VAR_11 = VAR_1;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 VAR_10 = (struct hclge_pg_shapping_cmd *)VAR_12.data;
 FUNC_1(&VAR_7->pdev->dev, "PG_C pg_id: %u\n", VAR_10->pg_id);
 FUNC_1(&VAR_7->pdev->dev, "PG_C pg_shapping: 0x%x\n",
   VAR_10->pg_shapping_para);

 VAR_11 = VAR_2;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 VAR_10 = (struct hclge_pg_shapping_cmd *)VAR_12.data;
 FUNC_1(&VAR_7->pdev->dev, "PG_P pg_id: %u\n", VAR_10->pg_id);
 FUNC_1(&VAR_7->pdev->dev, "PG_P pg_shapping: 0x%x\n",
   VAR_10->pg_shapping_para);

 VAR_11 = VAR_4;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 VAR_8 = (struct hclge_port_shapping_cmd *)VAR_12.data;
 FUNC_1(&VAR_7->pdev->dev, "PORT port_shapping: 0x%x\n",
   VAR_8->port_shapping_para);

 VAR_11 = VAR_3;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 FUNC_1(&VAR_7->pdev->dev, "PG_SCH pg_id: %u\n", VAR_12.data[0]);

 VAR_11 = VAR_5;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 FUNC_1(&VAR_7->pdev->dev, "PRI_SCH pri_id: %u\n", VAR_12.data[0]);

 VAR_11 = VAR_6;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 FUNC_1(&VAR_7->pdev->dev, "QS_SCH qs_id: %u\n", VAR_12.data[0]);

 if (!FUNC_4(VAR_7)) {
  FUNC_1(&VAR_7->pdev->dev,
    "Only DCB-supported dev supports tm mapping\n");
  return;
 }

 VAR_11 = VAR_0;
 FUNC_3(&VAR_12, VAR_11, 1);
 VAR_13 = FUNC_2(&VAR_7->hw, &VAR_12, 1);
 if (VAR_13)
  goto err_tm_pg_cmd_send;

 VAR_9 = (struct hclge_bp_to_qs_map_cmd *)VAR_12.data;
 FUNC_1(&VAR_7->pdev->dev, "BP_TO_QSET tc_id: %u\n",
   VAR_9->tc_id);
 FUNC_1(&VAR_7->pdev->dev, "BP_TO_QSET qs_group_id: 0x%x\n",
   VAR_9->qs_group_id);
 FUNC_1(&VAR_7->pdev->dev, "BP_TO_QSET qs_bit_map: 0x%x\n",
   VAR_9->qs_bit_map);
 return;

err_tm_pg_cmd_send:
 FUNC_0(&VAR_7->pdev->dev, "dump tm_pg fail(0x%x), ret = %d\n",
  VAR_11, VAR_13);
}
