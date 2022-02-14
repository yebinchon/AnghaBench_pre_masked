
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fcp_abort_io; scalar_t__ fcp_cleanup; scalar_t__ fcp_cmd_send; } ;
struct fc_lport {TYPE_2__* host; struct fc_fcp_internal* scsi_priv; TYPE_1__ tt; } ;
struct fc_fcp_internal {int scsi_pkt_pool; int scsi_queue_lock; int scsi_pkt_queue; int max_can_queue; } ;
struct TYPE_4__ {int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct fc_fcp_internal*) ;
 struct fc_fcp_internal* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct fc_lport *VAR_6)
{
 int VAR_7;
 struct fc_fcp_internal *VAR_8;

 if (!VAR_6->tt.fcp_cmd_send)
  VAR_6->tt.fcp_cmd_send = VAR_4;

 if (!VAR_6->tt.fcp_cleanup)
  VAR_6->tt.fcp_cleanup = VAR_3;

 if (!VAR_6->tt.fcp_abort_io)
  VAR_6->tt.fcp_abort_io = VAR_2;

 VAR_8 = FUNC_2(sizeof(struct fc_fcp_internal), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_6->scsi_priv = VAR_8;
 VAR_8->max_can_queue = VAR_6->host->can_queue;
 FUNC_0(&VAR_8->scsi_pkt_queue);
 FUNC_4(&VAR_8->scsi_queue_lock);

 VAR_8->scsi_pkt_pool = FUNC_3(2, VAR_5);
 if (!VAR_8->scsi_pkt_pool) {
  VAR_7 = -VAR_0;
  goto free_internal;
 }
 return 0;

free_internal:
 FUNC_1(VAR_8);
 return VAR_7;
}
