
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct hclge_vlan_filter_pf_cfg_cmd {size_t vlan_offset; int vlan_cfg; size_t* vlan_offset_bitmap; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, __be16 VAR_2,
          u16 VAR_3, bool VAR_4)
{
 struct hclge_vlan_filter_pf_cfg_cmd *VAR_5;
 struct hclge_desc VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 int VAR_10;

 FUNC_2(&VAR_6, VAR_0, 0);

 VAR_9 = VAR_3 / 160;
 VAR_8 = (VAR_3 % 160) / 8;
 VAR_7 = 1 << (VAR_3 % 8);

 VAR_5 = (struct hclge_vlan_filter_pf_cfg_cmd *)VAR_6.data;
 VAR_5->vlan_offset = VAR_9;
 VAR_5->vlan_cfg = VAR_4;
 VAR_5->vlan_offset_bitmap[VAR_8] = VAR_7;

 VAR_10 = FUNC_1(&VAR_1->hw, &VAR_6, 1);
 if (VAR_10)
  FUNC_0(&VAR_1->pdev->dev,
   "port vlan command, send fail, ret =%d.\n", VAR_10);
 return VAR_10;
}
