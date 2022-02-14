
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_seq {int pdu_count; scalar_t__ xfer_len; void* type; scalar_t__ orig_offset; scalar_t__ offset; scalar_t__ seq_no; scalar_t__ pdu_start; } ;
struct iscsi_pdu {scalar_t__ length; void* type; scalar_t__ seq_no; scalar_t__ offset; } ;
struct iscsi_conn {TYPE_3__* sess; TYPE_1__* conn_ops; } ;
struct TYPE_8__ {scalar_t__ data_direction; scalar_t__ data_length; } ;
struct iscsi_cmd {TYPE_4__ se_cmd; struct iscsi_conn* conn; struct iscsi_seq* seq_list; struct iscsi_pdu* pdu_list; } ;
struct iscsi_build_list {scalar_t__ type; scalar_t__ immediate_data_length; int data_direction; int randomize; } ;
struct TYPE_7__ {TYPE_2__* sess_ops; } ;
struct TYPE_6__ {int DataPDUInOrder; int DataSequenceInOrder; scalar_t__ FirstBurstLength; scalar_t__ MaxBurstLength; } ;
struct TYPE_5__ {scalar_t__ MaxXmitDataSegmentLength; scalar_t__ MaxRecvDataSegmentLength; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (struct iscsi_cmd*) ;
 int FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (struct iscsi_cmd*,scalar_t__) ;
 int FUNC_3 (struct iscsi_cmd*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct iscsi_cmd*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct iscsi_cmd*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(
 struct iscsi_cmd *VAR_16,
 struct iscsi_build_list *VAR_17)
{
 int VAR_18 = 0, VAR_19, VAR_20;
 u32 VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24;
 u32 VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 struct iscsi_conn *VAR_28 = VAR_16->conn;
 struct iscsi_pdu *VAR_29 = VAR_16->pdu_list;
 struct iscsi_seq *VAR_30 = VAR_16->seq_list;

 if (VAR_16->se_cmd.data_direction == VAR_0)
  VAR_24 = VAR_16->conn->conn_ops->MaxXmitDataSegmentLength;
 else
  VAR_24 = VAR_16->conn->conn_ops->MaxRecvDataSegmentLength;

 VAR_19 = VAR_28->sess->sess_ops->DataPDUInOrder;
 VAR_20 = VAR_28->sess->sess_ops->DataSequenceInOrder;

 if ((VAR_17->type == VAR_3) ||
     (VAR_17->type == VAR_4))
  VAR_18 = 1;

 if ((VAR_17->type == VAR_5) ||
     (VAR_17->type == VAR_4))
  VAR_27 = FUNC_6(VAR_16->se_cmd.data_length,
   VAR_28->sess->sess_ops->FirstBurstLength);

 while (VAR_22 < VAR_16->se_cmd.data_length) {
  VAR_25++;
  if (!VAR_19) {
   VAR_29[VAR_23].offset = VAR_22;
   VAR_29[VAR_23].seq_no = VAR_26;
  }
  if (!VAR_20 && (VAR_25 == 1)) {
   VAR_30[VAR_26].pdu_start = VAR_23;
   VAR_30[VAR_26].seq_no = VAR_26;
   VAR_30[VAR_26].offset = VAR_22;
   VAR_30[VAR_26].orig_offset = VAR_22;
  }

  if (VAR_18) {
   VAR_18 = 0;
   if (!VAR_19) {
    VAR_29[VAR_23].type = VAR_6;
    VAR_29[VAR_23++].length = VAR_17->immediate_data_length;
   }
   if (!VAR_20) {
    VAR_30[VAR_26].type = VAR_13;
    VAR_30[VAR_26].pdu_count = 1;
    VAR_30[VAR_26].xfer_len =
     VAR_17->immediate_data_length;
   }
   VAR_22 += VAR_17->immediate_data_length;
   VAR_25 = 0;
   VAR_26++;
   if (VAR_27)
    VAR_27 -=
     VAR_17->immediate_data_length;
   continue;
  }
  if (VAR_27 > 0) {
   if ((VAR_22 + VAR_24) >= VAR_16->se_cmd.data_length) {
    if (!VAR_19) {
     VAR_29[VAR_23].type = VAR_8;
     VAR_29[VAR_23].length =
      (VAR_16->se_cmd.data_length - VAR_22);
    }
    if (!VAR_20) {
     VAR_30[VAR_26].type = VAR_15;
     VAR_30[VAR_26].pdu_count = VAR_25;
     VAR_30[VAR_26].xfer_len = (VAR_21 +
      (VAR_16->se_cmd.data_length - VAR_22));
    }
    VAR_27 -=
      (VAR_16->se_cmd.data_length - VAR_22);
    VAR_22 += (VAR_16->se_cmd.data_length - VAR_22);
    continue;
   }
   if ((VAR_22 + VAR_24) >=
     VAR_28->sess->sess_ops->FirstBurstLength) {
    if (!VAR_19) {
     VAR_29[VAR_23].type = VAR_8;
     VAR_29[VAR_23++].length =
        (VAR_28->sess->sess_ops->FirstBurstLength -
      VAR_22);
    }
    if (!VAR_20) {
     VAR_30[VAR_26].type = VAR_15;
     VAR_30[VAR_26].pdu_count = VAR_25;
     VAR_30[VAR_26].xfer_len = (VAR_21 +
        (VAR_28->sess->sess_ops->FirstBurstLength -
      VAR_22));
    }
    VAR_27 -=
     (VAR_28->sess->sess_ops->FirstBurstLength -
      VAR_22);
    VAR_22 += (VAR_28->sess->sess_ops->FirstBurstLength -
      VAR_22);
    VAR_21 = 0;
    VAR_25 = 0;
    VAR_26++;
    continue;
   }

   if (!VAR_19) {
    VAR_29[VAR_23].type = VAR_8;
    VAR_29[VAR_23++].length = VAR_24;
   }
   VAR_21 += VAR_24;
   VAR_22 += VAR_24;
   VAR_27 -= VAR_24;
   continue;
  }
  if ((VAR_22 + VAR_24) >= VAR_16->se_cmd.data_length) {
   if (!VAR_19) {
    VAR_29[VAR_23].type = VAR_7;
    VAR_29[VAR_23].length = (VAR_16->se_cmd.data_length - VAR_22);
   }
   if (!VAR_20) {
    VAR_30[VAR_26].type = VAR_14;
    VAR_30[VAR_26].pdu_count = VAR_25;
    VAR_30[VAR_26].xfer_len = (VAR_21 +
     (VAR_16->se_cmd.data_length - VAR_22));
   }
   VAR_22 += (VAR_16->se_cmd.data_length - VAR_22);
   continue;
  }
  if ((VAR_21 + VAR_24) >=
       VAR_28->sess->sess_ops->MaxBurstLength) {
   if (!VAR_19) {
    VAR_29[VAR_23].type = VAR_7;
    VAR_29[VAR_23++].length =
     (VAR_28->sess->sess_ops->MaxBurstLength -
      VAR_21);
   }
   if (!VAR_20) {
    VAR_30[VAR_26].type = VAR_14;
    VAR_30[VAR_26].pdu_count = VAR_25;
    VAR_30[VAR_26].xfer_len = (VAR_21 +
     (VAR_28->sess->sess_ops->MaxBurstLength -
     VAR_21));
   }
   VAR_22 += (VAR_28->sess->sess_ops->MaxBurstLength -
     VAR_21);
   VAR_21 = 0;
   VAR_25 = 0;
   VAR_26++;
   continue;
  }

  if (!VAR_19) {
   VAR_29[VAR_23].type = VAR_7;
   VAR_29[VAR_23++].length = VAR_24;
  }
  VAR_21 += VAR_24;
  VAR_22 += VAR_24;
 }

 if (!VAR_20) {
  if (VAR_17->data_direction & VAR_2) {
   if (VAR_17->randomize & VAR_12) {
    if (FUNC_5(VAR_16, VAR_17->type)
      < 0)
     return -1;
   } else
    FUNC_3(VAR_16, VAR_17->type);
  } else if (VAR_17->data_direction & VAR_1) {
   if (VAR_17->randomize & VAR_10) {
    if (FUNC_5(VAR_16, VAR_17->type)
      < 0)
     return -1;
   } else
    FUNC_3(VAR_16, VAR_17->type);
  }

  FUNC_1(VAR_16);
 }
 if (!VAR_19) {
  if (VAR_17->data_direction & VAR_2) {
   if (VAR_17->randomize & VAR_11) {
    if (FUNC_4(VAR_16, VAR_17->type)
      < 0)
     return -1;
   } else
    FUNC_2(VAR_16, VAR_17->type);
  } else if (VAR_17->data_direction & VAR_1) {
   if (VAR_17->randomize & VAR_9) {
    if (FUNC_4(VAR_16, VAR_17->type)
      < 0)
     return -1;
   } else
    FUNC_2(VAR_16, VAR_17->type);
  }

  FUNC_0(VAR_16);
 }

 return 0;
}
