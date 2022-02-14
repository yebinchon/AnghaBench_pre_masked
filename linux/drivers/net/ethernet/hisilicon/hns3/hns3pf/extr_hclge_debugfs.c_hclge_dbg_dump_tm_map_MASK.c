
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_tqp_tx_queue_tc_cmd {int tc_id; void* queue_id; } ;
struct hclge_qs_to_pri_link_cmd {int priority; void* qs_id; } ;
struct hclge_nq_to_qs_link_cmd {int qset_id; void* nq_id; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_bp_to_qs_map_cmd {int tc_id; int qs_group_id; int qs_bit_map; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int,int) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (char const*,int ,int*) ;

__attribute__((used)) static void FUNC_7(struct hclge_dev *VAR_4,
      const char *VAR_5)
{
 struct hclge_bp_to_qs_map_cmd *VAR_6;
 struct hclge_nq_to_qs_link_cmd *VAR_7;
 struct hclge_qs_to_pri_link_cmd *VAR_8;
 struct hclge_tqp_tx_queue_tc_cmd *VAR_9;
 enum hclge_opcode_type VAR_10;
 struct hclge_desc VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14[32];
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19;

 VAR_18 = FUNC_6(VAR_5, 0, &VAR_12);
 VAR_12 = (VAR_18 != 0) ? 0 : VAR_12;

 VAR_10 = VAR_1;
 VAR_7 = (struct hclge_nq_to_qs_link_cmd *)VAR_11.data;
 FUNC_4(&VAR_11, VAR_10, 1);
 VAR_7->nq_id = FUNC_0(VAR_12);
 VAR_18 = FUNC_3(&VAR_4->hw, &VAR_11, 1);
 if (VAR_18)
  goto err_tm_map_cmd_send;
 VAR_16 = VAR_7->qset_id & 0x3FF;

 VAR_10 = VAR_2;
 VAR_8 = (struct hclge_qs_to_pri_link_cmd *)VAR_11.data;
 FUNC_4(&VAR_11, VAR_10, 1);
 VAR_8->qs_id = FUNC_0(VAR_16);
 VAR_18 = FUNC_3(&VAR_4->hw, &VAR_11, 1);
 if (VAR_18)
  goto err_tm_map_cmd_send;
 VAR_17 = VAR_8->priority;

 VAR_10 = VAR_3;
 VAR_9 = (struct hclge_tqp_tx_queue_tc_cmd *)VAR_11.data;
 FUNC_4(&VAR_11, VAR_10, 1);
 VAR_9->queue_id = FUNC_0(VAR_12);
 VAR_18 = FUNC_3(&VAR_4->hw, &VAR_11, 1);
 if (VAR_18)
  goto err_tm_map_cmd_send;
 VAR_15 = VAR_9->tc_id & 0x7;

 FUNC_2(&VAR_4->pdev->dev, "queue_id | qset_id | pri_id | tc_id\n");
 FUNC_2(&VAR_4->pdev->dev, "%04d     | %04d    | %02d     | %02d\n",
   VAR_12, VAR_16, VAR_17, VAR_15);

 if (!FUNC_5(VAR_4)) {
  FUNC_2(&VAR_4->pdev->dev,
    "Only DCB-supported dev supports tm mapping\n");
  return;
 }

 VAR_10 = VAR_0;
 VAR_6 = (struct hclge_bp_to_qs_map_cmd *)VAR_11.data;
 for (VAR_13 = 0; VAR_13 < 32; VAR_13++) {
  FUNC_4(&VAR_11, VAR_10, 1);
  VAR_6->tc_id = VAR_15;
  VAR_6->qs_group_id = VAR_13;
  VAR_18 = FUNC_3(&VAR_4->hw, &VAR_11, 1);
  if (VAR_18)
   goto err_tm_map_cmd_send;

  VAR_14[VAR_13] = VAR_6->qs_bit_map;
 }

 FUNC_2(&VAR_4->pdev->dev, "index | tm bp qset maping:\n");

 VAR_19 = 0;
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  FUNC_2(&VAR_4->pdev->dev,
    "%04d  | %08x:%08x:%08x:%08x:%08x:%08x:%08x:%08x\n",
    VAR_13 * 256, VAR_14[(u32)(VAR_19 + 7)],
    VAR_14[(u32)(VAR_19 + 6)], VAR_14[(u32)(VAR_19 + 5)],
    VAR_14[(u32)(VAR_19 + 4)], VAR_14[(u32)(VAR_19 + 3)],
    VAR_14[(u32)(VAR_19 + 2)], VAR_14[(u32)(VAR_19 + 1)],
    VAR_14[VAR_19]);
  VAR_19 += 8;
 }

 return;

err_tm_map_cmd_send:
 FUNC_1(&VAR_4->pdev->dev, "dump tqp map fail(0x%x), ret = %d\n",
  VAR_10, VAR_18);
}
