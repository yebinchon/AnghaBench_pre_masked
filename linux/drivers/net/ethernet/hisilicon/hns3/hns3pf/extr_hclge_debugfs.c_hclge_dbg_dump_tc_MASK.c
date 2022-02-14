
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_ets_tc_weight_cmd {int * tc_weight; int weight_offset; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_dev*,int ,int,char*,char*,char*) ;
 int FUNC_5 (struct hclge_dev*) ;

__attribute__((used)) static void FUNC_6(struct hclge_dev *VAR_2)
{
 struct hclge_ets_tc_weight_cmd *VAR_3;
 struct hclge_desc VAR_4;
 int VAR_5, VAR_6;

 if (!FUNC_5(VAR_2)) {
  FUNC_1(&VAR_2->pdev->dev,
    "Only DCB-supported dev supports tc\n");
  return;
 }

 FUNC_3(&VAR_4, VAR_0, 1);

 VAR_6 = FUNC_2(&VAR_2->hw, &VAR_4, 1);
 if (VAR_6) {
  FUNC_0(&VAR_2->pdev->dev, "dump tc fail, ret = %d\n", VAR_6);
  return;
 }

 VAR_3 = (struct hclge_ets_tc_weight_cmd *)VAR_4.data;

 FUNC_1(&VAR_2->pdev->dev, "dump tc\n");
 FUNC_1(&VAR_2->pdev->dev, "weight_offset: %u\n",
   VAR_3->weight_offset);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_4(VAR_2, VAR_3->tc_weight[VAR_5], VAR_5,
          "tc", "no sp mode", "sp mode");
}
