
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_pf_to_vf_cmd {void** msg; void* msg_len; int dest_vfid; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef enum hclge_cmd_status { ____Placeholder_hclge_cmd_status } hclge_cmd_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (void**,int *,void*) ;

__attribute__((used)) static int FUNC_4(struct hclge_vport *VAR_1, u8 *VAR_2, u16 VAR_3,
         u16 VAR_4, u8 VAR_5)
{
 struct hclge_mbx_pf_to_vf_cmd *VAR_6;
 struct hclge_dev *VAR_7 = VAR_1->back;
 enum hclge_cmd_status VAR_8;
 struct hclge_desc VAR_9;

 VAR_6 = (struct hclge_mbx_pf_to_vf_cmd *)VAR_9.data;

 FUNC_2(&VAR_9, VAR_0, 0);

 VAR_6->dest_vfid = VAR_5;
 VAR_6->msg_len = VAR_3;
 VAR_6->msg[0] = VAR_4;

 FUNC_3(&VAR_6->msg[1], VAR_2, VAR_3);

 VAR_8 = FUNC_1(&VAR_7->hw, &VAR_9, 1);
 if (VAR_8)
  FUNC_0(&VAR_7->pdev->dev,
   "PF failed(=%d) to send mailbox message to VF\n",
   VAR_8);

 return VAR_8;
}
