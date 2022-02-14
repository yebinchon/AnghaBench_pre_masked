
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_sfp_info_cmd {int speed; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_2, u32 *VAR_3)
{
 struct hclge_sfp_info_cmd *VAR_4;
 struct hclge_desc VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, VAR_1, 1);
 VAR_4 = (struct hclge_sfp_info_cmd *)VAR_5.data;
 VAR_6 = FUNC_2(&VAR_2->hw, &VAR_5, 1);
 if (VAR_6 == -VAR_0) {
  FUNC_1(&VAR_2->pdev->dev,
    "IMP do not support get SFP speed %d\n", VAR_6);
  return VAR_6;
 } else if (VAR_6) {
  FUNC_0(&VAR_2->pdev->dev, "get sfp speed failed %d\n", VAR_6);
  return VAR_6;
 }

 *VAR_3 = FUNC_4(VAR_4->speed);

 return 0;
}
