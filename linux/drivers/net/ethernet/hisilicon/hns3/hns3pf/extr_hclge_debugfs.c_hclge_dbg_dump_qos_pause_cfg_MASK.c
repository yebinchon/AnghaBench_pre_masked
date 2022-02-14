
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_pause_param_cmd {int pause_trans_time; int pause_trans_gap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_1)
{
 struct hclge_cfg_pause_param_cmd *VAR_2;
 struct hclge_desc VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, VAR_0, 1);

 VAR_4 = FUNC_2(&VAR_1->hw, &VAR_3, 1);
 if (VAR_4) {
  FUNC_0(&VAR_1->pdev->dev, "dump checksum fail, ret = %d\n",
   VAR_4);
  return;
 }

 VAR_2 = (struct hclge_cfg_pause_param_cmd *)VAR_3.data;
 FUNC_1(&VAR_1->pdev->dev, "dump qos pause cfg\n");
 FUNC_1(&VAR_1->pdev->dev, "pause_trans_gap: 0x%x\n",
   VAR_2->pause_trans_gap);
 FUNC_1(&VAR_1->pdev->dev, "pause_trans_time: 0x%x\n",
   VAR_2->pause_trans_time);
}
