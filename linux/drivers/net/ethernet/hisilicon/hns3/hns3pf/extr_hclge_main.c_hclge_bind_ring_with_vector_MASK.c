
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hnae3_ring_chain_node {int int_gl_idx; int tqp_index; int flag; struct hnae3_ring_chain_node* next; } ;
struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_ctrl_vector_chain_cmd {int int_vector_id; int int_cause_num; int vfid; int * tqp_type_and_id; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
typedef enum hclge_cmd_status { ____Placeholder_hclge_cmd_status } hclge_cmd_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct hclge_vport *VAR_13,
    int VAR_14, bool VAR_15,
    struct hnae3_ring_chain_node *VAR_16)
{
 struct hclge_dev *VAR_17 = VAR_13->back;
 struct hnae3_ring_chain_node *VAR_18;
 struct hclge_desc VAR_19;
 struct hclge_ctrl_vector_chain_cmd *VAR_20 =
  (struct hclge_ctrl_vector_chain_cmd *)VAR_19.data;
 enum hclge_cmd_status VAR_21;
 enum hclge_opcode_type VAR_22;
 u16 VAR_23;
 int VAR_24;

 VAR_22 = VAR_15 ? VAR_5 : VAR_6;
 FUNC_3(&VAR_19, VAR_22, 0);
 VAR_20->int_vector_id = VAR_14;

 VAR_24 = 0;
 for (VAR_18 = VAR_16; VAR_18; VAR_18 = VAR_18->next) {
  VAR_23 = FUNC_7(VAR_20->tqp_type_and_id[VAR_24]);
  FUNC_6(VAR_23, VAR_3,
    VAR_4,
    FUNC_4(VAR_18->flag, VAR_12));
  FUNC_6(VAR_23, VAR_7,
    VAR_8, VAR_18->tqp_index);
  FUNC_6(VAR_23, VAR_1,
    VAR_2,
    FUNC_5(VAR_18->int_gl_idx,
      VAR_10,
      VAR_11));
  VAR_20->tqp_type_and_id[VAR_24] = FUNC_0(VAR_23);
  if (++VAR_24 >= VAR_9) {
   VAR_20->int_cause_num = VAR_9;
   VAR_20->vfid = VAR_13->vport_id;

   VAR_21 = FUNC_2(&VAR_17->hw, &VAR_19, 1);
   if (VAR_21) {
    FUNC_1(&VAR_17->pdev->dev,
     "Map TQP fail, status is %d.\n",
     VAR_21);
    return -VAR_0;
   }
   VAR_24 = 0;

   FUNC_3(&VAR_19,
         VAR_22,
         0);
   VAR_20->int_vector_id = VAR_14;
  }
 }

 if (VAR_24 > 0) {
  VAR_20->int_cause_num = VAR_24;
  VAR_20->vfid = VAR_13->vport_id;
  VAR_21 = FUNC_2(&VAR_17->hw, &VAR_19, 1);
  if (VAR_21) {
   FUNC_1(&VAR_17->pdev->dev,
    "Map TQP fail, status is %d.\n", VAR_21);
   return -VAR_0;
  }
 }

 return 0;
}
