
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_seq {scalar_t__ status; scalar_t__ offset; scalar_t__ data_sn; } ;
struct iscsi_data {int datasn; int offset; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {int cmd_flags; scalar_t__ write_data_done; struct iscsi_seq* seq_ptr; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_conn*,int ,int) ;
 struct iscsi_seq* FUNC_2 (struct iscsi_cmd*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_cmd *VAR_5,
 unsigned char *VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_5->conn;
 struct iscsi_data *VAR_8 = (struct iscsi_data *) VAR_6;
 u32 VAR_9 = FUNC_3(VAR_8->dlength);
 if (VAR_7->sess->sess_ops->DataSequenceInOrder) {
  if ((VAR_5->cmd_flags & VAR_4) &&
      VAR_5->write_data_done != FUNC_0(VAR_8->offset))
   goto dump;

  VAR_5->cmd_flags &= ~VAR_4;
 } else {
  struct iscsi_seq *VAR_10;

  VAR_10 = FUNC_2(VAR_5, FUNC_0(VAR_8->offset),
         VAR_9);
  if (!VAR_10)
   return VAR_0;



  VAR_5->seq_ptr = VAR_10;

  if (VAR_7->sess->sess_ops->DataPDUInOrder) {
   if (VAR_10->status ==
       VAR_3 &&
      (VAR_10->offset != FUNC_0(VAR_8->offset) ||
       VAR_10->data_sn != FUNC_0(VAR_8->datasn)))
    goto dump;
  } else {
   if (VAR_10->status ==
        VAR_3 &&
       VAR_10->data_sn != FUNC_0(VAR_8->datasn))
    goto dump;
  }

  if (VAR_10->status == VAR_2)
   goto dump;

  if (VAR_10->status != VAR_2)
   VAR_10->status = 0;
 }

 return VAR_1;

dump:
 FUNC_4("Dumping DataOUT PDU Offset: %u Length: %d DataSN:"
  " 0x%08x\n", VAR_8->offset, VAR_9, VAR_8->datasn);
 return FUNC_1(VAR_7, VAR_9, 1);
}
