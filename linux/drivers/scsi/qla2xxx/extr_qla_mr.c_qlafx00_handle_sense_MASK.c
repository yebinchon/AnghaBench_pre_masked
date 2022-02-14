
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int host_no; } ;
struct scsi_cmnd {scalar_t__ sense_buffer; int result; TYPE_1__* device; } ;
struct rsp_que {TYPE_2__* status_srb; } ;
struct TYPE_10__ {struct scsi_qla_host* vha; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_9__ {int lun; int id; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (scalar_t__,int *,scalar_t__) ;
 int FUNC_6 (scalar_t__,struct scsi_qla_host*,int,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (scalar_t__,struct scsi_qla_host*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_8(srb_t *VAR_3, uint8_t *VAR_4, uint32_t VAR_5,
       uint32_t VAR_6, struct rsp_que *VAR_7, int VAR_8)
{
 struct scsi_qla_host *VAR_9 = VAR_3->vha;
 struct scsi_cmnd *VAR_10 = FUNC_0(VAR_3);
 uint32_t VAR_11;

 FUNC_4(VAR_3, VAR_6);

 if (VAR_6 >= VAR_0)
  VAR_6 = VAR_0;

 FUNC_2(VAR_3, VAR_6);
 FUNC_3(VAR_3, VAR_10->sense_buffer);
 VAR_11 = VAR_6;

 if (VAR_6 > VAR_5)
  VAR_6 = VAR_5;

 FUNC_5(VAR_10->sense_buffer, VAR_4, VAR_6);

 FUNC_4(VAR_3, FUNC_1(VAR_3) - VAR_6);

 FUNC_3(VAR_3, VAR_10->sense_buffer + VAR_6);
 VAR_11 -= VAR_6;
 FUNC_2(VAR_3, VAR_11);

 FUNC_6(VAR_2, VAR_9, 0x304d,
     "sense_len=0x%x par_sense_len=0x%x track_sense_len=0x%x.\n",
     VAR_6, VAR_5, VAR_11);
 if (FUNC_1(VAR_3) > 0) {
  VAR_7->status_srb = VAR_3;
  VAR_10->result = VAR_8;
 }

 if (VAR_6) {
  FUNC_6(VAR_2 + VAR_1, VAR_9, 0x3039,
      "Check condition Sense data, nexus%ld:%d:%llu cmd=%p.\n",
      VAR_3->vha->host_no, VAR_10->device->id, VAR_10->device->lun,
      VAR_10);
  FUNC_7(VAR_2 + VAR_1, VAR_9, 0x3049,
      VAR_10->sense_buffer, VAR_6);
 }
}
