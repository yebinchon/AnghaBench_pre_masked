
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
typedef enum hclge_mac_vlan_tbl_opcode { ____Placeholder_hclge_mac_vlan_tbl_opcode } hclge_mac_vlan_tbl_opcode ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_9,
      u16 VAR_10, u8 VAR_11,
      enum hclge_mac_vlan_tbl_opcode VAR_12)
{
 struct hclge_dev *VAR_13 = VAR_9->back;

 if (VAR_10) {
  FUNC_1(&VAR_13->pdev->dev,
   "cmdq execute failed for get_mac_vlan_cmd_status,status=%d.\n",
   VAR_10);
  return -VAR_1;
 }

 if (VAR_12 == VAR_6) {
  if ((!VAR_11) || (VAR_11 == 1)) {
   return 0;
  } else if (VAR_11 == VAR_5) {
   FUNC_1(&VAR_13->pdev->dev,
    "add mac addr failed for uc_overflow.\n");
   return -VAR_3;
  } else if (VAR_11 == VAR_4) {
   FUNC_1(&VAR_13->pdev->dev,
    "add mac addr failed for mc_overflow.\n");
   return -VAR_3;
  }

  FUNC_1(&VAR_13->pdev->dev,
   "add mac addr failed for undefined, code=%u.\n",
   VAR_11);
  return -VAR_1;
 } else if (VAR_12 == VAR_8) {
  if (!VAR_11) {
   return 0;
  } else if (VAR_11 == 1) {
   FUNC_0(&VAR_13->pdev->dev,
    "remove mac addr failed for miss.\n");
   return -VAR_2;
  }

  FUNC_1(&VAR_13->pdev->dev,
   "remove mac addr failed for undefined, code=%u.\n",
   VAR_11);
  return -VAR_1;
 } else if (VAR_12 == VAR_7) {
  if (!VAR_11) {
   return 0;
  } else if (VAR_11 == 1) {
   FUNC_0(&VAR_13->pdev->dev,
    "lookup mac addr failed for miss.\n");
   return -VAR_2;
  }

  FUNC_1(&VAR_13->pdev->dev,
   "lookup mac addr failed for undefined, code=%u.\n",
   VAR_11);
  return -VAR_1;
 }

 FUNC_1(&VAR_13->pdev->dev,
  "unknown opcode for get_mac_vlan_cmd_status, opcode=%d.\n", VAR_12);

 return -VAR_0;
}
