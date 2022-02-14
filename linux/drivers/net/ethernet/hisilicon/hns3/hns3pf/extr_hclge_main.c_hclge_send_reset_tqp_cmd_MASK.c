
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hclge_reset_tqp_queue_cmd {int reset_req; int tqp_id; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_3, u16 VAR_4,
        bool VAR_5)
{
 struct hclge_reset_tqp_queue_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7, VAR_0, 0);

 VAR_6 = (struct hclge_reset_tqp_queue_cmd *)VAR_7.data;
 VAR_6->tqp_id = FUNC_0(VAR_4 & VAR_1);
 if (VAR_5)
  FUNC_4(VAR_6->reset_req, VAR_2, 1U);

 VAR_8 = FUNC_2(&VAR_3->hw, &VAR_7, 1);
 if (VAR_8) {
  FUNC_1(&VAR_3->pdev->dev,
   "Send tqp reset cmd error, status =%d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
