
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
struct hclge_desc {int retval; int * data; int flag; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_desc*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (struct hclge_vport*,int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct hclge_mac_vlan_tbl_entry_cmd*,int) ;

__attribute__((used)) static int FUNC_9(struct hclge_vport *VAR_3,
      struct hclge_mac_vlan_tbl_entry_cmd *VAR_4,
      struct hclge_desc *VAR_5)
{
 struct hclge_dev *VAR_6 = VAR_3->back;
 int VAR_7;
 u8 VAR_8;
 u16 VAR_9;
 int VAR_10;

 if (!VAR_5) {
  struct hclge_desc VAR_11;

  FUNC_4(&VAR_11,
        VAR_2,
        0);
  FUNC_8(VAR_11.data, VAR_4,
         sizeof(struct hclge_mac_vlan_tbl_entry_cmd));
  VAR_10 = FUNC_3(&VAR_6->hw, &VAR_11, 1);
  VAR_8 = (FUNC_7(VAR_11.data[0]) >> 8) & 0xff;
  VAR_9 = FUNC_6(VAR_11.retval);

  VAR_7 = FUNC_5(VAR_3, VAR_9,
          VAR_8,
          VAR_1);
 } else {
  FUNC_2(&VAR_5[0], 0);
  VAR_5[0].flag |= FUNC_0(VAR_0);
  FUNC_2(&VAR_5[1], 0);
  VAR_5[1].flag |= FUNC_0(VAR_0);
  FUNC_2(&VAR_5[2], 0);
  VAR_5[2].flag &= FUNC_0(~VAR_0);
  FUNC_8(VAR_5[0].data, VAR_4,
         sizeof(struct hclge_mac_vlan_tbl_entry_cmd));
  VAR_10 = FUNC_3(&VAR_6->hw, VAR_5, 3);
  VAR_8 = (FUNC_7(VAR_5[0].data[0]) >> 8) & 0xff;
  VAR_9 = FUNC_6(VAR_5[0].retval);

  VAR_7 = FUNC_5(VAR_3, VAR_9,
          VAR_8,
          VAR_1);
 }

 if (VAR_10) {
  FUNC_1(&VAR_6->pdev->dev,
   "add mac addr failed for cmd_send, ret =%d.\n",
   VAR_10);
  return VAR_10;
 }

 return VAR_7;
}
