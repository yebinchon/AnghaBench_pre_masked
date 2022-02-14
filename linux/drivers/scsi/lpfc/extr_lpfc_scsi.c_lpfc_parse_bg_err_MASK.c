
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct sli3_bg_fields {scalar_t__ bgstat; scalar_t__ bghm; } ;
struct scsi_dif_tuple {int dummy; } ;
struct scsi_cmnd {int result; int* sense_buffer; int request; int * cmnd; TYPE_3__* device; } ;
struct TYPE_4__ {struct sli3_bg_fields sli3_bg; } ;
struct TYPE_5__ {TYPE_1__ unsli3; } ;
struct lpfc_iocbq {TYPE_2__ iocb; } ;
struct lpfc_io_buf {struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int bg_apptag_err_cnt; int bg_reftag_err_cnt; int bg_guard_err_cnt; } ;
struct TYPE_6__ {scalar_t__ sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_8 (struct lpfc_hba*,int ,int,char*,int ,unsigned long long,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int*) ;
 int FUNC_10 (int,int*,int ,int,int) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_hba *VAR_8, struct lpfc_io_buf *VAR_9,
    struct lpfc_iocbq *VAR_10)
{
 struct scsi_cmnd *VAR_11 = VAR_9->pCmd;
 struct sli3_bg_fields *VAR_12 = &VAR_10->iocb.unsli3.sli3_bg;
 int VAR_13 = 0;
 uint32_t VAR_14 = VAR_12->bghm;
 uint32_t VAR_15 = VAR_12->bgstat;
 uint64_t VAR_16 = 0;

 if (FUNC_4(VAR_15)) {
  VAR_11->result = VAR_1 << 16;
  FUNC_8(VAR_8, VAR_4, VAR_6 | VAR_5,
    "9072 BLKGRD: Invalid BG Profile in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_11->cmnd[0],
    (unsigned long long)FUNC_11(VAR_11),
    FUNC_0(VAR_11->request), VAR_15, VAR_14);
  VAR_13 = (-1);
  goto out;
 }

 if (FUNC_6(VAR_15)) {
  VAR_11->result = VAR_1 << 16;
  FUNC_8(VAR_8, VAR_4, VAR_6 | VAR_5,
    "9073 BLKGRD: Invalid BG PDIF Block in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_11->cmnd[0],
    (unsigned long long)FUNC_11(VAR_11),
    FUNC_0(VAR_11->request), VAR_15, VAR_14);
  VAR_13 = (-1);
  goto out;
 }

 if (FUNC_2(VAR_15)) {
  VAR_13 = 1;

  FUNC_10(1, VAR_11->sense_buffer, VAR_3,
    0x10, 0x1);
  VAR_11->result = VAR_2 << 24 | VAR_0 << 16 |
         VAR_7;
  VAR_8->bg_guard_err_cnt++;
  FUNC_8(VAR_8, VAR_4, VAR_6 | VAR_5,
    "9055 BLKGRD: Guard Tag error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_11->cmnd[0],
    (unsigned long long)FUNC_11(VAR_11),
    FUNC_0(VAR_11->request), VAR_15, VAR_14);
 }

 if (FUNC_5(VAR_15)) {
  VAR_13 = 1;

  FUNC_10(1, VAR_11->sense_buffer, VAR_3,
    0x10, 0x3);
  VAR_11->result = VAR_2 << 24 | VAR_0 << 16 |
         VAR_7;

  VAR_8->bg_reftag_err_cnt++;
  FUNC_8(VAR_8, VAR_4, VAR_6 | VAR_5,
    "9056 BLKGRD: Ref Tag error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_11->cmnd[0],
    (unsigned long long)FUNC_11(VAR_11),
    FUNC_0(VAR_11->request), VAR_15, VAR_14);
 }

 if (FUNC_1(VAR_15)) {
  VAR_13 = 1;

  FUNC_10(1, VAR_11->sense_buffer, VAR_3,
    0x10, 0x2);
  VAR_11->result = VAR_2 << 24 | VAR_0 << 16 |
         VAR_7;

  VAR_8->bg_apptag_err_cnt++;
  FUNC_8(VAR_8, VAR_4, VAR_6 | VAR_5,
    "9061 BLKGRD: App Tag error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_11->cmnd[0],
    (unsigned long long)FUNC_11(VAR_11),
    FUNC_0(VAR_11->request), VAR_15, VAR_14);
 }

 if (FUNC_3(VAR_15)) {






  VAR_11->sense_buffer[7] = 0xc;
  VAR_11->sense_buffer[8] = 0;
  VAR_11->sense_buffer[9] = 0xa;
  VAR_11->sense_buffer[10] = 0x80;


  switch (FUNC_12(VAR_11)) {
  case 133:
  case 128:
   VAR_14 /= VAR_11->device->sector_size;
   break;
  case 131:
  case 130:
  case 132:
  case 129:
   VAR_14 /= (VAR_11->device->sector_size +
    sizeof(struct scsi_dif_tuple));
   break;
  }

  VAR_16 = FUNC_11(VAR_11);
  VAR_16 += VAR_14;


  FUNC_9(VAR_16, &VAR_11->sense_buffer[12]);
 }

 if (!VAR_13) {

  FUNC_8(VAR_8, VAR_4, VAR_6 | VAR_5,
    "9057 BLKGRD: Unknown error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_11->cmnd[0],
    (unsigned long long)FUNC_11(VAR_11),
    FUNC_0(VAR_11->request), VAR_15, VAR_14);


  FUNC_7(VAR_8, VAR_9);
 }
out:
 return VAR_13;
}
