
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_promisc_param {int enable; int vf_id; } ;
struct hclge_promisc_cfg_cmd {int flag; int vf_id; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

int FUNC_3(struct hclge_dev *VAR_4,
          struct hclge_promisc_param *VAR_5)
{
 struct hclge_promisc_cfg_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, VAR_0, 0);

 VAR_6 = (struct hclge_promisc_cfg_cmd *)VAR_7.data;
 VAR_6->vf_id = VAR_5->vf_id;






 VAR_6->flag = (VAR_5->enable << VAR_1) |
  VAR_3 | VAR_2;

 VAR_8 = FUNC_1(&VAR_4->hw, &VAR_7, 1);
 if (VAR_8)
  FUNC_0(&VAR_4->pdev->dev,
   "Set promisc mode fail, status is %d.\n", VAR_8);

 return VAR_8;
}
