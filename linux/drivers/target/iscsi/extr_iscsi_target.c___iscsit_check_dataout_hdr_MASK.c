
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_cmd {scalar_t__ data_length; scalar_t__ t_state; int se_cmd_flags; int transport_state; } ;
struct iscsi_data {int flags; int offset; int datasn; int ttt; int itt; } ;
struct iscsi_conn {TYPE_2__* sess; int cid; } ;
struct iscsi_cmd {int cmd_flags; scalar_t__ data_direction; int outstanding_r2ts; struct se_cmd se_cmd; scalar_t__ unsolicited_data; int init_task_tag; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; int rx_data_octets; } ;
struct TYPE_3__ {scalar_t__ InitialR2T; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct iscsi_cmd*,void*) ;
 int FUNC_4 (struct iscsi_conn*,scalar_t__,int) ;
 int FUNC_5 (struct iscsi_cmd*) ;
 int FUNC_6 (struct iscsi_cmd*,int ,void*) ;
 int FUNC_7 (struct iscsi_cmd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct se_cmd*,int ,int ) ;

int
FUNC_12(struct iscsi_conn *VAR_10, void *VAR_11,
      struct iscsi_cmd *VAR_12, u32 VAR_13,
      bool *VAR_14)
{
 struct iscsi_data *VAR_15 = VAR_11;
 struct se_cmd *VAR_16;
 int VAR_17;


 FUNC_1(VAR_13, &VAR_10->sess->rx_data_octets);

 FUNC_9("Got DataOut ITT: 0x%08x, TTT: 0x%08x,"
  " DataSN: 0x%08x, Offset: %u, Length: %u, CID: %hu\n",
  VAR_15->itt, VAR_15->ttt, VAR_15->datasn, FUNC_8(VAR_15->offset),
  VAR_13, VAR_10->cid);

 if (VAR_12->cmd_flags & VAR_4) {
  FUNC_10("Command ITT: 0x%08x received DataOUT after"
   " last DataOUT received, dumping payload\n",
   VAR_12->init_task_tag);
  return FUNC_4(VAR_10, VAR_13, 1);
 }

 if (VAR_12->data_direction != VAR_3) {
  FUNC_10("Command ITT: 0x%08x received DataOUT for a"
   " NON-WRITE command.\n", VAR_12->init_task_tag);
  return FUNC_4(VAR_10, VAR_13, 1);
 }
 VAR_16 = &VAR_12->se_cmd;
 FUNC_5(VAR_12);

 if ((FUNC_2(VAR_15->offset) + VAR_13) > VAR_12->se_cmd.data_length) {
  FUNC_10("DataOut Offset: %u, Length %u greater than iSCSI Command EDTL %u, protocol error.\n",
         FUNC_2(VAR_15->offset), VAR_13,
         VAR_12->se_cmd.data_length);
  return FUNC_6(VAR_12, VAR_6, VAR_11);
 }

 if (VAR_12->unsolicited_data) {
  int VAR_18 = 0;

  if (VAR_10->sess->sess_ops->InitialR2T) {
   FUNC_10("Received unexpected unsolicited data"
    " while InitialR2T=Yes, protocol error.\n");
   FUNC_11(&VAR_12->se_cmd,
     VAR_8, 0);
   return -1;
  }







  FUNC_0(VAR_16->t_state != VAR_9);
  if (!(VAR_16->se_cmd_flags & VAR_7))
   VAR_18 = 1;

  if (VAR_18) {





   if (VAR_15->flags & VAR_5)
    FUNC_7(VAR_12);

   return FUNC_4(VAR_10, VAR_13, 1);
  }
 } else {
  if (VAR_16->transport_state & VAR_0) {
   if (VAR_15->flags & VAR_5 &&
       --VAR_12->outstanding_r2ts < 1)
    FUNC_7(VAR_12);

   return FUNC_4(VAR_10, VAR_13, 1);
  }
 }




 VAR_17 = FUNC_3(VAR_12, VAR_11);
 if (VAR_17 == VAR_2)
  return 0;
 else if (VAR_17 == VAR_1)
  return -1;
 *VAR_14 = 1;
 return 0;
}
