
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct hclge_vlan_filter_vf_cfg_cmd {int vlan_cfg; size_t* vf_bitmap; int resp_code; int vlan_id; } ;
struct hclge_dev {TYPE_1__* pdev; int vf_vlan_full; int hw; } ;
struct hclge_desc {scalar_t__ data; int flag; } ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_6, u16 VAR_7,
        bool VAR_8, u16 VAR_9,
        __be16 VAR_10)
{

 struct hclge_vlan_filter_vf_cfg_cmd *VAR_11;
 struct hclge_vlan_filter_vf_cfg_cmd *VAR_12;
 struct hclge_desc VAR_13[2];
 u8 VAR_14;
 u8 VAR_15;
 int VAR_16;




 if (FUNC_6(VAR_7, VAR_6->vf_vlan_full) && !VAR_8)
  return 0;

 FUNC_4(&VAR_13[0],
       VAR_3, 0);
 FUNC_4(&VAR_13[1],
       VAR_3, 0);

 VAR_13[0].flag |= FUNC_0(VAR_1);

 VAR_15 = VAR_7 / 8;
 VAR_14 = 1 << (VAR_7 % 8);

 VAR_11 = (struct hclge_vlan_filter_vf_cfg_cmd *)VAR_13[0].data;
 VAR_12 = (struct hclge_vlan_filter_vf_cfg_cmd *)VAR_13[1].data;

 VAR_11->vlan_id = FUNC_0(VAR_9);
 VAR_11->vlan_cfg = VAR_8;

 if (VAR_15 < 16)
  VAR_11->vf_bitmap[VAR_15] = VAR_14;
 else
  VAR_12->vf_bitmap[VAR_15 - 16] = VAR_14;

 VAR_16 = FUNC_3(&VAR_6->hw, VAR_13, 2);
 if (VAR_16) {
  FUNC_1(&VAR_6->pdev->dev,
   "Send vf vlan command fail, ret =%d.\n",
   VAR_16);
  return VAR_16;
 }

 if (!VAR_8) {

  if (!VAR_11->resp_code || VAR_11->resp_code == 1)
   return 0;

  if (VAR_11->resp_code == 2) {
   FUNC_5(VAR_7, VAR_6->vf_vlan_full);
   FUNC_2(&VAR_6->pdev->dev,
     "vf vlan table is full, vf vlan filter is disabled\n");
   return 0;
  }

  FUNC_1(&VAR_6->pdev->dev,
   "Add vf vlan filter fail, ret =%d.\n",
   VAR_11->resp_code);
 } else {

  if (!VAR_11->resp_code)
   return 0;






  if (VAR_11->resp_code == 1)
   return 0;

  FUNC_1(&VAR_6->pdev->dev,
   "Kill vf vlan filter fail, ret =%d.\n",
   VAR_11->resp_code);
 }

 return -VAR_0;
}
