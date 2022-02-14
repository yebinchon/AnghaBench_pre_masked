
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_18__ {scalar_t__ scan_retry; int scan_flags; } ;
struct TYPE_17__ {scalar_t__ nvme_enabled; } ;
struct scsi_qla_host {int dpc_flags; int work_lock; TYPE_6__ scan; TYPE_5__ flags; } ;
struct ct_sns_req {int command; } ;
struct TYPE_13__ {scalar_t__ req; } ;
struct TYPE_14__ {TYPE_1__ ctarg; } ;
struct TYPE_15__ {int timer; TYPE_2__ u; } ;
struct TYPE_16__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_19__ {scalar_t__ gen2; char* name; int rc; TYPE_4__ u; struct scsi_qla_host* vha; } ;
typedef TYPE_7__ srb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,char const*,...) ;
 int VAR_10 ;
 int FUNC_3 (struct scsi_qla_host*,TYPE_7__*) ;
 int FUNC_4 (struct scsi_qla_host*,TYPE_7__*) ;
 int FUNC_5 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_6 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(srb_t *VAR_11, int VAR_12)
{
 struct scsi_qla_host *VAR_13 = VAR_11->vha;
 struct ct_sns_req *VAR_14 =
  (struct ct_sns_req *)VAR_11->u.iocb_cmd.u.ctarg.req;
 u16 VAR_15 = FUNC_0(VAR_14->command);
 u8 VAR_16 = VAR_11->gen2;
 unsigned long VAR_17;
 int VAR_18;


 FUNC_2(VAR_10, VAR_13, 0xffff,
     "Async done-%s res %x FC4Type %x\n",
     VAR_11->name, VAR_12, VAR_11->gen2);

 FUNC_1(&VAR_11->u.iocb_cmd.timer);
 VAR_11->rc = VAR_12;
 if (VAR_12) {
  unsigned long VAR_19;
  const char *VAR_20 = VAR_11->name;






  VAR_18 = FUNC_5(VAR_13, VAR_11,
      VAR_6);
  if (VAR_18) {

   FUNC_3(VAR_13, VAR_11);

   FUNC_9(&VAR_13->work_lock, VAR_19);
   VAR_13->scan.scan_flags &= ~VAR_9;
   VAR_13->scan.scan_retry++;
   FUNC_10(&VAR_13->work_lock, VAR_19);

   if (VAR_13->scan.scan_retry < VAR_5) {
    FUNC_8(VAR_3, &VAR_13->dpc_flags);
    FUNC_8(VAR_4, &VAR_13->dpc_flags);
    FUNC_7(VAR_13);
   } else {
    FUNC_2(VAR_10, VAR_13, 0xffff,
        "Async done-%s rescan failed on all retries.\n",
        VAR_20);
   }
  }
  return;
 }

 FUNC_4(VAR_13, VAR_11);

 if ((VAR_16 == VAR_0) && VAR_13->flags.nvme_enabled &&
     VAR_15 == VAR_1) {
  FUNC_9(&VAR_13->work_lock, VAR_17);
  VAR_13->scan.scan_flags &= ~VAR_9;
  FUNC_10(&VAR_13->work_lock, VAR_17);

  VAR_11->rc = VAR_12;
  VAR_18 = FUNC_6(VAR_13, VAR_11, VAR_7);
  if (VAR_18) {
   FUNC_3(VAR_13, VAR_11);
   FUNC_8(VAR_3, &VAR_13->dpc_flags);
   FUNC_8(VAR_4, &VAR_13->dpc_flags);
  }
  return;
 }

 if (VAR_15 == VAR_2) {
  VAR_18 = FUNC_5(VAR_13, VAR_11,
      VAR_8);
 } else {
  VAR_18 = FUNC_5(VAR_13, VAR_11,
      VAR_6);
 }

 if (VAR_18) {
  FUNC_3(VAR_13, VAR_11);
  FUNC_8(VAR_3, &VAR_13->dpc_flags);
  FUNC_8(VAR_4, &VAR_13->dpc_flags);
  return;
 }
}
