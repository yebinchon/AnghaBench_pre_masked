
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_sfp_info_cmd {int active_fec; int autoneg_ability; int autoneg; scalar_t__ speed_ability; scalar_t__ module_type; scalar_t__ speed; void* query_type; } ;
struct hclge_mac {void* speed_type; int fec_mode; int support_autoneg; int autoneg; void* speed_ability; void* module_type; void* speed; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 void* FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_4, struct hclge_mac *VAR_5)
{
 struct hclge_sfp_info_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;

 FUNC_4(&VAR_7, VAR_1, 1);
 VAR_6 = (struct hclge_sfp_info_cmd *)VAR_7.data;

 VAR_6->query_type = VAR_2;

 VAR_8 = FUNC_3(&VAR_4->hw, &VAR_7, 1);
 if (VAR_8 == -VAR_0) {
  FUNC_2(&VAR_4->pdev->dev,
    "IMP does not support get SFP info %d\n", VAR_8);
  return VAR_8;
 } else if (VAR_8) {
  FUNC_1(&VAR_4->pdev->dev, "get sfp info failed %d\n", VAR_8);
  return VAR_8;
 }

 VAR_5->speed = FUNC_5(VAR_6->speed);



 if (VAR_6->speed_ability) {
  VAR_5->module_type = FUNC_5(VAR_6->module_type);
  VAR_5->speed_ability = FUNC_5(VAR_6->speed_ability);
  VAR_5->autoneg = VAR_6->autoneg;
  VAR_5->support_autoneg = VAR_6->autoneg_ability;
  VAR_5->speed_type = VAR_2;
  if (!VAR_6->active_fec)
   VAR_5->fec_mode = 0;
  else
   VAR_5->fec_mode = FUNC_0(VAR_6->active_fec);
 } else {
  VAR_5->speed_type = VAR_3;
 }

 return 0;
}
