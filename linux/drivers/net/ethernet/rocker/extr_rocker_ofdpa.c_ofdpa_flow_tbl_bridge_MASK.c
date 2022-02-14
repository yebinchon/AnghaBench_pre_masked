
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_3__ {int has_eth_dst; int has_eth_dst_mask; int goto_tbl; int copy_to_cpu; void* group_id; void* tunnel_id; scalar_t__ vlan_id; int eth_dst_mask; int eth_dst; } ;
struct TYPE_4__ {TYPE_1__ bridge; void* priority; int tbl_id; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int const*,int ) ;
 int VAR_10 ;
 struct ofdpa_flow_tbl_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ofdpa_port*,int,struct ofdpa_flow_tbl_entry*) ;

__attribute__((used)) static int FUNC_4(struct ofdpa_port *VAR_11,
     int VAR_12, const u8 *VAR_13,
     const u8 *VAR_14, __be16 VAR_15,
     u32 VAR_16,
     enum rocker_of_dpa_table_id VAR_17,
     u32 VAR_18, bool VAR_19)
{
 struct ofdpa_flow_tbl_entry *VAR_20;
 u32 VAR_21;
 bool VAR_22 = !!VAR_15;
 bool VAR_23 = !VAR_13 || (VAR_13 && VAR_14);
 bool VAR_24 = 0;

 VAR_20 = FUNC_2(sizeof(*VAR_20), VAR_1);
 if (!VAR_20)
  return -VAR_0;

 VAR_20->key.tbl_id = VAR_9;

 if (VAR_13) {
  VAR_20->key.bridge.has_eth_dst = 1;
  FUNC_0(VAR_20->key.bridge.eth_dst, VAR_13);
 }
 if (VAR_14) {
  VAR_20->key.bridge.has_eth_dst_mask = 1;
  FUNC_0(VAR_20->key.bridge.eth_dst_mask, VAR_14);
  if (!FUNC_1(VAR_14, VAR_10))
   VAR_24 = 1;
 }

 VAR_21 = VAR_8;
 if (VAR_22 && VAR_23 && VAR_24)
  VAR_21 = VAR_7;
 else if (VAR_22 && VAR_23 && !VAR_24)
  VAR_21 = VAR_6;
 else if (VAR_22 && !VAR_23)
  VAR_21 = VAR_5;
 else if (!VAR_22 && VAR_23 && VAR_24)
  VAR_21 = VAR_4;
 else if (!VAR_22 && VAR_23 && !VAR_24)
  VAR_21 = VAR_3;
 else if (!VAR_22 && !VAR_23)
  VAR_21 = VAR_2;

 VAR_20->key.priority = VAR_21;
 VAR_20->key.bridge.vlan_id = VAR_15;
 VAR_20->key.bridge.tunnel_id = VAR_16;
 VAR_20->key.bridge.goto_tbl = VAR_17;
 VAR_20->key.bridge.group_id = VAR_18;
 VAR_20->key.bridge.copy_to_cpu = VAR_19;

 return FUNC_3(VAR_11, VAR_12, VAR_20);
}
