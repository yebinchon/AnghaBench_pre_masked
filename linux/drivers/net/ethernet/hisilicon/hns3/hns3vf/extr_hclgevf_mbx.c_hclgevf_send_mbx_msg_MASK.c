
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct TYPE_3__ {int mbx_mutex; } ;
struct hclgevf_dev {TYPE_2__* pdev; int hw; TYPE_1__ mbx_resp; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct hclge_mbx_vf_to_pf_cmd {void** msg; int mbx_need_resp; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,struct hclgevf_desc*,int) ;
 int FUNC_2 (struct hclgevf_desc*,int ,int) ;
 int FUNC_3 (struct hclgevf_dev*,void*,void*,int*,void*) ;
 int FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (void**,int const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct hclgevf_dev *VAR_4, u16 VAR_5, u16 VAR_6,
    const u8 *VAR_7, u8 VAR_8, bool VAR_9,
    u8 *VAR_10, u16 VAR_11)
{
 struct hclge_mbx_vf_to_pf_cmd *VAR_12;
 struct hclgevf_desc VAR_13;
 int VAR_14;

 VAR_12 = (struct hclge_mbx_vf_to_pf_cmd *)VAR_13.data;


 if (VAR_8 > (VAR_2 - 2)) {
  FUNC_0(&VAR_4->pdev->dev,
   "VF send mbx msg fail, msg len %d exceeds max len %d\n",
   VAR_8, VAR_2);
  return -VAR_0;
 }

 FUNC_2(&VAR_13, VAR_1, 0);
 VAR_12->mbx_need_resp |= VAR_9 ? VAR_3 :
       ~VAR_3;
 VAR_12->msg[0] = VAR_5;
 VAR_12->msg[1] = VAR_6;
 if (VAR_7)
  FUNC_5(&VAR_12->msg[2], VAR_7, VAR_8);


 if (VAR_9) {
  FUNC_6(&VAR_4->mbx_resp.mbx_mutex);
  FUNC_4(VAR_4);
  VAR_14 = FUNC_1(&VAR_4->hw, &VAR_13, 1);
  if (VAR_14) {
   FUNC_0(&VAR_4->pdev->dev,
    "VF failed(=%d) to send mbx message to PF\n",
    VAR_14);
   FUNC_7(&VAR_4->mbx_resp.mbx_mutex);
   return VAR_14;
  }

  VAR_14 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_10,
           VAR_11);
  FUNC_7(&VAR_4->mbx_resp.mbx_mutex);
 } else {

  VAR_14 = FUNC_1(&VAR_4->hw, &VAR_13, 1);
  if (VAR_14) {
   FUNC_0(&VAR_4->pdev->dev,
    "VF failed(=%d) to send mbx message to PF\n",
    VAR_14);
   return VAR_14;
  }
 }

 return VAR_14;
}
