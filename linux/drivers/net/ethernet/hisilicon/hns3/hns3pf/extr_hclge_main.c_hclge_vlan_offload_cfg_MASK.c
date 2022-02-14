
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int strip_tag1_en; int strip_tag2_en; int rx_vlan_offload_en; int vlan1_vlan_prionly; int vlan2_vlan_prionly; } ;
struct TYPE_3__ {int accept_tag1; int insert_tag1_en; int accept_untag1; int accept_tag2; int accept_untag2; int insert_tag2_en; scalar_t__ default_tag2; scalar_t__ default_tag1; } ;
struct hclge_vport {TYPE_2__ rxvlan_cfg; TYPE_1__ txvlan_cfg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_vport*) ;
 int FUNC_1 (struct hclge_vport*) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_1,
      u16 VAR_2,
      u16 VAR_3)
{
 int VAR_4;

 if (VAR_2 == VAR_0) {
  VAR_1->txvlan_cfg.accept_tag1 = 1;
  VAR_1->txvlan_cfg.insert_tag1_en = 0;
  VAR_1->txvlan_cfg.default_tag1 = 0;
 } else {
  VAR_1->txvlan_cfg.accept_tag1 = 0;
  VAR_1->txvlan_cfg.insert_tag1_en = 1;
  VAR_1->txvlan_cfg.default_tag1 = VAR_3;
 }

 VAR_1->txvlan_cfg.accept_untag1 = 1;





 VAR_1->txvlan_cfg.accept_tag2 = 1;
 VAR_1->txvlan_cfg.accept_untag2 = 1;
 VAR_1->txvlan_cfg.insert_tag2_en = 0;
 VAR_1->txvlan_cfg.default_tag2 = 0;

 if (VAR_2 == VAR_0) {
  VAR_1->rxvlan_cfg.strip_tag1_en = 0;
  VAR_1->rxvlan_cfg.strip_tag2_en =
    VAR_1->rxvlan_cfg.rx_vlan_offload_en;
 } else {
  VAR_1->rxvlan_cfg.strip_tag1_en =
    VAR_1->rxvlan_cfg.rx_vlan_offload_en;
  VAR_1->rxvlan_cfg.strip_tag2_en = 1;
 }
 VAR_1->rxvlan_cfg.vlan1_vlan_prionly = 0;
 VAR_1->rxvlan_cfg.vlan2_vlan_prionly = 0;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_1);
}
