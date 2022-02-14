
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_3__ {int new_vlan_id; scalar_t__ untagged; int goto_tbl; int vlan_id_mask; int vlan_id; int in_pport; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct rocker_desc_info *VAR_6,
       const struct ofdpa_flow_tbl_entry *VAR_7)
{
 if (FUNC_2(VAR_6, VAR_2,
          VAR_7->key.vlan.in_pport))
  return -VAR_0;
 if (FUNC_0(VAR_6, VAR_4,
    VAR_7->key.vlan.vlan_id))
  return -VAR_0;
 if (FUNC_0(VAR_6, VAR_5,
    VAR_7->key.vlan.vlan_id_mask))
  return -VAR_0;
 if (FUNC_1(VAR_6, VAR_1,
          VAR_7->key.vlan.goto_tbl))
  return -VAR_0;
 if (VAR_7->key.vlan.untagged &&
     FUNC_0(VAR_6, VAR_3,
    VAR_7->key.vlan.new_vlan_id))
  return -VAR_0;

 return 0;
}
