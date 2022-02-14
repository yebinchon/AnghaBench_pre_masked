
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_erl; } ;
struct iscsi_portal_group {TYPE_1__ tpg_attrib; } ;
struct iscsi_node_attrib {int default_erl; int random_r2t_offsets; int random_datain_seq_offsets; int random_datain_pdu_offsets; int nopin_response_timeout; int nopin_timeout; int dataout_timeout_retries; int dataout_timeout; } ;
struct iscsi_node_acl {struct iscsi_node_attrib node_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(
 struct iscsi_node_acl *VAR_7,
 struct iscsi_portal_group *VAR_8)
{
 struct iscsi_node_attrib *VAR_9 = &VAR_7->node_attrib;

 VAR_9->dataout_timeout = VAR_0;
 VAR_9->dataout_timeout_retries = VAR_1;
 VAR_9->nopin_timeout = VAR_3;
 VAR_9->nopin_response_timeout = VAR_2;
 VAR_9->random_datain_pdu_offsets = VAR_4;
 VAR_9->random_datain_seq_offsets = VAR_5;
 VAR_9->random_r2t_offsets = VAR_6;
 VAR_9->default_erl = VAR_8->tpg_attrib.default_erl;
}
