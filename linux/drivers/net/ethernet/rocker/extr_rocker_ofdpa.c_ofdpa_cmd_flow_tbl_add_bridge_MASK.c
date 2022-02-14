
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ copy_to_cpu; scalar_t__ group_id; int goto_tbl; scalar_t__ tunnel_id; scalar_t__ vlan_id; int eth_dst_mask; scalar_t__ has_eth_dst_mask; int eth_dst; scalar_t__ has_eth_dst; } ;
struct TYPE_4__ {TYPE_1__ bridge; } ;
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
 scalar_t__ FUNC_0 (struct rocker_desc_info*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct rocker_desc_info*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct rocker_desc_info *VAR_9,
         const struct ofdpa_flow_tbl_entry *VAR_10)
{
 if (VAR_10->key.bridge.has_eth_dst &&
     FUNC_0(VAR_9, VAR_3,
      VAR_1, VAR_10->key.bridge.eth_dst))
  return -VAR_0;
 if (VAR_10->key.bridge.has_eth_dst_mask &&
     FUNC_0(VAR_9, VAR_4,
      VAR_1, VAR_10->key.bridge.eth_dst_mask))
  return -VAR_0;
 if (VAR_10->key.bridge.vlan_id &&
     FUNC_1(VAR_9, VAR_8,
    VAR_10->key.bridge.vlan_id))
  return -VAR_0;
 if (VAR_10->key.bridge.tunnel_id &&
     FUNC_3(VAR_9, VAR_7,
          VAR_10->key.bridge.tunnel_id))
  return -VAR_0;
 if (FUNC_2(VAR_9, VAR_5,
          VAR_10->key.bridge.goto_tbl))
  return -VAR_0;
 if (FUNC_3(VAR_9, VAR_6,
          VAR_10->key.bridge.group_id))
  return -VAR_0;
 if (VAR_10->key.bridge.copy_to_cpu &&
     FUNC_4(VAR_9, VAR_2,
         VAR_10->key.bridge.copy_to_cpu))
  return -VAR_0;

 return 0;
}
