
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tpg_attrib {int login_keys_workaround; int tpg_enabled_sendtargets; int fabric_prot_type; int t10_pi; int default_erl; int demo_mode_discovery; int prod_mode_write_protect; int demo_mode_write_protect; int cache_dynamic_acls; int generate_node_acls; int default_cmdsn_depth; int netif_timeout; int login_timeout; int authentication; } ;
struct iscsi_portal_group {struct iscsi_tpg_attrib tpg_attrib; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_0(struct iscsi_portal_group *VAR_14)
{
 struct iscsi_tpg_attrib *VAR_15 = &VAR_14->tpg_attrib;

 VAR_15->authentication = VAR_0;
 VAR_15->login_timeout = VAR_11;
 VAR_15->netif_timeout = VAR_12;
 VAR_15->default_cmdsn_depth = VAR_2;
 VAR_15->generate_node_acls = VAR_10;
 VAR_15->cache_dynamic_acls = VAR_1;
 VAR_15->demo_mode_write_protect = VAR_9;
 VAR_15->prod_mode_write_protect = VAR_13;
 VAR_15->demo_mode_discovery = VAR_8;
 VAR_15->default_erl = VAR_3;
 VAR_15->t10_pi = VAR_6;
 VAR_15->fabric_prot_type = VAR_4;
 VAR_15->tpg_enabled_sendtargets = VAR_7;
 VAR_15->login_keys_workaround = VAR_5;
}
