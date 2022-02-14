
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int vlan_tag; } ;
struct TYPE_4__ {TYPE_1__ vlan_info; } ;
struct hclge_vport {TYPE_2__ port_base_vlan_cfg; } ;
typedef enum hnae3_port_base_vlan_state { ____Placeholder_hnae3_port_base_vlan_state } hnae3_port_base_vlan_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u16 FUNC_0(struct hclge_vport *VAR_4,
       enum hnae3_port_base_vlan_state VAR_5,
       u16 VAR_6)
{
 if (VAR_5 == VAR_0) {
  if (!VAR_6)
   return VAR_3;
  else
   return VAR_1;
 } else {
  if (!VAR_6)
   return VAR_0;
  else if (VAR_4->port_base_vlan_cfg.vlan_info.vlan_tag == VAR_6)
   return VAR_3;
  else
   return VAR_2;
 }
}
