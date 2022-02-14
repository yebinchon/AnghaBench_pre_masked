
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ in_pport; scalar_t__ in_pport_mask; int ip_proto; int ip_proto_mask; int ip_tos; int ip_tos_mask; scalar_t__ group_id; int eth_type; int vlan_id_mask; int vlan_id; int eth_dst_mask; int eth_dst; int eth_src_mask; int eth_src; } ;
struct TYPE_4__ {TYPE_1__ acl; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,scalar_t__) ;
 int FUNC_4 (struct rocker_desc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct rocker_desc_info *VAR_19,
      const struct ofdpa_flow_tbl_entry *VAR_20)
{
 if (FUNC_3(VAR_19, VAR_7,
          VAR_20->key.acl.in_pport))
  return -VAR_0;
 if (FUNC_3(VAR_19, VAR_8,
          VAR_20->key.acl.in_pport_mask))
  return -VAR_0;
 if (FUNC_1(VAR_19, VAR_15,
      VAR_1, VAR_20->key.acl.eth_src))
  return -VAR_0;
 if (FUNC_1(VAR_19, VAR_16,
      VAR_1, VAR_20->key.acl.eth_src_mask))
  return -VAR_0;
 if (FUNC_1(VAR_19, VAR_3,
      VAR_1, VAR_20->key.acl.eth_dst))
  return -VAR_0;
 if (FUNC_1(VAR_19, VAR_4,
      VAR_1, VAR_20->key.acl.eth_dst_mask))
  return -VAR_0;
 if (FUNC_2(VAR_19, VAR_5,
    VAR_20->key.acl.eth_type))
  return -VAR_0;
 if (FUNC_2(VAR_19, VAR_17,
    VAR_20->key.acl.vlan_id))
  return -VAR_0;
 if (FUNC_2(VAR_19, VAR_18,
    VAR_20->key.acl.vlan_id_mask))
  return -VAR_0;

 switch (FUNC_0(VAR_20->key.acl.eth_type)) {
 case 129:
 case 128:
  if (FUNC_4(VAR_19, VAR_13,
          VAR_20->key.acl.ip_proto))
   return -VAR_0;
  if (FUNC_4(VAR_19,
          VAR_14,
          VAR_20->key.acl.ip_proto_mask))
   return -VAR_0;
  if (FUNC_4(VAR_19, VAR_9,
          VAR_20->key.acl.ip_tos & 0x3f))
   return -VAR_0;
  if (FUNC_4(VAR_19,
          VAR_10,
          VAR_20->key.acl.ip_tos_mask & 0x3f))
   return -VAR_0;
  if (FUNC_4(VAR_19, VAR_11,
          (VAR_20->key.acl.ip_tos & 0xc0) >> 6))
   return -VAR_0;
  if (FUNC_4(VAR_19,
          VAR_12,
          (VAR_20->key.acl.ip_tos_mask & 0xc0) >> 6))
   return -VAR_0;
  break;
 }

 if (VAR_20->key.acl.group_id != VAR_2 &&
     FUNC_3(VAR_19, VAR_6,
          VAR_20->key.acl.group_id))
  return -VAR_0;

 return 0;
}
