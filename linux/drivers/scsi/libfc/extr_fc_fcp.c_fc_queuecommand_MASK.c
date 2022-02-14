
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; scalar_t__ sc_data_direction; int (* scsi_done ) (struct scsi_cmnd*) ;int device; } ;
struct fc_stats {int ControlRequests; int OutputBytes; int OutputRequests; int InputBytes; int InputRequests; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct fc_remote_port {int dummy; } ;
struct fc_lport {int stats; TYPE_1__* host; scalar_t__ qfull; } ;
struct fc_fcp_pkt {int state; scalar_t__ req_flags; scalar_t__ data_len; scalar_t__ xfer_len; struct fc_rport* rport; struct scsi_cmnd* cmd; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int can_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 struct fc_fcp_pkt* FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_lport*,struct fc_fcp_pkt*) ;
 int FUNC_5 (struct fc_rport*) ;
 int FUNC_6 () ;
 struct fc_stats* FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*,char*,int ) ;
 struct fc_lport* FUNC_12 (struct Scsi_Host*) ;
 struct fc_rport* FUNC_13 (int ) ;
 int FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_cmnd*) ;

int FUNC_16(struct Scsi_Host *VAR_9, struct scsi_cmnd *VAR_10)
{
 struct fc_lport *VAR_11 = FUNC_12(VAR_9);
 struct fc_rport *VAR_12 = FUNC_13(FUNC_10(VAR_10->device));
 struct fc_fcp_pkt *VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 struct fc_stats *VAR_16;

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14) {
  VAR_10->result = VAR_14;
  VAR_10->scsi_done(VAR_10);
  return 0;
 }

 if (!*(struct fc_remote_port **)VAR_12->dd_data) {




  VAR_10->result = VAR_0 << 16;
  VAR_10->scsi_done(VAR_10);
  goto out;
 }

 if (!FUNC_1(VAR_11)) {
  if (VAR_11->qfull) {
   if (FUNC_0(VAR_11))
    FUNC_11(VAR_7, VAR_11->host,
          "libfc: queue full, "
          "reducing can_queue to %d.\n",
          VAR_11->host->can_queue);
  }
  VAR_15 = VAR_8;
  goto out;
 }

 VAR_13 = FUNC_2(VAR_11, VAR_6);
 if (VAR_13 == ((void*)0)) {
  VAR_15 = VAR_8;
  goto out;
 }




 VAR_13->cmd = VAR_10;
 VAR_13->rport = VAR_12;




 VAR_13->data_len = FUNC_9(VAR_10);
 VAR_13->xfer_len = 0;




 VAR_16 = FUNC_7(VAR_11->stats, FUNC_6());
 if (VAR_10->sc_data_direction == VAR_1) {
  VAR_13->req_flags = VAR_4;
  VAR_16->InputRequests++;
  VAR_16->InputBytes += VAR_13->data_len;
 } else if (VAR_10->sc_data_direction == VAR_2) {
  VAR_13->req_flags = VAR_5;
  VAR_16->OutputRequests++;
  VAR_16->OutputBytes += VAR_13->data_len;
 } else {
  VAR_13->req_flags = 0;
  VAR_16->ControlRequests++;
 }
 FUNC_8();






 VAR_14 = FUNC_4(VAR_11, VAR_13);
 if (VAR_14 != 0) {
  VAR_13->state = VAR_3;
  FUNC_3(VAR_13);
  VAR_15 = VAR_8;
 }
out:
 return VAR_15;
}
