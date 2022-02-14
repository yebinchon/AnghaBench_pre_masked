
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_mac_vlan_tbl_entry_cmd {int entry_type; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {struct hclge_mac_vlan_tbl_entry_cmd* data; } ;
typedef int req ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*,struct hclge_desc*) ;
 int FUNC_2 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_mac_vlan_tbl_entry_cmd*,unsigned char const*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (unsigned char const*) ;
 int FUNC_7 (struct hclge_mac_vlan_tbl_entry_cmd*,int ,int) ;

int FUNC_8(struct hclge_vport *VAR_3,
        const unsigned char *VAR_4)
{
 struct hclge_dev *VAR_5 = VAR_3->back;
 struct hclge_mac_vlan_tbl_entry_cmd VAR_6;
 struct hclge_desc VAR_7[3];
 int VAR_8;


 if (!FUNC_6(VAR_4)) {
  FUNC_0(&VAR_5->pdev->dev,
   "Add mc mac err! invalid mac:%pM.\n",
    VAR_4);
  return -VAR_0;
 }
 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 FUNC_5(VAR_6.entry_type, VAR_2, 0);
 FUNC_3(&VAR_6, VAR_4, 1);
 VAR_8 = FUNC_2(VAR_3, &VAR_6, VAR_7, 1);
 if (VAR_8) {

  FUNC_7(VAR_7[0].data, 0, sizeof(VAR_7[0].data));
  FUNC_7(VAR_7[1].data, 0, sizeof(VAR_7[0].data));
  FUNC_7(VAR_7[2].data, 0, sizeof(VAR_7[0].data));
 }
 VAR_8 = FUNC_4(VAR_7, VAR_3->vport_id, 0);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_3, &VAR_6, VAR_7);

 if (VAR_8 == -VAR_1)
  FUNC_0(&VAR_5->pdev->dev, "mc mac vlan table is full\n");

 return VAR_8;
}
