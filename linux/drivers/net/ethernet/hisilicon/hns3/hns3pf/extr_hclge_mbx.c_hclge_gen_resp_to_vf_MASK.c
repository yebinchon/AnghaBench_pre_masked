
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; int msg_len; int mbx_src_vfid; } ;
struct hclge_mbx_pf_to_vf_cmd {int* msg; int msg_len; int dest_vfid; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef enum hclge_cmd_status { ____Placeholder_hclge_cmd_status } hclge_cmd_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_vport *VAR_3,
    struct hclge_mbx_vf_to_pf_cmd *VAR_4,
    int VAR_5,
    u8 *VAR_6, u16 VAR_7)
{
 struct hclge_mbx_pf_to_vf_cmd *VAR_8;
 struct hclge_dev *VAR_9 = VAR_3->back;
 enum hclge_cmd_status VAR_10;
 struct hclge_desc VAR_11;

 VAR_8 = (struct hclge_mbx_pf_to_vf_cmd *)VAR_11.data;

 if (VAR_7 > VAR_1) {
  FUNC_0(&VAR_9->pdev->dev,
   "PF fail to gen resp to VF len %d exceeds max len %d\n",
   VAR_7,
   VAR_1);



  VAR_7 = VAR_1;
 }

 FUNC_2(&VAR_11, VAR_0, 0);

 VAR_8->dest_vfid = VAR_4->mbx_src_vfid;
 VAR_8->msg_len = VAR_4->msg_len;

 VAR_8->msg[0] = VAR_2;
 VAR_8->msg[1] = VAR_4->msg[0];
 VAR_8->msg[2] = VAR_4->msg[1];
 VAR_8->msg[3] = (VAR_5 == 0) ? 0 : 1;

 if (VAR_6 && VAR_7 > 0)
  FUNC_3(&VAR_8->msg[4], VAR_6, VAR_7);

 VAR_10 = FUNC_1(&VAR_9->hw, &VAR_11, 1);
 if (VAR_10)
  FUNC_0(&VAR_9->pdev->dev,
   "PF failed(=%d) to send response to VF\n", VAR_10);

 return VAR_10;
}
