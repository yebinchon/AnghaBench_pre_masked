
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclgevf_dev {TYPE_1__* pdev; int hw; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclgevf_desc*,int) ;
 int FUNC_2 (struct hclgevf_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_2,
     bool VAR_3)
{
 struct hclge_mbx_vf_to_pf_cmd *VAR_4;
 struct hclgevf_desc VAR_5;
 int VAR_6;

 VAR_4 = (struct hclge_mbx_vf_to_pf_cmd *)VAR_5.data;

 FUNC_2(&VAR_5, VAR_0, 0);
 VAR_4->msg[0] = VAR_1;
 VAR_4->msg[1] = VAR_3 ? 1 : 0;

 VAR_6 = FUNC_1(&VAR_2->hw, &VAR_5, 1);
 if (VAR_6)
  FUNC_0(&VAR_2->pdev->dev,
   "Set promisc mode fail, status is %d.\n", VAR_6);

 return VAR_6;
}
