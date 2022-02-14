
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_3__ {void* group_id; void* ip_tos_mask; void* ip_tos; void* ip_proto_mask; void* ip_proto; void* vlan_id_mask; void* vlan_id; void* eth_type; int eth_dst_mask; int eth_dst; int eth_src_mask; int eth_src; void* in_pport_mask; void* in_pport; } ;
struct TYPE_4__ {TYPE_1__ acl; int tbl_id; void* priority; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void* const*) ;
 scalar_t__ FUNC_1 (void* const*,int ) ;
 scalar_t__ FUNC_2 (void* const*) ;
 struct ofdpa_flow_tbl_entry* FUNC_3 (int,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct ofdpa_port*,int,struct ofdpa_flow_tbl_entry*) ;

__attribute__((used)) static int FUNC_5(struct ofdpa_port *VAR_7, int VAR_8,
         u32 VAR_9, u32 VAR_10,
         const u8 *VAR_11, const u8 *VAR_12,
         const u8 *VAR_13, const u8 *VAR_14,
         __be16 VAR_15, __be16 VAR_16,
         __be16 VAR_17, u8 VAR_18,
         u8 VAR_19, u8 VAR_20, u8 VAR_21,
         u32 VAR_22)
{
 u32 VAR_23;
 struct ofdpa_flow_tbl_entry *VAR_24;

 VAR_24 = FUNC_3(sizeof(*VAR_24), VAR_1);
 if (!VAR_24)
  return -VAR_0;

 VAR_23 = VAR_4;
 if (VAR_13 && VAR_14) {
  if (FUNC_1(VAR_14, VAR_6))
   VAR_23 = VAR_3;
  else if (FUNC_2(VAR_13))
   VAR_23 = VAR_2;
 }

 VAR_24->key.priority = VAR_23;
 VAR_24->key.tbl_id = VAR_5;
 VAR_24->key.acl.in_pport = VAR_9;
 VAR_24->key.acl.in_pport_mask = VAR_10;

 if (VAR_11)
  FUNC_0(VAR_24->key.acl.eth_src, VAR_11);
 if (VAR_12)
  FUNC_0(VAR_24->key.acl.eth_src_mask, VAR_12);
 if (VAR_13)
  FUNC_0(VAR_24->key.acl.eth_dst, VAR_13);
 if (VAR_14)
  FUNC_0(VAR_24->key.acl.eth_dst_mask, VAR_14);

 VAR_24->key.acl.eth_type = VAR_15;
 VAR_24->key.acl.vlan_id = VAR_16;
 VAR_24->key.acl.vlan_id_mask = VAR_17;
 VAR_24->key.acl.ip_proto = VAR_18;
 VAR_24->key.acl.ip_proto_mask = VAR_19;
 VAR_24->key.acl.ip_tos = VAR_20;
 VAR_24->key.acl.ip_tos_mask = VAR_21;
 VAR_24->key.acl.group_id = VAR_22;

 return FUNC_4(VAR_7, VAR_8, VAR_24);
}
