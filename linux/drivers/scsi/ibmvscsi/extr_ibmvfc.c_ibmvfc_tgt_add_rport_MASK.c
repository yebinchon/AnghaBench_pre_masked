
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bb_rcv_sz; } ;
struct TYPE_5__ {int * class3_parms; int * class2_parms; int * class1_parms; TYPE_1__ common; } ;
struct ibmvfc_target {scalar_t__ action; TYPE_2__ service_parms; int target_id; struct fc_rport* rport; int kref; int timer; int queue; int ids; struct ibmvfc_host* vhost; } ;
struct ibmvfc_host {TYPE_3__* host; } ;
struct fc_rport {int maxframe_size; scalar_t__ rqst_q; int supported_classes; int scsi_target_id; } ;
struct TYPE_6__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 struct fc_rport* FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (struct fc_rport*) ;
 int VAR_5 ;
 int FUNC_6 (struct ibmvfc_target*,scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (struct ibmvfc_target*,char*) ;

__attribute__((used)) static void FUNC_12(struct ibmvfc_target *VAR_6)
{
 struct ibmvfc_host *VAR_7 = VAR_6->vhost;
 struct fc_rport *VAR_8;
 unsigned long VAR_9;

 FUNC_11(VAR_6, "Adding rport\n");
 VAR_8 = FUNC_4(VAR_7->host, 0, &VAR_6->ids);
 FUNC_9(VAR_7->host->host_lock, VAR_9);

 if (VAR_8 && VAR_6->action == VAR_4) {
  FUNC_11(VAR_6, "Deleting rport\n");
  FUNC_8(&VAR_6->queue);
  FUNC_6(VAR_6, VAR_3);
  FUNC_10(VAR_7->host->host_lock, VAR_9);
  FUNC_5(VAR_8);
  FUNC_3(&VAR_6->timer);
  FUNC_7(&VAR_6->kref, VAR_5);
  return;
 } else if (VAR_8 && VAR_6->action == VAR_3) {
  FUNC_10(VAR_7->host->host_lock, VAR_9);
  return;
 }

 if (VAR_8) {
  FUNC_11(VAR_6, "rport add succeeded\n");
  VAR_6->rport = VAR_8;
  VAR_8->maxframe_size = FUNC_0(VAR_6->service_parms.common.bb_rcv_sz) & 0x0fff;
  VAR_8->supported_classes = 0;
  VAR_6->target_id = VAR_8->scsi_target_id;
  if (FUNC_1(VAR_6->service_parms.class1_parms[0]) & 0x80000000)
   VAR_8->supported_classes |= VAR_0;
  if (FUNC_1(VAR_6->service_parms.class2_parms[0]) & 0x80000000)
   VAR_8->supported_classes |= VAR_1;
  if (FUNC_1(VAR_6->service_parms.class3_parms[0]) & 0x80000000)
   VAR_8->supported_classes |= VAR_2;
  if (VAR_8->rqst_q)
   FUNC_2(VAR_8->rqst_q, 1);
 } else
  FUNC_11(VAR_6, "rport add failed\n");
 FUNC_10(VAR_7->host->host_lock, VAR_9);
}
