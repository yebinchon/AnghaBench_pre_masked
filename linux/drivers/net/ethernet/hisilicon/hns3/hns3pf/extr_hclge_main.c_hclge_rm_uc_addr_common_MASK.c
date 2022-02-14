
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mac_vlan_tbl_entry_cmd {int entry_type; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
typedef int req ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned char const*) ;
 int FUNC_1 (struct hclge_mac_vlan_tbl_entry_cmd*,unsigned char const*,int) ;
 int FUNC_2 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*) ;
 int FUNC_3 (struct hclge_vport*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (unsigned char const*) ;
 scalar_t__ FUNC_6 (unsigned char const*) ;
 scalar_t__ FUNC_7 (unsigned char const*) ;
 int FUNC_8 (struct hclge_mac_vlan_tbl_entry_cmd*,int ,int) ;

int FUNC_9(struct hclge_vport *VAR_2,
       const unsigned char *VAR_3)
{
 struct hclge_dev *VAR_4 = VAR_2->back;
 struct hclge_mac_vlan_tbl_entry_cmd VAR_5;
 int VAR_6;


 if (FUNC_7(VAR_3) ||
     FUNC_5(VAR_3) ||
     FUNC_6(VAR_3)) {
  FUNC_0(&VAR_4->pdev->dev, "Remove mac err! invalid mac:%pM.\n",
   VAR_3);
  return -VAR_0;
 }

 FUNC_8(&VAR_5, 0, sizeof(VAR_5));
 FUNC_4(VAR_5.entry_type, VAR_1, 0);
 FUNC_1(&VAR_5, VAR_3, 0);
 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (!VAR_6)
  FUNC_3(VAR_2, 1);

 return VAR_6;
}
