
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct kvec {int* iov_base; int iov_len; } ;
struct iscsi_scsi_req {int dummy; } ;
struct iscsi_conn {TYPE_3__* sess; int conn_rx_hash; TYPE_1__* conn_ops; } ;
struct TYPE_8__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ write_data_done; int orig_iov_data_count; int* pad_bytes; int istate_lock; int i_state; int cmd_flags; TYPE_4__ se_cmd; struct kvec* iov_data; void* overflow_buf; struct iscsi_conn* conn; } ;
struct TYPE_7__ {TYPE_2__* sess_ops; } ;
struct TYPE_6__ {int ErrorRecoveryLevel; } ;
struct TYPE_5__ {scalar_t__ DataDigest; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct iscsi_cmd*,scalar_t__,int,int,int*) ;
 int FUNC_3 (struct iscsi_cmd*,struct kvec*,int,scalar_t__,int) ;
 int FUNC_4 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_5 (struct iscsi_conn*) ;
 int FUNC_6 (struct iscsi_cmd*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct iscsi_conn*,struct kvec*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(
 struct iscsi_cmd *VAR_8,
 struct iscsi_scsi_req *VAR_9,
 u32 VAR_10)
{
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14, VAR_15 = 0, VAR_16 = 0;
 struct iscsi_conn *VAR_17 = VAR_8->conn;
 struct kvec *VAR_18;
 void *VAR_19 = ((void*)0);

 FUNC_0(VAR_8->write_data_done > VAR_8->se_cmd.data_length);
 VAR_13 = FUNC_8(VAR_8->se_cmd.data_length - VAR_8->write_data_done, VAR_10);
 VAR_11 = FUNC_3(VAR_8, VAR_8->iov_data,
       VAR_8->orig_iov_data_count - 2,
       VAR_8->write_data_done, VAR_13);
 if (VAR_11 < 0)
  return VAR_2;

 VAR_15 = VAR_11;
 VAR_18 = &VAR_8->iov_data[0];
 if (VAR_13 < VAR_10) {




  VAR_19 = FUNC_7(VAR_10 - VAR_13, VAR_0);
  if (!VAR_19) {
   FUNC_6(VAR_8);
   return VAR_2;
  }
  VAR_8->overflow_buf = VAR_19;
  VAR_18[VAR_15].iov_base = VAR_19;
  VAR_18[VAR_15].iov_len = VAR_10 - VAR_13;
  VAR_15++;
  VAR_13 = VAR_10;
 }

 VAR_16 = ((-VAR_10) & 3);
 if (VAR_16 != 0) {
  VAR_18[VAR_15].iov_base = VAR_8->pad_bytes;
  VAR_18[VAR_15++].iov_len = VAR_16;
  VAR_13 += VAR_16;
 }

 if (VAR_17->conn_ops->DataDigest) {
  VAR_18[VAR_15].iov_base = &VAR_14;
  VAR_18[VAR_15++].iov_len = VAR_5;
  VAR_13 += VAR_5;
 }

 FUNC_1(VAR_15 > VAR_8->orig_iov_data_count);
 VAR_12 = FUNC_11(VAR_17, &VAR_8->iov_data[0], VAR_15, VAR_13);

 FUNC_6(VAR_8);

 if (VAR_12 != VAR_13) {
  FUNC_5(VAR_17);
  return VAR_2;
 }

 if (VAR_17->conn_ops->DataDigest) {
  u32 VAR_20;

  VAR_20 = FUNC_2(VAR_17->conn_rx_hash, VAR_8,
          VAR_8->write_data_done, VAR_10, VAR_16,
          VAR_8->pad_bytes);

  if (VAR_14 != VAR_20) {
   FUNC_10("ImmediateData CRC32C DataDigest 0x%08x"
    " does not match computed 0x%08x\n", VAR_14,
    VAR_20);

   if (!VAR_17->sess->sess_ops->ErrorRecoveryLevel) {
    FUNC_10("Unable to recover from"
     " Immediate Data digest failure while"
     " in ERL=0.\n");
    FUNC_4(VAR_8,
      VAR_6,
      (unsigned char *)VAR_9);
    return VAR_2;
   } else {
    FUNC_4(VAR_8,
      VAR_6,
      (unsigned char *)VAR_9);
    return VAR_3;
   }
  } else {
   FUNC_9("Got CRC32C DataDigest 0x%08x for"
    " %u bytes of Immediate Data\n", VAR_14,
    VAR_10);
  }
 }

 VAR_8->write_data_done += VAR_10;

 if (VAR_8->write_data_done == VAR_8->se_cmd.data_length) {
  FUNC_12(&VAR_8->istate_lock);
  VAR_8->cmd_flags |= VAR_1;
  VAR_8->i_state = VAR_7;
  FUNC_13(&VAR_8->istate_lock);
 }

 return VAR_4;
}
