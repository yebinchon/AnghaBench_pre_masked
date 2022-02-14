
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct iscsi_session {TYPE_1__* sess_ops; } ;
struct iscsi_seq {int dummy; } ;
struct iscsi_pdu {int dummy; } ;
struct iscsi_node_attrib {scalar_t__ random_r2t_offsets; scalar_t__ random_datain_seq_offsets; scalar_t__ random_datain_pdu_offsets; } ;
struct iscsi_conn {struct iscsi_session* sess; } ;
struct iscsi_cmd {scalar_t__ data_direction; void* pdu_count; struct iscsi_pdu* pdu_list; void* seq_count; struct iscsi_seq* seq_list; scalar_t__ unsolicited_data; scalar_t__ immediate_data; struct iscsi_conn* conn; } ;
struct iscsi_build_list {void* type; int randomize; void* immediate_data_length; int data_direction; } ;
struct TYPE_2__ {scalar_t__ DataPDUInOrder; scalar_t__ DataSequenceInOrder; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_build_list*,void**,void**) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_build_list*) ;
 struct iscsi_node_attrib* FUNC_2 (struct iscsi_session*) ;
 void* FUNC_3 (void*,int,int ) ;
 int FUNC_4 (struct iscsi_seq*) ;
 int FUNC_5 (struct iscsi_build_list*,int ,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(
 struct iscsi_cmd *VAR_13,
 u32 VAR_14)
{
 struct iscsi_build_list VAR_15;
 u32 VAR_16 = 0, VAR_17 = 1;
 struct iscsi_conn *VAR_18 = VAR_13->conn;
 struct iscsi_pdu *VAR_19 = ((void*)0);
 struct iscsi_seq *VAR_20 = ((void*)0);

 struct iscsi_session *VAR_21 = VAR_18->sess;
 struct iscsi_node_attrib *VAR_22;




 if (VAR_21->sess_ops->DataSequenceInOrder &&
     VAR_21->sess_ops->DataPDUInOrder)
  return 0;

 if (VAR_13->data_direction == VAR_1)
  return 0;

 VAR_22 = FUNC_2(VAR_21);
 FUNC_5(&VAR_15, 0, sizeof(struct iscsi_build_list));

 if (VAR_13->data_direction == VAR_0) {
  VAR_15.data_direction = VAR_4;
  VAR_15.type = VAR_8;
  if (VAR_22->random_datain_pdu_offsets)
   VAR_15.randomize |= VAR_10;
  if (VAR_22->random_datain_seq_offsets)
   VAR_15.randomize |= VAR_11;
 } else {
  VAR_15.data_direction = VAR_5;
  VAR_15.immediate_data_length = VAR_14;
  if (VAR_22->random_r2t_offsets)
   VAR_15.randomize |= VAR_12;

  if (!VAR_13->immediate_data && !VAR_13->unsolicited_data)
   VAR_15.type = VAR_8;
  else if (VAR_13->immediate_data && !VAR_13->unsolicited_data)
   VAR_15.type = VAR_6;
  else if (!VAR_13->immediate_data && VAR_13->unsolicited_data)
   VAR_15.type = VAR_9;
  else if (VAR_13->immediate_data && VAR_13->unsolicited_data)
   VAR_15.type = VAR_7;
 }

 FUNC_0(VAR_13, &VAR_15, &VAR_17, &VAR_16);

 if (!VAR_18->sess->sess_ops->DataSequenceInOrder) {
  VAR_20 = FUNC_3(VAR_17, sizeof(struct iscsi_seq), VAR_3);
  if (!VAR_20) {
   FUNC_6("Unable to allocate struct iscsi_seq list\n");
   return -VAR_2;
  }
  VAR_13->seq_list = VAR_20;
  VAR_13->seq_count = VAR_17;
 }

 if (!VAR_18->sess->sess_ops->DataPDUInOrder) {
  VAR_19 = FUNC_3(VAR_16, sizeof(struct iscsi_pdu), VAR_3);
  if (!VAR_19) {
   FUNC_6("Unable to allocate struct iscsi_pdu list.\n");
   FUNC_4(VAR_20);
   return -VAR_2;
  }
  VAR_13->pdu_list = VAR_19;
  VAR_13->pdu_count = VAR_16;
 }

 return FUNC_1(VAR_13, &VAR_15);
}
