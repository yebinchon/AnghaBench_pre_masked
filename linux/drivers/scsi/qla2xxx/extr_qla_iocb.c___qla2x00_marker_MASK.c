
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct scsi_qla_host {int vp_idx; struct qla_hw_data* hw; } ;
struct scsi_lun {int dummy; } ;
struct req_que {int id; } ;
struct qla_qpair {struct req_que* req; } ;
struct qla_hw_data {int pdev; } ;
struct mrk_entry_24xx {int handle; int vp_index; int lun; void* nport_handle; } ;
typedef int scsi_qla_host_t ;
struct TYPE_2__ {void* lun; int target; scalar_t__ modifier; int entry_type; } ;
typedef TYPE_1__ mrk_entry_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qla_hw_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct qla_qpair*,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__,struct scsi_lun*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int,char*) ;
 int VAR_4 ;
 int FUNC_9 (struct scsi_qla_host*,struct req_que*) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct scsi_qla_host *VAR_5, struct qla_qpair *VAR_6,
    uint16_t VAR_7, uint64_t VAR_8, uint8_t VAR_9)
{
 mrk_entry_t *VAR_10;
 struct mrk_entry_24xx *VAR_11 = ((void*)0);
 struct req_que *VAR_12 = VAR_6->req;
 struct qla_hw_data *VAR_13 = VAR_5->hw;
 scsi_qla_host_t *VAR_14 = FUNC_7(VAR_13->pdev);

 VAR_10 = (mrk_entry_t *)FUNC_3(VAR_6, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_4, VAR_14, 0x3026,
      "Failed to allocate Marker IOCB.\n");

  return (VAR_2);
 }

 VAR_10->entry_type = VAR_0;
 VAR_10->modifier = VAR_9;
 if (VAR_9 != VAR_1) {
  if (FUNC_0(VAR_13)) {
   VAR_11 = (struct mrk_entry_24xx *) VAR_10;
   VAR_11->nport_handle = FUNC_4(VAR_7);
   FUNC_6(VAR_8, (struct scsi_lun *)&VAR_11->lun);
   FUNC_5(VAR_11->lun, sizeof(VAR_11->lun));
   VAR_11->vp_index = VAR_5->vp_idx;
   VAR_11->handle = FUNC_1(VAR_12->id, VAR_11->handle);
  } else {
   FUNC_2(VAR_13, VAR_10->target, VAR_7);
   VAR_10->lun = FUNC_4((uint16_t)VAR_8);
  }
 }
 FUNC_10();

 FUNC_9(VAR_5, VAR_12);

 return (VAR_3);
}
