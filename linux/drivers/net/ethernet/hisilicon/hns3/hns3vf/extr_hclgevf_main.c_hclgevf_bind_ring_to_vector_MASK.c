
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hnae3_ring_chain_node {int tqp_index; struct hnae3_ring_chain_node* next; int int_gl_idx; int flag; } ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {TYPE_1__* pdev; int hw; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (int *,struct hclgevf_desc*,int) ;
 int FUNC_3 (struct hclgevf_desc*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hnae3_handle *VAR_9, bool VAR_10,
           int VAR_11,
           struct hnae3_ring_chain_node *VAR_12)
{
 struct hclgevf_dev *VAR_13 = FUNC_1(VAR_9);
 struct hnae3_ring_chain_node *VAR_14;
 struct hclge_mbx_vf_to_pf_cmd *VAR_15;
 struct hclgevf_desc VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 u8 VAR_19;

 VAR_15 = (struct hclge_mbx_vf_to_pf_cmd *)VAR_16.data;
 VAR_19 = VAR_10 ? VAR_1 :
  VAR_4;

 for (VAR_14 = VAR_12; VAR_14; VAR_14 = VAR_14->next) {
  int VAR_20 = VAR_2 +
     VAR_3 * VAR_17;

  if (VAR_17 == 0) {
   FUNC_3(&VAR_16,
           VAR_0,
           0);
   VAR_15->msg[0] = VAR_19;
   VAR_15->msg[1] = VAR_11;
  }

  VAR_15->msg[VAR_20] =
    FUNC_4(VAR_14->flag, VAR_8);
  VAR_15->msg[VAR_20 + 1] = VAR_14->tqp_index;
  VAR_15->msg[VAR_20 + 2] = FUNC_5(VAR_14->int_gl_idx,
          VAR_6,
          VAR_7);

  VAR_17++;
  if ((VAR_17 == (VAR_5 -
       VAR_2) /
       VAR_3) ||
      !VAR_14->next) {
   VAR_15->msg[2] = VAR_17;

   VAR_18 = FUNC_2(&VAR_13->hw, &VAR_16, 1);
   if (VAR_18) {
    FUNC_0(&VAR_13->pdev->dev,
     "Map TQP fail, status is %d.\n",
     VAR_18);
    return VAR_18;
   }
   VAR_17 = 0;
   FUNC_3(&VAR_16,
           VAR_0,
           0);
   VAR_15->msg[0] = VAR_19;
   VAR_15->msg[1] = VAR_11;
  }
 }

 return 0;
}
