
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_scsi_rsp {int dlength; } ;
struct iscsi_conn {TYPE_2__* conn_transport; } ;
struct TYPE_3__ {int se_cmd_flags; int scsi_sense_length; scalar_t__ sense_buffer; } ;
struct iscsi_cmd {scalar_t__ i_state; TYPE_1__ se_cmd; void* sense_buffer; int * pdu; } ;
typedef int __be16 ;
struct TYPE_4__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,void*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn*,int,struct iscsi_scsi_rsp*) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,int *,void*,int) ;

__attribute__((used)) static int FUNC_6(struct iscsi_cmd *VAR_3, struct iscsi_conn *VAR_4)
{
 struct iscsi_scsi_rsp *VAR_5 = (struct iscsi_scsi_rsp *)&VAR_3->pdu[0];
 bool VAR_6 = (VAR_3->i_state == VAR_0);
 void *VAR_7 = ((void*)0);
 u32 VAR_8 = 0, VAR_9 = 0;

 FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5);




 if (VAR_3->se_cmd.sense_buffer &&
    ((VAR_3->se_cmd.se_cmd_flags & VAR_2) ||
     (VAR_3->se_cmd.se_cmd_flags & VAR_1))) {
  FUNC_4(VAR_3->se_cmd.scsi_sense_length, VAR_3->sense_buffer);
  VAR_3->se_cmd.scsi_sense_length += sizeof (__be16);

  VAR_8 = -(VAR_3->se_cmd.scsi_sense_length) & 3;
  FUNC_0(VAR_5->dlength, (u32)VAR_3->se_cmd.scsi_sense_length);
  VAR_7 = VAR_3->sense_buffer;
  VAR_9 = VAR_3->se_cmd.scsi_sense_length + VAR_8;

  if (VAR_8) {
   FUNC_2(VAR_3->sense_buffer +
    VAR_3->se_cmd.scsi_sense_length, 0, VAR_8);
   FUNC_3("Adding %u bytes of padding to"
    " SENSE.\n", VAR_8);
  }

  FUNC_3("Attaching SENSE DATA: %u bytes to iSCSI"
    " Response PDU\n",
    VAR_3->se_cmd.scsi_sense_length);
 }

 return VAR_4->conn_transport->iscsit_xmit_pdu(VAR_4, VAR_3, ((void*)0), VAR_7,
           VAR_9);
}
