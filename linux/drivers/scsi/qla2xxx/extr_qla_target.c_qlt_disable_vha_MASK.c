
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct qla_tgt* qla_tgt; } ;
struct scsi_qla_host {int dpc_flags; TYPE_1__ vha_tgt; struct qla_hw_data* hw; } ;
struct qla_tgt {int dummy; } ;
struct qla_hw_data {int hardware_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct scsi_qla_host *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_3->hw;
 struct qla_tgt *VAR_5 = VAR_3->vha_tgt.qla_tgt;
 unsigned long VAR_6;

 if (!VAR_5) {
  FUNC_1(VAR_2, VAR_3, 0xe06a,
      "Unable to locate qla_tgt pointer from"
      " struct qla_hw_data\n");
  FUNC_0();
  return;
 }

 FUNC_6(&VAR_4->hardware_lock, VAR_6);
 FUNC_4(VAR_3);
 FUNC_7(&VAR_4->hardware_lock, VAR_6);

 FUNC_5(VAR_0, &VAR_3->dpc_flags);
 FUNC_3(VAR_3);
 if (FUNC_2(VAR_3) != VAR_1)
  FUNC_1(VAR_2, VAR_3, 0xe081,
         "qla2x00_wait_for_hba_online() failed\n");
}
