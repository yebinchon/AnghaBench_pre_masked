
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hclge_vlan_filter_ctrl_cmd {void* vf_id; void* vlan_fe; void* vlan_type; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, u8 VAR_2,
          u8 VAR_3, bool VAR_4, u8 VAR_5)
{
 struct hclge_vlan_filter_ctrl_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, VAR_0, 0);

 VAR_6 = (struct hclge_vlan_filter_ctrl_cmd *)VAR_7.data;
 VAR_6->vlan_type = VAR_2;
 VAR_6->vlan_fe = VAR_4 ? VAR_3 : 0;
 VAR_6->vf_id = VAR_5;

 VAR_8 = FUNC_1(&VAR_1->hw, &VAR_7, 1);
 if (VAR_8)
  FUNC_0(&VAR_1->pdev->dev, "set vlan filter fail, ret =%d.\n",
   VAR_8);

 return VAR_8;
}
