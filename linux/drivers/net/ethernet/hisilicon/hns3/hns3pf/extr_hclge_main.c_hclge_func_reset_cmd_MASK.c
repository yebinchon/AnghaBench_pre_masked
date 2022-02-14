
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_reset_cmd {int fun_reset_vfid; int mac_func_reset; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct hclge_dev *VAR_2, int VAR_3)
{
 struct hclge_desc VAR_4;
 struct hclge_reset_cmd *VAR_5 = (struct hclge_reset_cmd *)VAR_4.data;
 int VAR_6;

 FUNC_2(&VAR_4, VAR_1, 0);
 FUNC_3(VAR_5->mac_func_reset, VAR_0, 1);
 VAR_5->fun_reset_vfid = VAR_3;

 VAR_6 = FUNC_1(&VAR_2->hw, &VAR_4, 1);
 if (VAR_6)
  FUNC_0(&VAR_2->pdev->dev,
   "send function reset cmd fail, status =%d\n", VAR_6);

 return VAR_6;
}
