
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hclge_vport_vtag_rx_cfg_cmd {unsigned int vf_offset; unsigned int* vf_bitmap; int vport_vlan_cfg; } ;
struct hclge_rx_vtag_cfg {scalar_t__ vlan2_vlan_prionly; scalar_t__ vlan1_vlan_prionly; scalar_t__ strip_tag2_en; scalar_t__ strip_tag1_en; } ;
struct hclge_vport {unsigned int vport_id; struct hclge_dev* back; struct hclge_rx_vtag_cfg rxvlan_cfg; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_vport *VAR_7)
{
 struct hclge_rx_vtag_cfg *VAR_8 = &VAR_7->rxvlan_cfg;
 struct hclge_vport_vtag_rx_cfg_cmd *VAR_9;
 struct hclge_dev *VAR_10 = VAR_7->back;
 struct hclge_desc VAR_11;
 u16 VAR_12;
 int VAR_13;

 FUNC_2(&VAR_11, VAR_0, 0);

 VAR_9 = (struct hclge_vport_vtag_rx_cfg_cmd *)VAR_11.data;
 FUNC_3(VAR_9->vport_vlan_cfg, VAR_1,
        VAR_8->strip_tag1_en ? 1 : 0);
 FUNC_3(VAR_9->vport_vlan_cfg, VAR_2,
        VAR_8->strip_tag2_en ? 1 : 0);
 FUNC_3(VAR_9->vport_vlan_cfg, VAR_3,
        VAR_8->vlan1_vlan_prionly ? 1 : 0);
 FUNC_3(VAR_9->vport_vlan_cfg, VAR_4,
        VAR_8->vlan2_vlan_prionly ? 1 : 0);

 VAR_9->vf_offset = VAR_7->vport_id / VAR_6;
 VAR_12 = VAR_7->vport_id % VAR_6 /
   VAR_5;
 VAR_9->vf_bitmap[VAR_12] =
  1U << (VAR_7->vport_id % VAR_5);

 VAR_13 = FUNC_1(&VAR_10->hw, &VAR_11, 1);
 if (VAR_13)
  FUNC_0(&VAR_10->pdev->dev,
   "Send port rxvlan cfg command fail, ret =%d\n",
   VAR_13);

 return VAR_13;
}
