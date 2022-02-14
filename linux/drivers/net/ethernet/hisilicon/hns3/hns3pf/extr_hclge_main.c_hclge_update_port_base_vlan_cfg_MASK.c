
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hnae3_handle {scalar_t__ port_base_vlan_state; } ;
struct hclge_vlan_info {int vlan_proto; int qos; int vlan_tag; } ;
struct TYPE_2__ {struct hclge_vlan_info vlan_info; scalar_t__ state; } ;
struct hclge_vport {TYPE_1__ port_base_vlan_cfg; int vport_id; struct hclge_dev* back; struct hnae3_handle nic; } ;
struct hclge_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hclge_dev*,int ,int ,int ,int) ;
 int FUNC_1 (struct hclge_vport*,scalar_t__,struct hclge_vlan_info*,struct hclge_vlan_info*) ;
 int FUNC_2 (struct hclge_vport*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct hclge_vport *VAR_3, u16 VAR_4,
        struct hclge_vlan_info *VAR_5)
{
 struct hnae3_handle *VAR_6 = &VAR_3->nic;
 struct hclge_vlan_info *VAR_7;
 struct hclge_dev *VAR_8 = VAR_3->back;
 int VAR_9;

 VAR_7 = &VAR_3->port_base_vlan_cfg.vlan_info;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5->vlan_tag);
 if (VAR_9)
  return VAR_9;

 if (VAR_4 == VAR_2) {

  VAR_9 = FUNC_0(VAR_8,
            FUNC_3(VAR_5->vlan_proto),
            VAR_3->vport_id,
            VAR_5->vlan_tag,
            0);
  if (VAR_9)
   return VAR_9;


  VAR_9 = FUNC_0(VAR_8,
            FUNC_3(VAR_7->vlan_proto),
            VAR_3->vport_id,
            VAR_7->vlan_tag,
            1);
  if (VAR_9)
   return VAR_9;

  goto update;
 }

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5,
            VAR_7);
 if (VAR_9)
  return VAR_9;


 VAR_3->port_base_vlan_cfg.state = VAR_4;
 if (VAR_4 == VAR_0)
  VAR_6->port_base_vlan_state = VAR_0;
 else
  VAR_6->port_base_vlan_state = VAR_1;

update:
 VAR_3->port_base_vlan_cfg.vlan_info.vlan_tag = VAR_5->vlan_tag;
 VAR_3->port_base_vlan_cfg.vlan_info.qos = VAR_5->qos;
 VAR_3->port_base_vlan_cfg.vlan_info.vlan_proto = VAR_5->vlan_proto;

 return 0;
}
