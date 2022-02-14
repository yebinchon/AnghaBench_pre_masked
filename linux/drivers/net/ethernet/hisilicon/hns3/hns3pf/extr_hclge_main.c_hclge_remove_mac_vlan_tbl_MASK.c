
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mac_vlan_tbl_entry_cmd {int dummy; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int retval; int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (struct hclge_vport*,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct hclge_mac_vlan_tbl_entry_cmd*,int) ;

__attribute__((used)) static int FUNC_7(struct hclge_vport *VAR_2,
         struct hclge_mac_vlan_tbl_entry_cmd *VAR_3)
{
 struct hclge_dev *VAR_4 = VAR_2->back;
 struct hclge_desc VAR_5;
 u8 VAR_6;
 u16 VAR_7;
 int VAR_8;

 FUNC_2(&VAR_5, VAR_1, 0);

 FUNC_6(VAR_5.data, VAR_3, sizeof(struct hclge_mac_vlan_tbl_entry_cmd));

 VAR_8 = FUNC_1(&VAR_4->hw, &VAR_5, 1);
 if (VAR_8) {
  FUNC_0(&VAR_4->pdev->dev,
   "del mac addr failed for cmd_send, ret =%d.\n",
   VAR_8);
  return VAR_8;
 }
 VAR_6 = (FUNC_5(VAR_5.data[0]) >> 8) & 0xff;
 VAR_7 = FUNC_4(VAR_5.retval);

 return FUNC_3(VAR_2, VAR_7, VAR_6,
          VAR_0);
}
