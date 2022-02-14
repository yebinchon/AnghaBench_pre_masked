
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hclge_vport_vtag_tx_cfg_cmd {unsigned int vf_offset; unsigned int* vf_bitmap; int vport_vlan_cfg; void* def_vlan_tag2; void* def_vlan_tag1; } ;
struct hclge_tx_vtag_cfg {scalar_t__ insert_tag2_en; scalar_t__ insert_tag1_en; scalar_t__ accept_untag2; scalar_t__ accept_tag2; scalar_t__ accept_untag1; scalar_t__ accept_tag1; int default_tag2; int default_tag1; } ;
struct hclge_vport {unsigned int vport_id; struct hclge_dev* back; struct hclge_tx_vtag_cfg txvlan_cfg; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hclge_vport *VAR_10)
{
 struct hclge_tx_vtag_cfg *VAR_11 = &VAR_10->txvlan_cfg;
 struct hclge_vport_vtag_tx_cfg_cmd *VAR_12;
 struct hclge_dev *VAR_13 = VAR_10->back;
 struct hclge_desc VAR_14;
 u16 VAR_15;
 int VAR_16;

 FUNC_3(&VAR_14, VAR_5, 0);

 VAR_12 = (struct hclge_vport_vtag_tx_cfg_cmd *)VAR_14.data;
 VAR_12->def_vlan_tag1 = FUNC_0(VAR_11->default_tag1);
 VAR_12->def_vlan_tag2 = FUNC_0(VAR_11->default_tag2);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_0,
        VAR_11->accept_tag1 ? 1 : 0);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_2,
        VAR_11->accept_untag1 ? 1 : 0);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_1,
        VAR_11->accept_tag2 ? 1 : 0);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_3,
        VAR_11->accept_untag2 ? 1 : 0);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_6,
        VAR_11->insert_tag1_en ? 1 : 0);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_7,
        VAR_11->insert_tag2_en ? 1 : 0);
 FUNC_4(VAR_12->vport_vlan_cfg, VAR_4, 0);

 VAR_12->vf_offset = VAR_10->vport_id / VAR_9;
 VAR_15 = VAR_10->vport_id % VAR_9 /
   VAR_8;
 VAR_12->vf_bitmap[VAR_15] =
  1U << (VAR_10->vport_id % VAR_8);

 VAR_16 = FUNC_2(&VAR_13->hw, &VAR_14, 1);
 if (VAR_16)
  FUNC_1(&VAR_13->pdev->dev,
   "Send port txvlan cfg command fail, ret =%d\n",
   VAR_16);

 return VAR_16;
}
