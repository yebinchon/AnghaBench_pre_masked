
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ copy_to_cpu; int goto_tbl; int vlan_id_mask; int vlan_id; int eth_dst_mask; int eth_dst; int eth_type; int in_pport_mask; int in_pport; } ;
struct TYPE_4__ {TYPE_1__ term_mac; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;


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
 scalar_t__ FUNC_0 (struct rocker_desc_info*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_4 (struct rocker_desc_info*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct rocker_desc_info *VAR_11,
    const struct ofdpa_flow_tbl_entry *VAR_12)
{
 if (FUNC_3(VAR_11, VAR_7,
          VAR_12->key.term_mac.in_pport))
  return -VAR_0;
 if (FUNC_3(VAR_11, VAR_8,
          VAR_12->key.term_mac.in_pport_mask))
  return -VAR_0;
 if (FUNC_1(VAR_11, VAR_5,
    VAR_12->key.term_mac.eth_type))
  return -VAR_0;
 if (FUNC_0(VAR_11, VAR_3,
      VAR_1, VAR_12->key.term_mac.eth_dst))
  return -VAR_0;
 if (FUNC_0(VAR_11, VAR_4,
      VAR_1, VAR_12->key.term_mac.eth_dst_mask))
  return -VAR_0;
 if (FUNC_1(VAR_11, VAR_9,
    VAR_12->key.term_mac.vlan_id))
  return -VAR_0;
 if (FUNC_1(VAR_11, VAR_10,
    VAR_12->key.term_mac.vlan_id_mask))
  return -VAR_0;
 if (FUNC_2(VAR_11, VAR_6,
          VAR_12->key.term_mac.goto_tbl))
  return -VAR_0;
 if (VAR_12->key.term_mac.copy_to_cpu &&
     FUNC_4(VAR_11, VAR_2,
         VAR_12->key.term_mac.copy_to_cpu))
  return -VAR_0;

 return 0;
}
