
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_tx_vlan_type_cfg_cmd {void* in_vlan_type; void* ot_vlan_type; } ;
struct hclge_rx_vlan_type_cfg_cmd {void* in_sec_vlan_type; void* in_fst_vlan_type; void* ot_sec_vlan_type; void* ot_fst_vlan_type; } ;
struct TYPE_3__ {int tx_in_vlan_type; int tx_ot_vlan_type; int rx_in_sec_vlan_type; int rx_in_fst_vlan_type; int rx_ot_sec_vlan_type; int rx_ot_fst_vlan_type; } ;
struct hclge_dev {TYPE_2__* pdev; int hw; TYPE_1__ vlan_type_cfg; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_2)
{
 struct hclge_rx_vlan_type_cfg_cmd *VAR_3;
 struct hclge_tx_vlan_type_cfg_cmd *VAR_4;
 struct hclge_desc VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, VAR_1, 0);
 VAR_3 = (struct hclge_rx_vlan_type_cfg_cmd *)VAR_5.data;
 VAR_3->ot_fst_vlan_type =
  FUNC_0(VAR_2->vlan_type_cfg.rx_ot_fst_vlan_type);
 VAR_3->ot_sec_vlan_type =
  FUNC_0(VAR_2->vlan_type_cfg.rx_ot_sec_vlan_type);
 VAR_3->in_fst_vlan_type =
  FUNC_0(VAR_2->vlan_type_cfg.rx_in_fst_vlan_type);
 VAR_3->in_sec_vlan_type =
  FUNC_0(VAR_2->vlan_type_cfg.rx_in_sec_vlan_type);

 VAR_6 = FUNC_2(&VAR_2->hw, &VAR_5, 1);
 if (VAR_6) {
  FUNC_1(&VAR_2->pdev->dev,
   "Send rxvlan protocol type command fail, ret =%d\n",
   VAR_6);
  return VAR_6;
 }

 FUNC_3(&VAR_5, VAR_0, 0);

 VAR_4 = (struct hclge_tx_vlan_type_cfg_cmd *)VAR_5.data;
 VAR_4->ot_vlan_type = FUNC_0(VAR_2->vlan_type_cfg.tx_ot_vlan_type);
 VAR_4->in_vlan_type = FUNC_0(VAR_2->vlan_type_cfg.tx_in_vlan_type);

 VAR_6 = FUNC_2(&VAR_2->hw, &VAR_5, 1);
 if (VAR_6)
  FUNC_1(&VAR_2->pdev->dev,
   "Send txvlan protocol type command fail, ret =%d\n",
   VAR_6);

 return VAR_6;
}
