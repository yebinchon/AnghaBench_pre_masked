
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_gro_status_cmd {int gro_en; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_1, bool VAR_2)
{
 struct hclge_cfg_gro_status_cmd *VAR_3;
 struct hclge_desc VAR_4;
 int VAR_5;

 if (!FUNC_4(VAR_1))
  return 0;

 FUNC_3(&VAR_4, VAR_0, 0);
 VAR_3 = (struct hclge_cfg_gro_status_cmd *)VAR_4.data;

 VAR_3->gro_en = FUNC_0(VAR_2 ? 1 : 0);

 VAR_5 = FUNC_2(&VAR_1->hw, &VAR_4, 1);
 if (VAR_5)
  FUNC_1(&VAR_1->pdev->dev,
   "GRO hardware config cmd failed, ret = %d\n", VAR_5);

 return VAR_5;
}
