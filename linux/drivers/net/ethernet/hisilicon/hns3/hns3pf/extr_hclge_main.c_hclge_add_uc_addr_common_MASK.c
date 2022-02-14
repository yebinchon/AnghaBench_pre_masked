
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_mac_vlan_tbl_entry_cmd {int egress_port; } ;
struct hclge_dev {unsigned char const* priv_umv_size; TYPE_1__* pdev; } ;
struct hclge_desc {int dummy; } ;
typedef int req ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned char const*,...) ;
 int FUNC_2 (int *,char*,int ,unsigned char const*) ;
 int FUNC_3 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*,int *) ;
 int FUNC_4 (struct hclge_vport*) ;
 int FUNC_5 (struct hclge_vport*,struct hclge_mac_vlan_tbl_entry_cmd*,struct hclge_desc*,int) ;
 int FUNC_6 (struct hclge_mac_vlan_tbl_entry_cmd*,unsigned char const*,int) ;
 int FUNC_7 (struct hclge_vport*,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (unsigned char const*) ;
 scalar_t__ FUNC_10 (unsigned char const*) ;
 scalar_t__ FUNC_11 (unsigned char const*) ;
 int FUNC_12 (struct hclge_mac_vlan_tbl_entry_cmd*,int ,int) ;

int FUNC_13(struct hclge_vport *VAR_5,
        const unsigned char *VAR_6)
{
 struct hclge_dev *VAR_7 = VAR_5->back;
 struct hclge_mac_vlan_tbl_entry_cmd VAR_8;
 struct hclge_desc VAR_9;
 u16 VAR_10 = 0;
 int VAR_11;


 if (FUNC_11(VAR_6) ||
     FUNC_9(VAR_6) ||
     FUNC_10(VAR_6)) {
  FUNC_1(&VAR_7->pdev->dev,
   "Set_uc mac err! invalid mac:%pM. is_zero:%d,is_br=%d,is_mul=%d\n",
    VAR_6, FUNC_11(VAR_6),
    FUNC_9(VAR_6),
    FUNC_10(VAR_6));
  return -VAR_0;
 }

 FUNC_12(&VAR_8, 0, sizeof(VAR_8));

 FUNC_8(VAR_10, VAR_3,
   VAR_4, VAR_5->vport_id);

 VAR_8.egress_port = FUNC_0(VAR_10);

 FUNC_6(&VAR_8, VAR_6, 0);





 VAR_11 = FUNC_5(VAR_5, &VAR_8, &VAR_9, 0);
 if (VAR_11 == -VAR_1) {
  if (!FUNC_4(VAR_5)) {
   VAR_11 = FUNC_3(VAR_5, &VAR_8, ((void*)0));
   if (!VAR_11)
    FUNC_7(VAR_5, 0);
   return VAR_11;
  }

  FUNC_1(&VAR_7->pdev->dev, "UC MAC table full(%u)\n",
   VAR_7->priv_umv_size);

  return -VAR_2;
 }


 if (!VAR_11) {
  FUNC_2(&VAR_7->pdev->dev, "VF %d mac(%pM) exists\n",
    VAR_5->vport_id, VAR_6);
  return 0;
 }

 FUNC_1(&VAR_7->pdev->dev,
  "PF failed to add unicast entry(%pM) in the MAC table\n",
  VAR_6);

 return VAR_11;
}
