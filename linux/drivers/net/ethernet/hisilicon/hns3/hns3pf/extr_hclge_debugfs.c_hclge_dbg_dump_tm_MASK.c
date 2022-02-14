
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_qs_weight_cmd {int dwrr; int qs_id; } ;
struct hclge_qs_to_pri_link_cmd {int link_vld; int priority; int qs_id; } ;
struct hclge_priority_weight_cmd {int dwrr; int pri_id; } ;
struct hclge_pri_shapping_cmd {int pri_shapping_para; int pri_id; } ;
struct hclge_pg_weight_cmd {int dwrr; int pg_id; } ;
struct hclge_pg_to_pri_link_cmd {int pri_bit_map; int pg_id; } ;
struct hclge_nq_to_qs_link_cmd {int qset_id; int nq_id; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int,int) ;
 int FUNC_4 (struct hclge_dev*) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_8)
{
 struct hclge_priority_weight_cmd *VAR_9;
 struct hclge_pg_to_pri_link_cmd *VAR_10;
 struct hclge_qs_to_pri_link_cmd *VAR_11;
 struct hclge_nq_to_qs_link_cmd *VAR_12;
 struct hclge_pri_shapping_cmd *VAR_13;
 struct hclge_pg_weight_cmd *VAR_14;
 struct hclge_qs_weight_cmd *VAR_15;
 enum hclge_opcode_type VAR_16;
 struct hclge_desc VAR_17;
 int VAR_18;

 VAR_16 = VAR_1;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_10 = (struct hclge_pg_to_pri_link_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "dump tm\n");
 FUNC_1(&VAR_8->pdev->dev, "PG_TO_PRI gp_id: %u\n",
   VAR_10->pg_id);
 FUNC_1(&VAR_8->pdev->dev, "PG_TO_PRI map: 0x%x\n",
   VAR_10->pri_bit_map);

 VAR_16 = VAR_6;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_11 = (struct hclge_qs_to_pri_link_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "QS_TO_PRI qs_id: %u\n",
   VAR_11->qs_id);
 FUNC_1(&VAR_8->pdev->dev, "QS_TO_PRI priority: %u\n",
   VAR_11->priority);
 FUNC_1(&VAR_8->pdev->dev, "QS_TO_PRI link_vld: %u\n",
   VAR_11->link_vld);

 VAR_16 = VAR_0;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_12 = (struct hclge_nq_to_qs_link_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "NQ_TO_QS nq_id: %u\n", VAR_12->nq_id);
 FUNC_1(&VAR_8->pdev->dev, "NQ_TO_QS qset_id: 0x%x\n",
   VAR_12->qset_id);

 VAR_16 = VAR_2;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_14 = (struct hclge_pg_weight_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "PG pg_id: %u\n", VAR_14->pg_id);
 FUNC_1(&VAR_8->pdev->dev, "PG dwrr: %u\n", VAR_14->dwrr);

 VAR_16 = VAR_7;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_15 = (struct hclge_qs_weight_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "QS qs_id: %u\n", VAR_15->qs_id);
 FUNC_1(&VAR_8->pdev->dev, "QS dwrr: %u\n", VAR_15->dwrr);

 VAR_16 = VAR_5;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_9 = (struct hclge_priority_weight_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "PRI pri_id: %u\n", VAR_9->pri_id);
 FUNC_1(&VAR_8->pdev->dev, "PRI dwrr: %u\n", VAR_9->dwrr);

 VAR_16 = VAR_3;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_13 = (struct hclge_pri_shapping_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "PRI_C pri_id: %u\n", VAR_13->pri_id);
 FUNC_1(&VAR_8->pdev->dev, "PRI_C pri_shapping: 0x%x\n",
   VAR_13->pri_shapping_para);

 VAR_16 = VAR_4;
 FUNC_3(&VAR_17, VAR_16, 1);
 VAR_18 = FUNC_2(&VAR_8->hw, &VAR_17, 1);
 if (VAR_18)
  goto err_tm_cmd_send;

 VAR_13 = (struct hclge_pri_shapping_cmd *)VAR_17.data;
 FUNC_1(&VAR_8->pdev->dev, "PRI_P pri_id: %u\n", VAR_13->pri_id);
 FUNC_1(&VAR_8->pdev->dev, "PRI_P pri_shapping: 0x%x\n",
   VAR_13->pri_shapping_para);

 FUNC_4(VAR_8);

 return;

err_tm_cmd_send:
 FUNC_0(&VAR_8->pdev->dev, "dump tm fail(0x%x), ret = %d\n",
  VAR_16, VAR_18);
}
