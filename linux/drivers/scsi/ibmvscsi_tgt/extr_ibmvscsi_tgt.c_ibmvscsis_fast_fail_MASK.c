
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct srp_cmd {int cdb; } ;
struct se_cmd {scalar_t__ residual_count; scalar_t__ data_length; int scsi_sense_length; int sense_buffer; int scsi_status; } ;
struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_info {scalar_t__ fast_fail; } ;
struct iu_entry {TYPE_1__* sbuf; } ;
struct ibmvscsis_cmd {int flags; struct se_cmd se_cmd; struct iu_entry* iue; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,struct scsi_sense_hdr*) ;

__attribute__((used)) static u8 FUNC_3(struct scsi_info *VAR_3,
         struct ibmvscsis_cmd *VAR_4)
{
 struct iu_entry *VAR_5 = VAR_4->iue;
 struct se_cmd *VAR_6 = &VAR_4->se_cmd;
 struct srp_cmd *VAR_7 = (struct srp_cmd *)VAR_5->sbuf->buf;
 struct scsi_sense_hdr VAR_8;
 u8 VAR_9 = VAR_6->scsi_status;

 if (VAR_3->fast_fail && (FUNC_0(VAR_7->cdb) || FUNC_1(VAR_7->cdb)))
  if (FUNC_2(VAR_6->sense_buffer,
      VAR_6->scsi_sense_length, &VAR_8))
   if (VAR_8.sense_key == VAR_1 &&
       (VAR_6->residual_count == 0 ||
        VAR_6->residual_count == VAR_6->data_length)) {
    VAR_9 = VAR_2;
    VAR_4->flags |= VAR_0;
   }

 return VAR_9;
}
