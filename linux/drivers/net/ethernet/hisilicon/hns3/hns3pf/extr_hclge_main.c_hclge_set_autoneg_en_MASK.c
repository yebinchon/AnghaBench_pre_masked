
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_config_auto_neg_cmd {int cfg_an_cmd_flag; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_2, bool VAR_3)
{
 struct hclge_config_auto_neg_cmd *VAR_4;
 struct hclge_desc VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 FUNC_3(&VAR_5, VAR_1, 0);

 VAR_4 = (struct hclge_config_auto_neg_cmd *)VAR_5.data;
 if (VAR_3)
  FUNC_4(VAR_6, VAR_0, 1U);
 VAR_4->cfg_an_cmd_flag = FUNC_0(VAR_6);

 VAR_7 = FUNC_2(&VAR_2->hw, &VAR_5, 1);
 if (VAR_7)
  FUNC_1(&VAR_2->pdev->dev, "auto neg set cmd failed %d.\n",
   VAR_7);

 return VAR_7;
}
