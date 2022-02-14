
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_mac_ethertype_idx_rd_cmd {int index; int* mac_addr; int flags; int ethter_type; int vlan_tag; int i_port_bitmap; int i_port_direction; int egress_port; int egress_queue; int resp_code; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int data; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int,char*,int,int,int,int,int,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void FUNC_9(struct hclge_dev *VAR_11)
{
 struct hclge_mac_ethertype_idx_rd_cmd *VAR_12;
 char VAR_13[VAR_0];
 struct hclge_desc VAR_14;
 int VAR_15, VAR_16;

 FUNC_2(&VAR_11->pdev->dev, "mng tab:\n");
 FUNC_5(VAR_13, 0, VAR_0);
 FUNC_8(VAR_13,
  "entry|mac_addr         |mask|ether|mask|vlan|mask",
  VAR_0 - 1);
 FUNC_8(VAR_13 + FUNC_7(VAR_13),
  "|i_map|i_dir|e_type|pf_id|vf_id|q_id|drop\n",
  VAR_0 - FUNC_7(VAR_13) - 1);

 FUNC_2(&VAR_11->pdev->dev, "%s", VAR_13);

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  FUNC_4(&VAR_14, VAR_10,
        1);
  VAR_12 = (struct hclge_mac_ethertype_idx_rd_cmd *)&VAR_14.data;
  VAR_12->index = FUNC_0(VAR_16);

  VAR_15 = FUNC_3(&VAR_11->hw, &VAR_14, 1);
  if (VAR_15) {
   FUNC_1(&VAR_11->pdev->dev,
    "call hclge_cmd_send fail, ret = %d\n", VAR_15);
   return;
  }

  if (!VAR_12->resp_code)
   continue;

  FUNC_5(VAR_13, 0, VAR_0);
  FUNC_6(VAR_13, VAR_0,
    "%02u   |%02x:%02x:%02x:%02x:%02x:%02x|",
    VAR_12->index, VAR_12->mac_addr[0], VAR_12->mac_addr[1],
    VAR_12->mac_addr[2], VAR_12->mac_addr[3],
    VAR_12->mac_addr[4], VAR_12->mac_addr[5]);

  FUNC_6(VAR_13 + FUNC_7(VAR_13),
    VAR_0 - FUNC_7(VAR_13),
    "%x   |%04x |%x   |%04x|%x   |%02x   |%02x   |",
    !!(VAR_12->flags & VAR_4),
    VAR_12->ethter_type,
    !!(VAR_12->flags & VAR_2),
    VAR_12->vlan_tag & VAR_9,
    !!(VAR_12->flags & VAR_8),
    VAR_12->i_port_bitmap, VAR_12->i_port_direction);

  FUNC_6(VAR_13 + FUNC_7(VAR_13),
    VAR_0 - FUNC_7(VAR_13),
    "%d     |%d    |%02d   |%04d|%x\n",
    !!(VAR_12->egress_port & VAR_3),
    VAR_12->egress_port & VAR_5,
    (VAR_12->egress_port >> 3) & VAR_7,
    VAR_12->egress_queue,
    !!(VAR_12->egress_port & VAR_1));

  FUNC_2(&VAR_11->pdev->dev, "%s", VAR_13);
 }
}
