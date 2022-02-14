
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_mac_vlan_tbl_entry_cmd {int entry_type; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {int dummy; } ;
typedef int req ;
typedef enum hclge_cmd_status { ____Placeholder_hclge_cmd_status } hclge_cmd_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned char const*) ;
 int FUNC_1 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*,struct hclge_desc*) ;
 scalar_t__ FUNC_2 (struct hclge_desc*) ;
 int FUNC_3 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_mac_vlan_tbl_entry_cmd*,unsigned char const*,int) ;
 int FUNC_5 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*) ;
 int FUNC_6 (struct hclge_desc*,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (unsigned char const*) ;
 int FUNC_9 (struct hclge_mac_vlan_tbl_entry_cmd*,int ,int) ;

int FUNC_10(struct hclge_vport *VAR_2,
       const unsigned char *VAR_3)
{
 struct hclge_dev *VAR_4 = VAR_2->back;
 struct hclge_mac_vlan_tbl_entry_cmd VAR_5;
 enum hclge_cmd_status VAR_6;
 struct hclge_desc VAR_7[3];


 if (!FUNC_8(VAR_3)) {
  FUNC_0(&VAR_4->pdev->dev,
   "Remove mc mac err! invalid mac:%pM.\n",
    VAR_3);
  return -VAR_0;
 }

 FUNC_9(&VAR_5, 0, sizeof(VAR_5));
 FUNC_7(VAR_5.entry_type, VAR_1, 0);
 FUNC_4(&VAR_5, VAR_3, 1);
 VAR_6 = FUNC_3(VAR_2, &VAR_5, VAR_7, 1);
 if (!VAR_6) {

  VAR_6 = FUNC_6(VAR_7, VAR_2->vport_id, 1);
  if (VAR_6)
   return VAR_6;

  if (FUNC_2(VAR_7))

   VAR_6 = FUNC_5(VAR_2, &VAR_5);
  else

   VAR_6 = FUNC_1(VAR_2, &VAR_5, VAR_7);

 } else {






  VAR_6 = 0;
 }

 return VAR_6;
}
