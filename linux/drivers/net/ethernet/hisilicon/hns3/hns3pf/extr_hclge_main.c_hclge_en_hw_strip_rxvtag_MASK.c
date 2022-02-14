
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct TYPE_4__ {int strip_tag1_en; int strip_tag2_en; int vlan1_vlan_prionly; int vlan2_vlan_prionly; int rx_vlan_offload_en; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct hclge_vport {TYPE_2__ rxvlan_cfg; TYPE_1__ port_base_vlan_cfg; } ;


 scalar_t__ VAR_0 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_vport*) ;

int FUNC_2(struct hnae3_handle *VAR_1, bool VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->port_base_vlan_cfg.state == VAR_0) {
  VAR_3->rxvlan_cfg.strip_tag1_en = 0;
  VAR_3->rxvlan_cfg.strip_tag2_en = VAR_2;
 } else {
  VAR_3->rxvlan_cfg.strip_tag1_en = VAR_2;
  VAR_3->rxvlan_cfg.strip_tag2_en = 1;
 }
 VAR_3->rxvlan_cfg.vlan1_vlan_prionly = 0;
 VAR_3->rxvlan_cfg.vlan2_vlan_prionly = 0;
 VAR_3->rxvlan_cfg.rx_vlan_offload_en = VAR_2;

 return FUNC_1(VAR_3);
}
