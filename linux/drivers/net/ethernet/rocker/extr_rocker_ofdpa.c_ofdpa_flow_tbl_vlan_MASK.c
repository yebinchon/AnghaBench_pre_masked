
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_3__ {int goto_tbl; int untagged; void* new_vlan_id; void* vlan_id_mask; void* vlan_id; int in_pport; } ;
struct TYPE_4__ {TYPE_1__ vlan; int tbl_id; int priority; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ofdpa_flow_tbl_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ofdpa_port*,int,struct ofdpa_flow_tbl_entry*) ;

__attribute__((used)) static int FUNC_2(struct ofdpa_port *VAR_4,
          int VAR_5,
          u32 VAR_6, __be16 VAR_7,
          __be16 VAR_8,
          enum rocker_of_dpa_table_id VAR_9,
          bool VAR_10, __be16 VAR_11)
{
 struct ofdpa_flow_tbl_entry *VAR_12;

 VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->key.priority = VAR_2;
 VAR_12->key.tbl_id = VAR_3;
 VAR_12->key.vlan.in_pport = VAR_6;
 VAR_12->key.vlan.vlan_id = VAR_7;
 VAR_12->key.vlan.vlan_id_mask = VAR_8;
 VAR_12->key.vlan.goto_tbl = VAR_9;

 VAR_12->key.vlan.untagged = VAR_10;
 VAR_12->key.vlan.new_vlan_id = VAR_11;

 return FUNC_1(VAR_4, VAR_5, VAR_12);
}
