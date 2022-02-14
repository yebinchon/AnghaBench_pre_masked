
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct hclge_mac_vlan_switch_cmd {void* param_mask; void* switch_param; int func_id; int roce_sel; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_3, int VAR_4,
         u8 VAR_5, u8 VAR_6)
{
 struct hclge_mac_vlan_switch_cmd *VAR_7;
 struct hclge_desc VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_2, 0, VAR_4, 0);
 VAR_7 = (struct hclge_mac_vlan_switch_cmd *)VAR_8.data;
 FUNC_3(&VAR_8, VAR_1,
       0);
 VAR_7->roce_sel = VAR_0;
 VAR_7->func_id = FUNC_0(VAR_9);
 VAR_7->switch_param = VAR_5;
 VAR_7->param_mask = VAR_6;

 VAR_10 = FUNC_2(&VAR_3->hw, &VAR_8, 1);
 if (VAR_10)
  FUNC_1(&VAR_3->pdev->dev,
   "set mac vlan switch parameter fail, ret = %d\n", VAR_10);
 return VAR_10;
}
