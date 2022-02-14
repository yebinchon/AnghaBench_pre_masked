
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclgevf_dev {TYPE_1__* pdev; int hw; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct hclgevf_cfg_com_tqp_queue_cmd {unsigned int enable; void* stream_id; void* tqp_id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclgevf_desc*,int) ;
 int FUNC_3 (struct hclgevf_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclgevf_dev *VAR_3, unsigned int VAR_4,
         int VAR_5, bool VAR_6)
{
 struct hclgevf_cfg_com_tqp_queue_cmd *VAR_7;
 struct hclgevf_desc VAR_8;
 int VAR_9;

 VAR_7 = (struct hclgevf_cfg_com_tqp_queue_cmd *)VAR_8.data;

 FUNC_3(&VAR_8, VAR_0,
         0);
 VAR_7->tqp_id = FUNC_0(VAR_4 & VAR_1);
 VAR_7->stream_id = FUNC_0(VAR_5);
 if (VAR_6)
  VAR_7->enable |= 1U << VAR_2;

 VAR_9 = FUNC_2(&VAR_3->hw, &VAR_8, 1);
 if (VAR_9)
  FUNC_1(&VAR_3->pdev->dev,
   "TQP enable fail, status =%d.\n", VAR_9);

 return VAR_9;
}
