
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct hnae3_handle {int netdev_flags; } ;
struct TYPE_7__ {int vlan_tag; } ;
struct TYPE_8__ {int state; TYPE_3__ vlan_info; } ;
struct hclge_vport {TYPE_4__ port_base_vlan_cfg; int vport_id; struct hnae3_handle nic; } ;
struct TYPE_6__ {void* tx_in_vlan_type; void* tx_ot_vlan_type; void* rx_ot_sec_vlan_type; void* rx_ot_fst_vlan_type; void* rx_in_sec_vlan_type; void* rx_in_fst_vlan_type; } ;
struct hclge_dev {int num_alloc_vport; struct hclge_vport* vport; TYPE_2__ vlan_type_cfg; TYPE_1__* pdev; } ;
struct TYPE_5__ {int revision; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hnae3_handle*,int ,int ,int) ;
 int FUNC_1 (struct hclge_dev*,int ,int ,int,int ) ;
 int FUNC_2 (struct hclge_dev*) ;
 int FUNC_3 (struct hclge_vport*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_8)
{


 struct hnae3_handle *VAR_9 = &VAR_8->vport[0].nic;
 struct hclge_vport *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_8->pdev->revision >= 0x21) {

  for (VAR_12 = 0; VAR_12 < VAR_8->num_alloc_vport; VAR_12++) {
   VAR_10 = &VAR_8->vport[VAR_12];
   VAR_11 = FUNC_1(VAR_8,
        VAR_6,
        VAR_2,
        1,
        VAR_10->vport_id);
   if (VAR_11)
    return VAR_11;
  }

  VAR_11 = FUNC_1(VAR_8, VAR_5,
       VAR_4, 1,
       0);
  if (VAR_11)
   return VAR_11;
 } else {
  VAR_11 = FUNC_1(VAR_8, VAR_6,
       VAR_3,
       1, 0);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9->netdev_flags |= VAR_7;

 VAR_8->vlan_type_cfg.rx_in_fst_vlan_type = 0x8100;
 VAR_8->vlan_type_cfg.rx_in_sec_vlan_type = 0x8100;
 VAR_8->vlan_type_cfg.rx_ot_fst_vlan_type = 0x8100;
 VAR_8->vlan_type_cfg.rx_ot_sec_vlan_type = 0x8100;
 VAR_8->vlan_type_cfg.tx_ot_vlan_type = 0x8100;
 VAR_8->vlan_type_cfg.tx_in_vlan_type = 0x8100;

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11)
  return VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_8->num_alloc_vport; VAR_12++) {
  u16 VAR_13;

  VAR_10 = &VAR_8->vport[VAR_12];
  VAR_13 = VAR_10->port_base_vlan_cfg.vlan_info.vlan_tag;

  VAR_11 = FUNC_3(VAR_10,
          VAR_10->port_base_vlan_cfg.state,
          VAR_13);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_0(VAR_9, FUNC_4(VAR_0), 0, 0);
}
