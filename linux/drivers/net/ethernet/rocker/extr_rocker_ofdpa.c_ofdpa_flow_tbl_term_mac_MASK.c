
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_3__ {int copy_to_cpu; void* vlan_id_mask; void* vlan_id; int eth_dst_mask; int eth_dst; void* eth_type; void* in_pport_mask; void* in_pport; int goto_tbl; } ;
struct TYPE_4__ {TYPE_1__ term_mac; int tbl_id; int priority; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 struct ofdpa_flow_tbl_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ofdpa_port*,int,struct ofdpa_flow_tbl_entry*) ;

__attribute__((used)) static int FUNC_4(struct ofdpa_port *VAR_7,
       u32 VAR_8, u32 VAR_9,
       __be16 VAR_10, const u8 *VAR_11,
       const u8 *VAR_12, __be16 VAR_13,
       __be16 VAR_14, bool VAR_15,
       int VAR_16)
{
 struct ofdpa_flow_tbl_entry *VAR_17;

 VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return -VAR_0;

 if (FUNC_1(VAR_11)) {
  VAR_17->key.priority = VAR_2;
  VAR_17->key.term_mac.goto_tbl =
    VAR_4;
 } else {
  VAR_17->key.priority = VAR_3;
  VAR_17->key.term_mac.goto_tbl =
    VAR_6;
 }

 VAR_17->key.tbl_id = VAR_5;
 VAR_17->key.term_mac.in_pport = VAR_8;
 VAR_17->key.term_mac.in_pport_mask = VAR_9;
 VAR_17->key.term_mac.eth_type = VAR_10;
 FUNC_0(VAR_17->key.term_mac.eth_dst, VAR_11);
 FUNC_0(VAR_17->key.term_mac.eth_dst_mask, VAR_12);
 VAR_17->key.term_mac.vlan_id = VAR_13;
 VAR_17->key.term_mac.vlan_id_mask = VAR_14;
 VAR_17->key.term_mac.copy_to_cpu = VAR_15;

 return FUNC_3(VAR_7, VAR_16, VAR_17);
}
