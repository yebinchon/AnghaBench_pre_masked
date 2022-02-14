
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct qla_hw_data {scalar_t__ optrom_state; TYPE_2__* isp_ops; scalar_t__ wq; int board_disable; int pdev; } ;
struct TYPE_15__ {int host_no; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_14__ {scalar_t__ (* abort_isp ) (TYPE_3__*) ;} ;
struct TYPE_13__ {unsigned int id; int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 TYPE_3__* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_15(struct scsi_cmnd *VAR_9)
{
 scsi_qla_host_t *VAR_10 = FUNC_13(VAR_9->device->host);
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 int VAR_12 = VAR_1;
 unsigned int VAR_13;
 uint64_t VAR_14;
 scsi_qla_host_t *VAR_15 = FUNC_3(VAR_11->pdev);

 if (FUNC_6(VAR_11)) {
  FUNC_4(VAR_7, VAR_10, 0x8041,
      "PCI/Register disconnect, exiting.\n");
  FUNC_11(&VAR_11->board_disable);
  return VAR_5;
 }

 VAR_13 = VAR_9->device->id;
 VAR_14 = VAR_9->device->lun;

 FUNC_4(VAR_7, VAR_10, 0x8018,
     "ADAPTER RESET ISSUED nexus=%ld:%d:%llu.\n", VAR_10->host_no, VAR_13, VAR_14);





 if (FUNC_7(VAR_10) || VAR_11->optrom_state != VAR_4)
  goto eh_host_reset_lock;

 if (VAR_10 != VAR_15) {
  if (FUNC_8(VAR_10))
   goto eh_host_reset_lock;
 } else {
  if (FUNC_0(VAR_10->hw)) {
   if (!FUNC_10(VAR_10)) {

    VAR_12 = VAR_5;
    goto eh_host_reset_lock;
   }

  }
  if (VAR_11->wq)
   FUNC_2(VAR_11->wq);

  FUNC_12(VAR_0, &VAR_15->dpc_flags);
  if (VAR_11->isp_ops->abort_isp(VAR_15)) {
   FUNC_1(VAR_0, &VAR_15->dpc_flags);

   FUNC_12(VAR_2, &VAR_15->dpc_flags);

   if (FUNC_9(VAR_10) != VAR_3) {
    FUNC_4(VAR_8, VAR_10, 0x802a,
        "wait for hba online failed.\n");
    goto eh_host_reset_lock;
   }
  }
  FUNC_1(VAR_0, &VAR_15->dpc_flags);
 }


 if (FUNC_5(VAR_10, 0, 0, VAR_6) ==
  VAR_3)
  VAR_12 = VAR_5;

eh_host_reset_lock:
 FUNC_4(VAR_7, VAR_10, 0x8017,
     "ADAPTER RESET %s nexus=%ld:%d:%llu.\n",
     (VAR_12 == VAR_1) ? "FAILED" : "SUCCEEDED", VAR_10->host_no, VAR_13, VAR_14);

 return VAR_12;
}
