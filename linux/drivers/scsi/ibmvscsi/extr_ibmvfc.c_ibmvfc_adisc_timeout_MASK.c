
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int length; void* opcode; void* version; } ;
struct ibmvfc_tmf {void* cancel_key; int scsi_id; TYPE_2__ common; } ;
struct ibmvfc_target {scalar_t__ action; int cancel_key; int kref; int scsi_id; struct ibmvfc_host* vhost; } ;
struct ibmvfc_host {scalar_t__ abort_threads; scalar_t__ state; scalar_t__ action; TYPE_3__* host; } ;
struct TYPE_4__ {struct ibmvfc_tmf tmf; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;
struct TYPE_6__ {int host_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ibmvfc_host*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ibmvfc_target* FUNC_4 (int ,struct timer_list*,int ) ;
 struct ibmvfc_event* FUNC_5 (struct ibmvfc_host*) ;
 int FUNC_6 (struct ibmvfc_event*,int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct ibmvfc_tmf*,int ,int) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ,unsigned long) ;
 struct ibmvfc_target* VAR_9 ;
 int FUNC_13 (struct ibmvfc_target*,char*) ;
 int FUNC_14 (struct ibmvfc_target*,char*,int) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_15(struct timer_list *VAR_11)
{
 struct ibmvfc_target *VAR_12 = FUNC_4(VAR_12, VAR_11, VAR_10);
 struct ibmvfc_host *VAR_13 = VAR_12->vhost;
 struct ibmvfc_event *VAR_14;
 struct ibmvfc_tmf *VAR_15;
 unsigned long VAR_16;
 int VAR_17;

 FUNC_13(VAR_12, "ADISC timeout\n");
 FUNC_11(VAR_13->host->host_lock, VAR_16);
 if (VAR_13->abort_threads >= VAR_6 ||
     VAR_12->action != VAR_3 ||
     VAR_13->state != VAR_1 ||
     VAR_13->action != VAR_0) {
  FUNC_12(VAR_13->host->host_lock, VAR_16);
  return;
 }

 VAR_13->abort_threads++;
 FUNC_8(&VAR_12->kref);
 VAR_14 = FUNC_5(VAR_13);
 FUNC_6(VAR_14, VAR_8, VAR_2);

 VAR_14->tgt = VAR_12;
 VAR_15 = &VAR_14->iu.tmf;
 FUNC_10(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->common.version = FUNC_2(1);
 VAR_15->common.opcode = FUNC_2(VAR_4);
 VAR_15->common.length = FUNC_1(sizeof(*VAR_15));
 VAR_15->scsi_id = FUNC_3(VAR_12->scsi_id);
 VAR_15->cancel_key = FUNC_2(VAR_12->cancel_key);

 VAR_17 = FUNC_7(VAR_14, VAR_13, VAR_5);

 if (VAR_17) {
  FUNC_14(VAR_12, "Failed to send cancel event for ADISC. rc=%d\n", VAR_17);
  VAR_13->abort_threads--;
  FUNC_9(&VAR_12->kref, VAR_7);
  FUNC_0(VAR_13);
 } else
  FUNC_13(VAR_12, "Attempting to cancel ADISC\n");
 FUNC_12(VAR_13->host->host_lock, VAR_16);
}
